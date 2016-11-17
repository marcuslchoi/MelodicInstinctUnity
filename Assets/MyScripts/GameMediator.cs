using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

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

	public GameObject Solfege3D;

	MusicNote currentNote;

	public static int guesses;

	public static Melody currentMelody;
	Scale myScale;

	public Timer timer;
	public Text GameLengthText;

	public List<GameObject> Solfege3Ds;

	public List<Button> ToneButtons;
	public Text Feedback;
	public Text StatsText;

	Dictionary<string,GameObject> SolfToAnimation = new Dictionary<string,GameObject>();

	string tonic;// = "C";
	int tempo;// = 60;
	int melodyLength;// = 4;
	int measures = 2;
	int beatsPerMeasure = 4;

	// Use this for initialization
	void Start () 
	{
		
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
	}

	void GenerateNewMelody(string tonic)
	{
		myScale = new Scale (tonic, ScaleType.MAJOR);
		currentMelody = new Melody (melodyLength, myScale, tempo, measures, beatsPerMeasure);
	
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
			} 
			else 
			{
				distToBottom = buttonHeight * 1.5f;
				playToneBtn.keyImage.overrideSprite = Resources.Load<Sprite> ("box");
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

			//assign the music note to the button
			var musicNote = myScale.MusicNotes [i + myScale.TonicIndex];
			playToneBtn.Note = musicNote;
			playToneBtn.PopulateFields ();
		}
	
	}

	public void PlayButtonOnClick()
	{
		timer.StartTimer ();
		var playtime = (float)Constants.SECONDS_PER_MIN/(float)tempo*(float)beatsPerMeasure*(float)measures;
		InvokeRepeating ("PlayCurrentMelody", 0f, playtime*2f);
	}

	public void PlayCurrentMelody()
	{
		if (timer.TimeLeft == 0)
			CancelInvoke ("PlayCurrentMelody");
		
		guesses = 0;

		//hide the 3d notes
		foreach (var note3D in Notes3D) 
		{
			Renderer rend = note3D.GetComponentInChildren<Renderer>();
			rend.material.color=Color.black;
			note3D.SetActive (false);
		}
		Feedback.text = "";
		melodiesPlayed++;
		isCorrectMelody = true;

		//plays the drum track
		AudioSource aSource = GetComponent<AudioSource>();
		aSource.pitch = (float)tempo / Constants.SECONDS_PER_MIN;
		aSource.Play ();

		GenerateNewMelody (tonic);

		//TODO: CALL THIS ONLY IF TONIC CHANGED, SEPARATE OUT LOGIC THAT ASSIGNS AUDIO CLIPS
		PositionToneButtons (tonic);

		AssignAudioClipInCorrectOctave ();

		timeBeginAnswer = Time.time + currentMelody.Playtime;

		//the beats
		foreach (var beat in currentMelody.NoteBeats)
			print (beat);

		StartCoroutine (TempDisableToneButtons ());
		StartCoroutine (currentMelody.Play ());
		StartCoroutine (EnableNotes3D ());

		StatsText.text = correctMelodies +"/"+ melodiesPlayed;

	}

	void AssignAudioClipInCorrectOctave()
	{
		foreach (var toneButton in ToneButtons) {

			var playToneBtn = toneButton.GetComponent<PlayToneBtn> ();
			if (currentMelody.Notes [guesses].Solfege.ToString ().Contains (playToneBtn.toneText.text))
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

	IEnumerator EnableAnimatedGO(string solfege)
	{
		//print ("ENABLING "+solfege);
		if (solfege == "DO") {
			//gameObject.setenabled here
		}

		yield return null;
	
	}

	int melodiesPlayed = 0;
	int correctMelodies = 0;
	bool isCorrectMelody;
	private void ToneOnClick()
	{
		//only display wrong if within the guesses range of the melody
		if (guesses < currentMelody.Notes.Count) 
		{
			Renderer rend = Notes3D[guesses].GetComponentInChildren<Renderer>();

			if (!(PlayToneBtn.isCorrectNote && PlayToneBtn.isCorrectBeat)) 
			{
				isCorrectMelody = false;
				Feedback.color = Color.red;
				StartCoroutine (FlashWrong ());
				rend.material.color=Color.red;
			
			} 
			else 
			{
				Feedback.text = "";
				rend.material.color = Color.green;
			}

			if (guesses == currentMelody.Notes.Count-1) 
			{	
				if (isCorrectMelody) 
				{
					correctMelodies++;
					Feedback.text = "CORRECT!";
					Feedback.color = Color.green;
				}
				
				//StatsText.text = correctMelodies +"/"+ melodiesPlayed;
			}

		}
		guesses++;

		if (guesses < currentMelody.Notes.Count) 
			AssignAudioClipInCorrectOctave ();
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
}
