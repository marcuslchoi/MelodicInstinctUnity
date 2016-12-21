﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using Parse;

//this is the view/controller
public class GameMediator : MonoBehaviour
{

	public Button PlayButton;
	public Camera CameraCanvas;
	public List<GameObject> Notes3D;
	public Slider BPMSlider;
	public Text BPMText;
	public Slider MelodyLengthSlider;
	public Text MelodyLengthText;
	public Text TonicText;
	public Button TutorialModeButton;
	public Text TutorialModeText;
	public Button PlayExampleMelody;

	MusicNote currentNote;

	public static int guesses;

	public static Melody currentMelody;
	Scale myScale;

	public Timer timer;
	public Text GameLengthText;
	public Text DrumsText;

	public List<GameObject> SolfegeAnimations;

	public List<Button> ToneButtons;
	public Text Feedback;
	public Text StatsText;

	Dictionary<string,GameObject> SolfegeToAnimation = new Dictionary<string,GameObject>();

	string tonic;// = "C";
	int tempo;// = 60;
	int melodyLength;// = 4;
	int measures = 2;
	int beatsPerMeasure = 4;
	bool isTutorialMode = false;
	bool isDrumsGame = true;

	//audiosource of the drum track
	AudioSource aSource;

	string defaultTutorialSolfege = ScaleTone.SolfegeFlats [0];
	string defaultTonic = "C";

	// Use this for initialization
	void Start () 
	{
		aSource = GetComponent<AudioSource>();

		//populate solfege to animation dictionary
		int i = 0;
		foreach (var solfegeKey in ScaleTone.SolfegeFlats) 
		{
			SolfegeToAnimation [solfegeKey] = SolfegeAnimations [i];
			i++;
		}

		ExampleMelodies.GenerateMelodies ();

		BPMSlider.minValue = 30f;
		BPMSlider.maxValue = 200f;
		BPMSlider.value = 70f;

		MelodyLengthSlider.minValue = 1f;
		MelodyLengthSlider.maxValue = 8f;
		MelodyLengthSlider.value = 4f;;

		//TODO: DRY
		tonic = TonicText.text;
		tempo = (int)BPMSlider.value;
		melodyLength = (int)MelodyLengthSlider.value;

		//TODO: GET THIS FROM OPTIONS
		timer.Minutes = 2;

		GenerateNewScale (tonic);
		PositionToneButtons (tonic);

	}

	void GenerateNewScale(string tonic)
	{
		myScale = new Scale (tonic, ScaleType.MAJOR);
	
	}

	void GenerateNewMelody(string tonic)
	{
		//TODO: USE THIS METHOD IF TONIC CHANGES BETWEEN QUESTIONS
		//GenerateNewScale (tonic);

		if (isDrumsGame)
			currentMelody = new Melody (melodyLength, myScale, tempo, measures, beatsPerMeasure);
		else
			currentMelody = new Melody (melodyLength, myScale, tempo);

	}

	//positions tone buttons and assigns note to each
	void PositionToneButtons(string tonic)
	{
		foreach (var toneButton in ToneButtons)
			toneButton.onClick.RemoveAllListeners ();

		//viewport coordinates
		float maxX = 1f;
		float distToCamera = transform.position.z - CameraCanvas.transform.position.z;
		float buttonHeight = .1f;
		int numberHalves;

		//c and f have different spacing
		if (tonic == "C" || tonic == "F")
			numberHalves = 14;
		else
			numberHalves = 15;

		float halfKey = maxX/(float)numberHalves;
		float buttonWidth = 2f * halfKey;
		float distToLeft = 0; //+padding
		float distToBottom;
		string blackString = "box";
		string whiteString = "white";

		//this puts the tone keys in correct position depending on tonic
		char previousKeyColor=' ';
		for (var i = 0; i < ToneButtons.Count; i++) 
		{
			ToneButtons [i].onClick.AddListener (ToneOnClick);
			var playToneBtn = ToneButtons[i].gameObject.GetComponent<PlayToneBtn> ();

			char keyColor = MusicNote.TonicToKeyLayout [tonic] [i];

			if (keyColor == 'W') 
			{
				distToBottom = buttonHeight * 0.5f;
				playToneBtn.keyImage.overrideSprite = Resources.Load<Sprite> (whiteString);
				playToneBtn.toneText.color = Color.black;
			} 
			else 
			{
				distToBottom = buttonHeight * 1.5f;
				playToneBtn.keyImage.overrideSprite = Resources.Load<Sprite> (blackString);
				playToneBtn.toneText.color = Color.white;
			}

			if (keyColor == previousKeyColor && keyColor == 'W')
				distToLeft += 2f * halfKey;
			else
				distToLeft += halfKey;

			ToneButtons [i].transform.position = CameraCanvas.ViewportToWorldPoint (new Vector3 (distToLeft, distToBottom, distToCamera));

			//convert to coordinates relative to screen size
			float width = (float)Screen.width * halfKey*2f;
			float height = (float)Screen.height * buttonHeight;
			playToneBtn.keyImage.rectTransform.sizeDelta = new Vector2 (width,height);

			previousKeyColor = keyColor;

			AssignMusicNoteToButton (i, playToneBtn);
		}
	
	}

	void AssignMusicNoteToButton (int i, PlayToneBtn playToneBtn)
	{
		//assign the music note to the button
		var musicNote = myScale.MusicNotes [i + myScale.TonicIndex];
		playToneBtn.Note = musicNote;
		playToneBtn.PopulateFields ();
	}

	public void PlayButtonOnClick()
	{
		timer.StartTimer ();

		if (isDrumsGame) {
			//length of time of the melody before user can answer
			var playtime = (float)Constants.SECONDS_PER_MIN / (float)tempo * (float)beatsPerMeasure * (float)measures;
			InvokeRepeating ("PlayCurrentMelody", 0f, playtime * 2f);
		} 
		else 
		{
		
			PlayCurrentMelody ();
		}

	}

	void ResetForNewMelody()
	{
		guesses = 0;

		//hide the 3d notes
		foreach (var note3D in Notes3D) 
		{
			Renderer rend = note3D.GetComponentInChildren<Renderer>();
			rend.material.color=Color.black;
			note3D.SetActive (false);
		}
		Feedback.text = "";

		isCorrectMelody = true;

		timeBeginAnswer = Time.time + currentMelody.Playtime;

		StatsText.text = correctMelodies +"/"+ melodiesPlayed;
	
	}

	public void PlayCurrentMelody()
	{

		if (timer.TimeLeft == 0)
			CancelInvoke ("PlayCurrentMelody");

		GenerateNewMelody (tonic);

		ResetForNewMelody ();

		melodiesPlayed++;

		//plays the drum track at certain tempo
		if (isDrumsGame) 
		{
			aSource.pitch = (float)tempo / Constants.SECONDS_PER_MIN;
			aSource.Play ();
		}

		//TODO: CALL THIS ONLY IF TONIC CHANGED
		PositionToneButtons (tonic);

		AssignAudioClipInCorrectOctave ();

		//the beats
		foreach (var beat in currentMelody.NoteBeats)
			print (beat);

		StartCoroutine (TempDisableToneButtons ());
		StartCoroutine(currentMelody.Play ());
		StartCoroutine (EnableNotes3D ());

	}

	//assigns audio clip of the scale degree in the same octave as the current note
	void AssignAudioClipInCorrectOctave()
	{
		foreach (var toneButton in ToneButtons) 
		{

			var playToneBtn = toneButton.GetComponent<PlayToneBtn> ();
			var currentSolfege = currentMelody.Notes [guesses].TheScaleTone.SolfegeOctave;

			if (currentSolfege.Contains (playToneBtn.toneText.text))
				playToneBtn.SetAudioClip (currentMelody.ToneClips [guesses]);	

		}
	
	}

	IEnumerator TempDisableToneButtons()
	{
		foreach (var toneButton in ToneButtons)
			toneButton.enabled = false;

		//disable for melody playtime minus 1 beat
		yield return new WaitForSeconds (currentMelody.Playtime - currentMelody.TimePerBeat);

		foreach (var toneButton in ToneButtons)
			toneButton.enabled = true;
	}

	IEnumerator EnableNotes3D()
	{
		var timesBetweenNotes = currentMelody.TimesBetweenNotes;
		for (var i = 0; i < timesBetweenNotes.Count; i++) 
		{
			yield return new WaitForSeconds (currentMelody.TimesBetweenNotes[i]);
			Notes3D [i].SetActive (true);
		}

	}

	public static float timeBeginAnswer;

	int melodiesPlayed = 0;
	int correctMelodies = 0;
	bool isCorrectMelody;

	bool CheckIfCorrectGuess()
	{
		bool isCorrectNote = false;
		bool isCorrectBeat = false;
		bool isCorrectGuess = false;

		if (guesses < currentMelody.Notes.Count) 
		{
			//check if correct beat
			//beat recorded in playtonebtn so its time is recorded on pointer down, not on click
			float answerBeat = PlayToneBtn.answerBeat;
			if (Mathf.Abs (answerBeat - currentMelody.NoteBeats [guesses]) < Constants.maxBeatDifference)
				isCorrectBeat = true;

			//check if correct note
			var currentSolfege = currentMelody.Notes [guesses].TheScaleTone.SolfegeOctave;
			if (currentSolfege.Contains(PlayToneBtn.solfClicked))
				isCorrectNote = true;

			print (isCorrectNote + " " + PlayToneBtn.solfClicked);
			print (isCorrectBeat + "(" + answerBeat + ")");

		}

		if (isDrumsGame)
			isCorrectGuess = isCorrectNote && isCorrectBeat;
		else
			isCorrectGuess = isCorrectNote;

		return isCorrectGuess;
	
	}
	public void ToneOnClick()
	{
		foreach (var animation in SolfegeAnimations)
			animation.SetActive (false);

		//set the current solfege animation active
		var currentSolfegeAnimation = SolfegeToAnimation[PlayToneBtn.solfClicked];
		currentSolfegeAnimation.SetActive (true);

		bool isCorrectGuess = CheckIfCorrectGuess ();

		//only display wrong if within the guesses range of the melody
		if (guesses < currentMelody.Notes.Count) {
			Renderer rend = Notes3D [guesses].GetComponentInChildren<Renderer> ();

			if (!(isCorrectGuess)) {
				isCorrectMelody = false;
				Feedback.color = Color.red;
				StartCoroutine (FlashWrong ());
				rend.material.color = Color.red;
		
			} else {
				Feedback.text = "";
				rend.material.color = Color.green;
			}

			//guesses is the index of the last melody note
			if (guesses == currentMelody.Notes.Count - 1) 
			{	
				if (isCorrectMelody) 
				{
					correctMelodies++;
					Feedback.text = "CORRECT!";
					Feedback.color = Color.green;
				}
					
			}

		}
		guesses++;

		if (guesses < currentMelody.Notes.Count)
			AssignAudioClipInCorrectOctave ();

		//only pertains to non-drums game, generates and plays a new melody with delay
		if (!isDrumsGame && guesses == currentMelody.Notes.Count) 
		{
			StartCoroutine(PlayCurrentMelodyWithDelay (currentMelody.TimePerBeat));

		}
	}

	IEnumerator PlayCurrentMelodyWithDelay(float seconds)
	{
		yield return new WaitForSeconds(seconds);
		PlayCurrentMelody ();
	}

	IEnumerator FlashWrong()
	{
		float flashOffTime = 0.05f;
		//flash off
		Feedback.text="";
		yield return new WaitForSeconds (flashOffTime);

		float flashOnTime = 2f;
		//flash on
		Feedback.text="WRONG";
		yield return new WaitForSeconds (flashOnTime);
		Feedback.text = "";
	}
		
	int melodyIndex = 0;
	public void PlayTuneOnClick()
	{
		var currentSolfege = "DO";//PlayToneBtn.solfClicked;

		var melodies = ExampleMelodies.SolfegeToMelodies[currentSolfege];

		StartCoroutine (melodies[melodyIndex].Play ());

		if (melodyIndex == melodies.Count - 1)
			melodyIndex = 0;
		else
			melodyIndex++;
	}

	#region settings
	public void BPMSliderOnValueChanged(float value)
	{
		tempo = (int)value;//BPMSlider.value;
		BPMText.text = string.Format ("TEMPO: {0} BPM",tempo);

	}
	public void MelodyLengthSliderOnValueChanged(float value)
	{
		melodyLength = (int)value;
		MelodyLengthText.text = string.Format ("{0} NOTES / MELODY",melodyLength);

	}
	public void TonicDropdownOnValueChanged(UnityEngine.UI.Dropdown dropdown)
	{
		tonic = TonicText.text;
		print ("new tonic: " + tonic);

	}

	public void GameLengthDropdownOnValueChanged(UnityEngine.UI.Dropdown dropdown)
	{
		var gameLengthTempArray = GameLengthText.text.Split (' ');
		var minutes = int.Parse(gameLengthTempArray [0]);

		timer.Minutes = minutes;
		timer.Text.text = timer.Minutes + ":00";

	}

	public void DrumsDropdownOnValueChanged(UnityEngine.UI.Dropdown dropdown)
	{
		print ("changed drums");
		if(DrumsText.text.Contains("OFF"))
			isDrumsGame = false;

	}

	public void TutorialModeOnClick()
	{
		isTutorialMode = !isTutorialMode;
		PlayExampleMelody.gameObject.SetActive (isTutorialMode);

		string onOrOff;
		if (isTutorialMode) 
		{
			melodyIndex = 0;
			PlayToneBtn.solfClicked = defaultTutorialSolfege;
			//TODO: HIGHLIGHT THE SOLFEGE BUTTON PRESSED
			ExampleMelodies.SetExampleMelodies (PlayToneBtn.solfClicked);
			onOrOff = "ON";
		}
		else
			onOrOff = "OFF";

		TutorialModeText.text = "TUTORIAL MODE: " + onOrOff;
	
	}

	#endregion
}
