using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

//this is the view/controller
public class GameMediator : MonoBehaviour {

	public GameObject Solfege3D;

	MusicNote currentNote;

	public static int guesses;

	Melody currentMelody;

	bool displayWrongText;

	bool displayCorrectText;

	public List<GameObject> Solfege3Ds;

	public List<Button> ToneButtonsBlack;

	public List<Button> ToneButtonsWhite;


	// Use this for initialization
	void Start () {

		//TODO: INSTANTIATE THE BUTTONS AT CORRECT POSITION EACH TIME TONIC CHANGES

		Scale myScale = new Scale (NoteName.C, ScaleType.MAJOR);

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

	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
