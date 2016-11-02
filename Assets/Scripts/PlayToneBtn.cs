using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class PlayToneBtn : MonoBehaviour {

	public MusicNote note;
	AudioClip audioClip;
	public Text toneText;
	//public GameObject solfege3D;


	public void OnPress()
	{
		AudioSource.PlayClipAtPoint (audioClip, new Vector3(0,0,0));
		GameMediator.guesses++;

		//solfege3D.SetActive (true);

		//print (note + " clicked");

//		var i = GameMediator.guesses;
//
//		if (GameMediator.currentMelody.Notes[i].Solfege == note.Solfege)
//			//correct note
//			GameMediator.guesses++;
//		else
//			GameMediator.guesses = 0;

	}

	// Use this for initialization
	public void PopulateFields () {

		audioClip = Resources.Load<AudioClip> (note.NameFlat+"3");
		toneText.text = note.Solfege.ToString ();

	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
