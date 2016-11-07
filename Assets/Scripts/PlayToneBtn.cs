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
