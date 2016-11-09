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

	public static int guesses;

	public static Melody currentMelody;
	Scale myScale;

//	bool displayWrongText;
//
//	bool displayCorrectText;

	public List<GameObject> Solfege3Ds;

	public List<Button> ToneButtons;
	public Text Feedback;
	public Text StatsText;

	Dictionary<string,GameObject> SolfToAnimation = new Dictionary<string,GameObject>();

	string tonic = "C";
	int tempo = 60;
	int melodyLength = 4;
	int measures = 2;
	int beatsPerMeasure = 4;

	// Use this for initialization
	void Start () {

		foreach (var tonebtn in ToneButtons)
			tonebtn.onClick.AddListener (ToneOnClick);

		//TODO: INSTANTIATE THE BUTTONS AT CORRECT POSITION EACH TIME TONIC CHANGES

		//var tonic = "C";
		//var melodyLength = 6;
		//var tempo = 60;	//bpm

		myScale = new Scale (tonic, ScaleType.MAJOR);
		//currentMelody = new Melody (melodyLength, myScale, tempo);

		var i = 0;
		foreach (var toneButton in ToneButtons) 
		{
			var playToneBtn = toneButton.gameObject.GetComponent<PlayToneBtn> ();
			var musicNote = myScale.MusicNotes [i];

			playToneBtn.note = musicNote;
			playToneBtn.PopulateFields ();

			i++;
		}

		InvokeRepeating ("PlayButtonOnClick", 1f, 16f);

	}

	public void PlayButtonOnClick()
	{
		Feedback.text = "";
		melodiesPlayed++;
		isCorrectMelody = true;

		PlayButton.interactable = false;
		guesses = 0;

		//user input
		//var tonic = "C";


		AudioSource aSource = GetComponent<AudioSource>();
		aSource.pitch = (float)tempo / Constants.SECONDS_PER_MIN;
		aSource.Play ();

		//myScale = new Scale (tonic, ScaleType.MAJOR);
		currentMelody = new Melody (melodyLength, myScale, tempo, measures, beatsPerMeasure);

		timeBeginAnswer = Time.time + currentMelody.Playtime;

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

		PlayButton.interactable = true;
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
		if (guesses <= currentMelody.Notes.Count) 
		{

			if (!(PlayToneBtn.isCorrectNote && PlayToneBtn.isCorrectBeat)) 
			{
				isCorrectMelody = false;
				StartCoroutine (FlashWrong ());
			
			} 
			else 
			{
				Feedback.text = "";
			}

			if (guesses == currentMelody.Notes.Count) 
			{	
				if (isCorrectMelody) 
				{
					correctMelodies++;
					Feedback.text = "CORRECT!";
				}
				
				StatsText.text = correctMelodies +"/"+ melodiesPlayed;
			}

		}
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
	
	// Update is called once per frame
	void Update () {

		//print (timeBeginAnswer);
	}
}
