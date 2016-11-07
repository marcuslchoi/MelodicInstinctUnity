using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.EventSystems;

[RequireComponent(typeof(AudioSource))]
public class PlayToneBtn : MonoBehaviour,IPointerDownHandler 
{

	public MusicNote note;
	AudioClip audioClip;
	public Text toneText;
	public static string solfClicked;

	public void OnPointerDown(PointerEventData data)
	{
		solfClicked = toneText.text;
		AudioSource audioSource = GetComponent<AudioSource> (); // PlayClipAtPoint (audioClip, new Vector3(0,0,0));
		audioSource.clip = audioClip;
		audioSource.Play ();

		var melody = GameMediator.currentMelody;
		var guesses = GameMediator.guesses;

		if (guesses < melody.Notes.Count) 
		{

			var timeBeginAnswer = GameMediator.timeBeginAnswer;

			bool isCorrectBeat = false;

			float answerBeat = (Time.time - timeBeginAnswer) / melody.TimePerBeat + Constants.beatAdjustment;

			if (Mathf.Abs (answerBeat - melody.NoteBeats [guesses]) < Constants.maxBeatDifference)
				isCorrectBeat = true;

			var isCorrectNote = false;

			var currentSolf = melody.Notes [guesses].Solfege.ToString ();

			if (currentSolf.Contains (solfClicked))
				isCorrectNote = true;

			print (isCorrectNote + " " + solfClicked);
			print (isCorrectBeat + "(" + answerBeat + ")");
		}

		//StartCoroutine (EnableAnimatedGO (PlayToneBtn.solfClicked));

		GameMediator.guesses++;

	}
/*
	public void OnClick()
	{
		solfClicked = toneText.text;

		AudioSource audioSource = GetComponent<AudioSource> (); // PlayClipAtPoint (audioClip, new Vector3(0,0,0));
		audioSource.clip = audioClip;
		audioSource.Play ();

	}
*/

	// Use this for initialization
	public void PopulateFields () {

		var noteNameGeneral = Constants.RemoveLast (note.NameFlat);
		audioClip = Resources.Load<AudioClip> (noteNameGeneral+Constants.lowerOct);
		toneText.text = note.Solfege.ToString ();

	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
