using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class PlayToneBtn : MonoBehaviour,IPointerDownHandler 
{
	public Text toneText;
	public Image keyImage;

	private AudioClip audioClip;

	public static string solfClicked;
	public static bool isCorrectNote;
	public static bool isCorrectBeat;

	public bool LearnMode {
		get;
		set;
	}

	public MusicNote Note {
		get;
		set;
	}

	//TODO: MOVE (IN)CORRECT LOGIC TO GAME MEDIATOR
	public void OnPointerDown(PointerEventData data)
	{
		Constants.PlayClip (audioClip, Constants.origin);

		solfClicked = toneText.text;

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

			var currentSolf = melody.Notes [guesses].TheScaleTone.SolfegeOctave;
			var currentSolfGeneral = Constants.RemoveLast (currentSolf);

			if (currentSolfGeneral == solfClicked)
				isCorrectNote = true;

			print (isCorrectNote + " " + solfClicked);
			print (isCorrectBeat + "(" + answerBeat + ")");

		}			

	}

	//TODO: CALL THIS PRIVATELY??
	public void PopulateFields () {

		var noteNameGeneral = Constants.RemoveLast (Note.NameFlat);
		audioClip = Resources.Load<AudioClip> (noteNameGeneral+Constants.lowerOct);
		toneText.text = Constants.RemoveLast(Note.TheScaleTone.SolfegeOctave);

	}

	//this is called from game mediator to match current tone octave
	public void SetAudioClip(AudioClip aClip)
	{
		audioClip = aClip;
	}

}
