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
	public static float answerBeat;

	public bool LearnMode {
		get;
		set;
	}

	public MusicNote Note {
		get;
		set;
	}
		
	public void OnPointerDown(PointerEventData data)
	{
		Constants.PlayClip (audioClip, Constants.origin);

		solfClicked = toneText.text;

		//this is here and not in game mediator so that it gets recorded on pointer down, not on click
		answerBeat = (Time.time - GameMediator.timeBeginAnswer) / GameMediator.currentMelody.TimePerBeat + Constants.beatAdjustment;
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
