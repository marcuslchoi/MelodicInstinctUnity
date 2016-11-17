using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.EventSystems;

//[RequireComponent(typeof(AudioSource))]
public class PlayToneBtn : MonoBehaviour,IPointerDownHandler 
{

	public MusicNote note;
	AudioClip audioClip;
	public Text toneText;
	public static string solfClicked;
	public Image keyImage;

	public static bool isCorrectNote;
	public static bool isCorrectBeat;

	AudioSource audioSource;

	public void OnPointerDown(PointerEventData data)
	{
		solfClicked = toneText.text;

		//audioSource.Play ();
		Constants.PlayClip (audioClip, Constants.origin);

		var melody = GameMediator.currentMelody;
		var guesses = GameMediator.guesses;

		if (guesses < melody.Notes.Count) 
		{

			var timeBeginAnswer = GameMediator.timeBeginAnswer;

			isCorrectBeat = false;

			float answerBeat = (Time.time - timeBeginAnswer) / melody.TimePerBeat + Constants.beatAdjustment;

			if (Mathf.Abs (answerBeat - melody.NoteBeats [guesses]) < Constants.maxBeatDifference)
				isCorrectBeat = true;

			isCorrectNote = false;

			var currentSolf = melody.Notes [guesses].Solfege.ToString ();

			if (currentSolf.Contains (solfClicked))
				isCorrectNote = true;

			print (isCorrectNote + " " + solfClicked);
			print (isCorrectBeat + "(" + answerBeat + ")");

		}

		GameMediator.guesses++;

	}

	// Use this for initialization
	//TODO: CALL THIS PRIVATELY??
	public void PopulateFields () {

		//audioSource = GetComponent<AudioSource> ();
		var noteNameGeneral = Constants.RemoveLast (note.NameFlat);
		audioClip = Resources.Load<AudioClip> (noteNameGeneral+Constants.lowerOct);
		//audioSource.clip = audioClip;
		toneText.text = note.Solfege.ToString ();

	}

}
