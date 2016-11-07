using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

//this is the view/controller
public class GameMediator : MonoBehaviour
{

	public Button PlayButton;

	public GameObject Solfege3D;

	MusicNote currentNote;

	public int guesses;

	Melody currentMelody;
	Scale myScale;

	bool displayWrongText;

	bool displayCorrectText;

	public List<GameObject> Solfege3Ds;

	public List<Button> ToneButtonsBlack;

	public List<Button> ToneButtonsWhite;

	Dictionary<string,GameObject> SolfToAnimation = new Dictionary<string,GameObject>();

	string tonic = "C";
	// Use this for initialization
	void Start () {

		foreach (var tonebtn in ToneButtonsWhite)
			tonebtn.onClick.AddListener (ToneOnClick);

		//TODO: INSTANTIATE THE BUTTONS AT CORRECT POSITION EACH TIME TONIC CHANGES

		//var tonic = "C";
		//var melodyLength = 6;
		//var tempo = 60;	//bpm

		myScale = new Scale (tonic, ScaleType.MAJOR);
		//currentMelody = new Melody (melodyLength, myScale, tempo);

		var i = 0;
		foreach (var toneButton in ToneButtonsWhite) 
		{
			var playToneBtn = toneButton.gameObject.GetComponent<PlayToneBtn> ();
			var musicNote = myScale.MusicNotes [i];

			playToneBtn.note = musicNote;
			playToneBtn.PopulateFields ();

			i++;
		}

		InvokeRepeating ("PlayButtonOnClick", 1f, 8f);

	}

	public void PlayButtonOnClick()
	{
		PlayButton.interactable = false;
		guesses = 0;

		//user input
		//var tonic = "C";
		var melodyLength = 4;
		var tempo = 120;	//bpm
		var measures = 2;
		var beatsPerMeasure = 4;

		AudioSource aSource = GetComponent<AudioSource>();
		aSource.pitch = (float)tempo / 60f;
		aSource.Play ();

		//myScale = new Scale (tonic, ScaleType.MAJOR);
		currentMelody = new Melody (melodyLength, myScale, tempo, measures, beatsPerMeasure);


		//the beats
		foreach (var beat in currentMelody.NoteBeats)
			print (beat);

//		foreach (var note in myScale.MusicNotes) {
//		
//			print (note.Solfege + " is " + note.NameFlat);
//		}

		StartCoroutine(Wait(currentMelody.Playtime));
	
		StartCoroutine (currentMelody.Play ());
	}

	IEnumerator Wait(float melodyPlaytime)
	{
	
		yield return new WaitForSeconds (melodyPlaytime);
		timeBeginAnswer = Time.time;
		PlayButton.interactable = true;
	}

	float timeBeginAnswer;

	IEnumerator EnableAnimatedGO(string solfege)
	{
		//print ("ENABLING "+solfege);
		if (solfege == "DO") {
			//gameObject.setenabled here
		}

		yield return null;
	
	}

	private void ToneOnClick()
	{
		float maxBeatDifference = .25f;
		bool isCorrectBeat = false;
		float answerBeat = (Time.time - timeBeginAnswer)/currentMelody.TimePerBeat + Constants.beatAdjustment;

		if (Mathf.Abs (answerBeat - currentMelody.NoteBeats [guesses]) < maxBeatDifference)
			isCorrectBeat = true;

		var isCorrectNote = false;
		var solfClicked = PlayToneBtn.solfClicked;
		var currentSolf = currentMelody.Notes [guesses].Solfege.ToString ();

		if (currentSolf.Contains (solfClicked))
			isCorrectNote = true;

		print (isCorrectNote+" "+solfClicked);
		print (isCorrectBeat+"("+answerBeat+")");

		StartCoroutine (EnableAnimatedGO (PlayToneBtn.solfClicked));
		guesses++;
	}
	
	// Update is called once per frame
	void Update () {

		//print (timeBeginAnswer);
	}
}
