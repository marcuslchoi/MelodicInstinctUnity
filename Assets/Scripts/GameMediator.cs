using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

//this is the view/controller
public class GameMediator : MonoBehaviour
{

	public Button PlayButton;
	public Camera CameraCanvas;
	public List<GameObject> Notes3D;

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
	void Start () 
	{
		//viewport coordinates
		float maxX = 1f;
		float distToCamera = transform.position.z - CameraCanvas.transform.position.z;
		float buttonHeight = .1f;
		int numberHalves;

		//c and f have different spacing
		if (tonic == "C" || tonic == "F")
			numberHalves = 14;
		else
			numberHalves = 15;

		float halfKey = maxX/(float)numberHalves;
		float buttonWidth = 2f * halfKey;
		float distToLeft = 0; //+padding
		float distToBottom;

		//Vector3 seat0 = View.CameraCardsSeatsChips.ViewportToWorldPoint (new Vector3 (middle,distToBottom,distToCamera));

		myScale = new Scale (tonic, ScaleType.MAJOR);
		//currentMelody = new Melody (melodyLength, myScale, tempo);

		char previousKeyColor=' ';
		for (var i = 0; i < ToneButtons.Count; i++) 
		{
			ToneButtons [i].onClick.AddListener (ToneOnClick);
			var playToneBtn = ToneButtons[i].gameObject.GetComponent<PlayToneBtn> ();
			var musicNote = myScale.MusicNotes [i + myScale.TonicIndex];
			char keyColor = MusicNote.TonicToKeyLayout [tonic] [i];

			if (keyColor == 'W') 
			{
				distToBottom = buttonHeight * 0.5f;
			} 
			else 
			{
				distToBottom = buttonHeight * 1.5f;
				playToneBtn.keyImage.overrideSprite = Resources.Load<Sprite> ("box");
				playToneBtn.toneText.color = Color.white;
			}

			playToneBtn.note = musicNote;
			playToneBtn.PopulateFields ();

			if (keyColor == previousKeyColor && keyColor == 'W')
				distToLeft += 2f * halfKey;
			else
				distToLeft += halfKey;

			ToneButtons [i].transform.position = CameraCanvas.ViewportToWorldPoint (new Vector3 (distToLeft, distToBottom, distToCamera));
			playToneBtn.keyImage.rectTransform.sizeDelta = new Vector2 (150, 50);

			previousKeyColor = keyColor;
		}

		var playtime = Constants.SECONDS_PER_MIN/tempo*(float)beatsPerMeasure*(float)measures;

		//last argument should be melody playtime
		InvokeRepeating ("PlayButtonOnClick", 1f, playtime*2f);

	}

	public void PlayButtonOnClick()
	{
		Feedback.text = "";
		melodiesPlayed++;
		isCorrectMelody = true;

		PlayButton.interactable = false;
		guesses = 0;

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
