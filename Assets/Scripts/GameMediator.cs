using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

//this is the view/controller
public class GameMediator : MonoBehaviour {

	List<AudioClip> toneClips;
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

	// Use this for initialization
	void Start () {

		foreach(var tonebtn in ToneButtonsWhite)
			tonebtn.onClick.AddListener (ToneOnClick);

		//TODO: INSTANTIATE THE BUTTONS AT CORRECT POSITION EACH TIME TONIC CHANGES

		var tonic = "Cl";
		var melodyLength = 6;
		var tempo = 60;	//bpm

		myScale = new Scale (tonic, ScaleType.MAJOR);
		currentMelody = new Melody (melodyLength, myScale, tempo);

		//the beats
//		foreach (var beat in currentMelody.NoteBeats)
//			print (beat);

//		foreach (var note in myScale.MusicNotes) {
//		
//			print (note.Solfege + " is " + note.NameFlat);
//		}

		var i = 0;
		foreach (var toneButton in ToneButtonsWhite) 
		{
			var playToneBtn = toneButton.gameObject.GetComponent<PlayToneBtn> ();
			var musicNote = myScale.MusicNotes [i];

			playToneBtn.note = musicNote;
			playToneBtn.PopulateFields ();

			i++;
		}

		int measures = 1;
		int beatsPerMeasure = 4;
		const int SECONDS_PER_MIN = 60;

		melodyPlaytime = (float)((SECONDS_PER_MIN*beatsPerMeasure*measures) / currentMelody.TempoBPM);

	}
	float melodyPlaytime;
	public void PlayButtonOnClick()
	{
		PlayButton.interactable = false;

		var tonic = "Cl";
		var melodyLength = 6;
		var tempo = 60;	//bpm

		myScale = new Scale (tonic, ScaleType.MAJOR);
		currentMelody = new Melody (melodyLength, myScale, tempo);

		toneClips = new List<AudioClip> ();

		foreach (var note in currentMelody.Notes) 
		{
			var noteNameGeneral = note.NameFlat.Substring (0, note.NameFlat.Length - 1);
			toneClips.Add (Resources.Load<AudioClip>(noteNameGeneral+"3"));

		}

		StartCoroutine (PlayMelody(melodyPlaytime));
	
	}

	float timeBeginAnswer;
	IEnumerator PlayMelody(float melodyPlaytime)
	{
		AudioSource audioSource = GetComponent<AudioSource> ();
		foreach (var toneClip in toneClips) 
		{
			//currentToneClip = Resources.Load<AudioClip> (note.NameFlat + "3");
			audioSource.clip = toneClip;
			audioSource.Play ();
			yield return new WaitForSeconds (1f);
		}
		
		//yield return new WaitForSeconds (melodyPlaytime);

		timeBeginAnswer = Time.time;
		PlayButton.interactable = true;
	}

	IEnumerator AnimateSolfege(string solfege)
	{
		print ("ANIMATING "+solfege);
		if (solfege == "DO") {
			//animate here
		}

		yield return null;
	
	}

	private void ToneOnClick()
	{
		//TODO: ADJUST ANSWERBEAT BASED ON TEMPO
		float answerBeat = Time.time - timeBeginAnswer;
		print (answerBeat);

		StartCoroutine (AnimateSolfege (PlayToneBtn.toneClicked));
		guesses++;
	}
	
	// Update is called once per frame
	void Update () {

		//print (timeBeginAnswer);
	}
}
