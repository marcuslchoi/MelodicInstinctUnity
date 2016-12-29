using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using Parse;

using System;
using System.Net;
using RestSharp;
using Pathfinding.Serialization.JsonFx;
using Unity3dAzure.AppServices;
using Tacticsoft;
using Prefabs;
using UnityEngine.SceneManagement;

//this is the view/controller
public class GameMediator : MonoBehaviour
{

	public Button PlayButton;
	public Camera CameraCanvas;
	public List<GameObject> Notes3D;
	public Slider BPMSlider;
	public Text BPMText;
	public Slider MelodyLengthSlider;
	public Text MelodyLengthText;
	public Text TonicText;
	public Button TutorialModeButton;
	public Text TutorialModeText;
	public Text MovingTonicText;
	public Button PlayExampleMelody;
	public GameObject LeaderboardPanel;

	public GameObject LeaderboardListItemPF;
	public Transform LeaderboardTableContentTransform;

	public Button LoginFacebook;

	[SerializeField]
	private List<AudioClip> ClipsInCadenceRange;
	[SerializeField]
	private AudioClip B2Clip;

	MusicNote currentNote;

	public static int guesses;

	public static Melody currentMelody;
	Scale myScale;

	public Timer timer;
	public Text GameLengthText;
	public Text DrumsText;

	public List<GameObject> SolfegeAnimations;

	public List<Button> ToneButtons;
	public Text Feedback;
	public Text StatsText;

	Dictionary<string,GameObject> SolfegeToAnimation = new Dictionary<string,GameObject>();

	//Azure stuff
	private string _appUrl = "http://melodicinstinct.azurewebsites.net";
	private Highscore _score;
	// App Service Rest Client
	private MobileServiceClient _client;
	// App Service Table defined using a DataModel
	private MobileServiceTable<Highscore> _highScoresTable;
	private uint _skip = 0; // no of records to skip

	private Message _message; //used for login
	private string _facebookAccessToken = "EAAWvQZA2tZASsBADDA2kjWPZCtgFxFSPzzd7vUvZCrwwdfGEvgZBPJ8BOkxxCdWjgTZA1vo5La0HzTJwpAeQaphsUpsTzmZA79VPrgvslv7RnZBvlKLWKKuZCtoKlBDokxEXHLKIq5ZBr11okLZAA4lMoqbqJF201B1RoFRb2Y125KabQZDZD";

	// infinite scroll vars
//	private bool _isPaginated = false; // only enable infinite scrolling for paginated results

	// List of highscores (leaderboard)
	private List<Highscore> _scores = new List<Highscore>();
	private const uint _noPageResults = 50;

	string tonic;// = "C";
	int tempo;// = 60;
	int melodyLength;// = 4;
	int measures = 2;
	int beatsPerMeasure = 4;
	bool isTutorialMode = false;
	bool isDrumsGame = true;
	bool isMovingTonic = false;

	//audiosource of the drum track
	AudioSource audioSource;

	string defaultTutorialSolfege = ScaleTone.SolfegeFlats [0];
	string defaultTonic = "C";

	// Use this for initialization
	void Start () 
	{
		
		//from highscoresdemo

		// Create App Service client (Using factory Create method to force 'https' url)
		_client = MobileServiceClient.Create(_appUrl); //new MobileServiceClient(_appUrl);

		// Get App Service 'Highscores' table
		_highScoresTable = _client.GetTable<Highscore>("Highscores");

		GetAllHighscores ();

		// set TSTableView delegate
//		_tableView.dataSource = this;

		// setup token using Unity Inspector value
//		if (!String.IsNullOrEmpty(_facebookAccessToken))
//		{
//			InputField inputToken = GameObject.Find("FacebookAccessToken").GetComponent<InputField>();
//			inputToken.text = _facebookAccessToken;
//		}

//		UpdateUI();

		//end from highscoresdemo

		audioSource = GetComponent<AudioSource>();

		//populate solfege to animation dictionary
		int i = 0;
		foreach (var solfegeKey in ScaleTone.SolfegeFlats) 
		{
			SolfegeToAnimation [solfegeKey] = SolfegeAnimations [i];
			i++;
		}

		ExampleMelodies.GenerateMelodies ();

		BPMSlider.minValue = 30f;
		BPMSlider.maxValue = 200f;
		BPMSlider.value = 70f;

		MelodyLengthSlider.minValue = 1f;
		MelodyLengthSlider.maxValue = 8f;
		MelodyLengthSlider.value = 4f;;

		//TODO: DRY
		tonic = TonicText.text;
		tempo = (int)BPMSlider.value;
		melodyLength = (int)MelodyLengthSlider.value;

		timer.Minutes = GetGameLength ();

		DisplayInitialTimer ();

		GenerateNewScale ();
		PositionToneButtons ();

	}

	void GenerateNewScale()
	{
		
		myScale = new Scale (tonic, ScaleType.MAJOR);
	
	}

	void GenerateNewMelody()
	{
		if (isDrumsGame)
			currentMelody = new Melody (melodyLength, myScale, tempo, measures, beatsPerMeasure);
		else
			currentMelody = new Melody (melodyLength, myScale, tempo);

	}

	//positions tone buttons and assigns note to each
	void PositionToneButtons()
	{
		foreach (var toneButton in ToneButtons)
			toneButton.onClick.RemoveAllListeners ();

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
		string blackString = "box";
		string whiteString = "white";

		//this puts the tone keys in correct position depending on tonic
		char previousKeyColor=' ';
		for (var i = 0; i < ToneButtons.Count; i++) 
		{
			ToneButtons [i].onClick.AddListener (ToneOnClick);
			var playToneBtn = ToneButtons[i].gameObject.GetComponent<PlayToneBtn> ();

			char keyColor = MusicNote.TonicToKeyLayout [tonic] [i];

			if (keyColor == 'W') 
			{
				distToBottom = buttonHeight * 0.5f;
				playToneBtn.keyImage.overrideSprite = Resources.Load<Sprite> (whiteString);
				playToneBtn.toneText.color = Color.black;
			} 
			else 
			{
				distToBottom = buttonHeight * 1.5f;
				playToneBtn.keyImage.overrideSprite = Resources.Load<Sprite> (blackString);
				playToneBtn.toneText.color = Color.white;
			}

			if (keyColor == previousKeyColor && keyColor == 'W')
				distToLeft += 2f * halfKey;
			else
				distToLeft += halfKey;

			ToneButtons [i].transform.position = CameraCanvas.ViewportToWorldPoint (new Vector3 (distToLeft, distToBottom, distToCamera));

			//convert to coordinates relative to screen size
			float width = (float)Screen.width * halfKey*2f;
			float height = (float)Screen.height * buttonHeight;
			playToneBtn.keyImage.rectTransform.sizeDelta = new Vector2 (width,height);

			previousKeyColor = keyColor;

			AssignMusicNoteToButton (i, playToneBtn);
		}
	
	}

	void AssignMusicNoteToButton (int i, PlayToneBtn playToneBtn)
	{
		//assign the music note to the button
		var musicNote = myScale.MusicNotes [i + myScale.TonicIndex];
		playToneBtn.Note = musicNote;
		playToneBtn.PopulateFields ();
	}

	public void PlayButtonOnClick()
	{
		correctMelodies = 0;
		melodiesPlayed = 0;
		UpdateStatsText ();

		StartCoroutine (PlayCadenceThenStartGame ());

	}

	IEnumerator PlayCadenceThenStartGame()
	{
		var chordsClips = GetChordsClipsForCadence ();
		float timeBetweenChords = (float)Constants.SECONDS_PER_MIN / (float)tempo / 2f;

		//play the chord clips
		foreach (var chordClips in chordsClips) 
		{		
			foreach(var clip in chordClips)
				Constants.PlayClip (clip,Constants.origin);

			yield return new WaitForSeconds (timeBetweenChords);
		}

		//start the game
		StartCoroutine (StartGame ());

	}

	IEnumerator StartGame()
	{
		timer.StartTimer ();

		if (isDrumsGame) {
			//length of time of the melody before user can answer
			var playtime = (float)Constants.SECONDS_PER_MIN / (float)tempo * (float)beatsPerMeasure * (float)measures;
			InvokeRepeating ("PlayCurrentMelody", 0f, playtime * 2f);
		} 
		else //no drums game
		{		
			//plays first melody. This is called again when each question is answered
			PlayCurrentMelody ();
		}

		yield return null;
	}

	private List<List<AudioClip>> GetChordsClipsForCadence()
	{
		//get the chord clips
		var chordsClips = new List<List<AudioClip>> ();
		foreach (var solfEnums in Cadences.Chords) {
			var chordClips = GetAudioClipsForChord (solfEnums);
			chordsClips.Add (chordClips);
		}

		return chordsClips;
	
	}

	//takes a chord in the form of solfege enums, returns its audio clips
	private List<AudioClip> GetAudioClipsForChord(List<SolfEnum> solfEnums)
	{
		List<AudioClip> chordClips = new List<AudioClip> ();
		int indexOfClip;
		AudioClip clip;

		foreach (var solfEnum in solfEnums) 
		{
			if (solfEnum == SolfEnum.TI)
				indexOfClip = myScale.TonicIndex - 1;
			else
				indexOfClip = (int)solfEnum + myScale.TonicIndex;

			//case of TI in key of C
			if (indexOfClip < 0)
				clip = B2Clip;
			else
				clip = ClipsInCadenceRange [indexOfClip];
			
			chordClips.Add (clip);
		}

		return chordClips;
	}

	void ResetForNewMelody()
	{
		guesses = 0;

		//hide the 3d notes
		foreach (var note3D in Notes3D) 
		{
			Renderer rend = note3D.GetComponentInChildren<Renderer>();
			rend.material.color=Color.black;
			note3D.SetActive (false);
		}
		Feedback.text = "";

		isCorrectMelody = true;

		timeBeginAnswer = Time.time + currentMelody.Playtime;

		UpdateStatsText ();
	
	}

	void UpdateStatsText()
	{
		StatsText.text = correctMelodies +"/"+ melodiesPlayed;	
	}

	public void PlayCurrentMelody()
	{

		if (timer.TimeLeft == 0) 
		{
			audioSource.Stop ();
			CancelInvoke ("PlayCurrentMelody");
			Insert ();

		}

		//TODO: CHECK IF TONIC CHANGES BETWEEN QUESTIONS
		GenerateNewScale ();

		GenerateNewMelody ();

		ResetForNewMelody ();

		melodiesPlayed++;

		//plays the drum track at certain tempo
		if (isDrumsGame) 
		{
			audioSource.pitch = (float)tempo / Constants.SECONDS_PER_MIN;
			audioSource.Play ();
		}

		//TODO: CALL THIS ONLY IF TONIC CHANGED
		PositionToneButtons ();

		AssignAudioClipInCorrectOctave ();

		//the beats
		foreach (var beat in currentMelody.NoteBeats)
			print (beat);

		StartCoroutine (TempDisableToneButtons ());
		StartCoroutine(currentMelody.Play ());
		StartCoroutine (EnableNotes3D ());

		if (isMovingTonic) 
		{
			int tonicIndex = UnityEngine.Random.Range (0, MusicNote.NotesGeneral.Count);
			tonic = MusicNote.NotesGeneral [tonicIndex];
		}

	}

	//assigns audio clip of the scale degree in the same octave as the current note
	void AssignAudioClipInCorrectOctave()
	{
		foreach (var toneButton in ToneButtons) 
		{

			var playToneBtn = toneButton.GetComponent<PlayToneBtn> ();
			var currentSolfege = currentMelody.Notes [guesses].TheScaleTone.SolfegeOctave;

			if (currentSolfege.Contains (playToneBtn.toneText.text))
				playToneBtn.SetAudioClip (currentMelody.ToneClips [guesses]);	

		}
	
	}

	IEnumerator TempDisableToneButtons()
	{
		foreach (var toneButton in ToneButtons)
			toneButton.enabled = false;

		//disable for melody playtime minus 1 beat
		yield return new WaitForSeconds (currentMelody.Playtime - currentMelody.TimePerBeat);

		foreach (var toneButton in ToneButtons)
			toneButton.enabled = true;
	}

	IEnumerator EnableNotes3D()
	{
		var timesBetweenNotes = currentMelody.TimesBetweenNotes;
		for (var i = 0; i < timesBetweenNotes.Count; i++) 
		{
			yield return new WaitForSeconds (currentMelody.TimesBetweenNotes[i]);
			Notes3D [i].SetActive (true);
		}

	}

	public static float timeBeginAnswer;

	int melodiesPlayed = 0;
	int correctMelodies = 0;
	bool isCorrectMelody;

	bool CheckIfCorrectGuess()
	{
		bool isCorrectNote = false;
		bool isCorrectBeat = false;
		bool isCorrectGuess = false;

		if (guesses < currentMelody.Notes.Count) 
		{
			//check if correct beat
			//beat recorded in playtonebtn so its time is recorded on pointer down, not on click
			float answerBeat = PlayToneBtn.answerBeat;
			if (Mathf.Abs (answerBeat - currentMelody.NoteBeats [guesses]) < Constants.maxBeatDifference)
				isCorrectBeat = true;

			//check if correct note
			var currentSolfege = currentMelody.Notes [guesses].TheScaleTone.SolfegeOctave;
			if (currentSolfege.Contains(PlayToneBtn.solfClicked))
				isCorrectNote = true;

			print (isCorrectNote + " " + PlayToneBtn.solfClicked);
			print (isCorrectBeat + "(" + answerBeat + ")");

		}

		if (isDrumsGame)
			isCorrectGuess = isCorrectNote && isCorrectBeat;
		else
			isCorrectGuess = isCorrectNote;

		return isCorrectGuess;
	
	}
	public void ToneOnClick()
	{
		foreach (var animation in SolfegeAnimations)
			animation.SetActive (false);

		//set the current solfege animation active
		var currentSolfegeAnimation = SolfegeToAnimation[PlayToneBtn.solfClicked];
		currentSolfegeAnimation.SetActive (true);

		bool isCorrectGuess = CheckIfCorrectGuess ();

		//only display wrong if within the guesses range of the melody
		if (guesses < currentMelody.Notes.Count) {
			Renderer rend = Notes3D [guesses].GetComponentInChildren<Renderer> ();

			if (!(isCorrectGuess)) {
				isCorrectMelody = false;
				Feedback.color = Color.red;
				StartCoroutine (FlashWrong ());
				rend.material.color = Color.red;
		
			} else {
				Feedback.text = "";
				rend.material.color = Color.green;
			}

			//guesses is the index of the last melody note
			if (guesses == currentMelody.Notes.Count - 1) 
			{	
				if (isCorrectMelody) 
				{
					correctMelodies++;
					Feedback.text = "CORRECT!";
					Feedback.color = Color.green;
				}
					
			}

		}
		guesses++;

		if (guesses < currentMelody.Notes.Count)
			AssignAudioClipInCorrectOctave ();

		//only pertains to non-drums game, generates and plays a new melody with delay
		if (!isDrumsGame && guesses == currentMelody.Notes.Count) 
		{
			StartCoroutine(PlayCurrentMelodyWithDelay (currentMelody.TimePerBeat));

		}
	}

	IEnumerator PlayCurrentMelodyWithDelay(float seconds)
	{
		yield return new WaitForSeconds(seconds);
		PlayCurrentMelody ();
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
		
	int melodyIndex = 0;
	public void PlayTuneOnClick()
	{
		var currentSolfege = "DO";//PlayToneBtn.solfClicked;

		var melodies = ExampleMelodies.SolfegeToMelodies[currentSolfege];

		StartCoroutine (melodies[melodyIndex].Play ());

		if (melodyIndex == melodies.Count - 1)
			melodyIndex = 0;
		else
			melodyIndex++;
	}

	#region settings
	public void BPMSliderOnValueChanged(float value)
	{
		tempo = (int)value;//BPMSlider.value;
		BPMText.text = string.Format ("TEMPO: {0} BPM",tempo);

	}
	public void MelodyLengthSliderOnValueChanged(float value)
	{
		melodyLength = (int)value;
		MelodyLengthText.text = string.Format ("{0} NOTES / MELODY",melodyLength);

	}
	public void TonicDropdownOnValueChanged(UnityEngine.UI.Dropdown dropdown)
	{
		tonic = TonicText.text;
		print ("new tonic: " + tonic);

		GenerateNewScale ();

	}

	public void GameLengthDropdownOnValueChanged(UnityEngine.UI.Dropdown dropdown)
	{
		timer.Minutes = GetGameLength();
		DisplayInitialTimer ();
	}

	int GetGameLength()
	{
		var gameLengthTempArray = GameLengthText.text.Split (' ');
		var minutes = int.Parse(gameLengthTempArray [0]);

		return minutes;
	}

	void DisplayInitialTimer()
	{
		timer.Text.text = timer.Minutes + ":00";
	
	}

	public void DrumsDropdownOnValueChanged(UnityEngine.UI.Dropdown dropdown)
	{
		//TODO: DIFFERENT BEATS

		print ("changed drums");
		if (DrumsText.text.Contains ("OFF"))
			isDrumsGame = false;
		else
			isDrumsGame = true;

	}

	public void TutorialModeOnClick()
	{
		isTutorialMode = !isTutorialMode;
		PlayExampleMelody.gameObject.SetActive (isTutorialMode);

		string onOrOff;
		if (isTutorialMode) 
		{
			melodyIndex = 0;
			PlayToneBtn.solfClicked = defaultTutorialSolfege;
			//TODO: HIGHLIGHT THE SOLFEGE BUTTON PRESSED
			ExampleMelodies.SetExampleMelodies (PlayToneBtn.solfClicked);
			onOrOff = "ON";
		}
		else
			onOrOff = "OFF";

		TutorialModeText.text = "TUTORIAL MODE: " + onOrOff;
	
	}

	public void MovingTonicOnClick()
	{
		isMovingTonic = !isMovingTonic;

		string onOrOff;
		if (isMovingTonic) 
			onOrOff = "ON";
		else
			onOrOff = "OFF";

		MovingTonicText.text = "MOVING TONIC: " + onOrOff;

	}

	#endregion

	#region Azure


	public void Login()
	{
		_client.Login(MobileServiceAuthenticationProvider.Facebook, _facebookAccessToken, OnLoginCompleted);
	}

	private void OnLoginCompleted(IRestResponse<MobileServiceUser> response)
	{
		Debug.Log("Status: " + response.StatusCode + " Uri:" + response.ResponseUri );
		Debug.Log("OnLoginCompleted: " + response.Content );

		if ( response.StatusCode == HttpStatusCode.OK)
		{
			MobileServiceUser mobileServiceUser = response.Data;
			_client.User = mobileServiceUser;
			Debug.Log("Authorized UserId: " + _client.User.user.userId );

		}
		else
		{
			Debug.Log("Authorization Error: " + response.StatusCode);
			_message = Message.Create ("Login failed", "Error");
		}
	}

	public void Insert()
	{
		Highscore score = GetScore ();

		_highScoresTable.Insert<Highscore>(score, OnInsertCompleted);
	}

	private void OnInsertCompleted(IRestResponse<Highscore> response)
	{
		if (response.StatusCode == HttpStatusCode.Created)
		{
			Debug.Log( "OnInsertItemCompleted: " + response.Data );
			Highscore item = response.Data; // if successful the item will have an 'id' property value
			_score = item;
		}
		else
		{
			Debug.Log("Insert Error Status:" + response.StatusCode + " Uri: "+response.ResponseUri );
		}
	}

	private Highscore GetScore() 
	{
		string name = "This Is My Name";
		int score = melodyLength * correctMelodies;
//		string id = GameObject.Find("Id").GetComponent<Text> ().text;

		Highscore highscore = new Highscore();
		highscore.username = name;

		highscore.score = score;

		highscore.scale = myScale.Type.ToString();

//		if (!String.IsNullOrEmpty (id)) {
//			highscore.id = id;
//			Debug.Log ("Existing Id:" + id);
//		}
		return highscore;
	}

	//just reads all highscores in the order that they are stored
	public void Read()
	{
		_highScoresTable.Read<Highscore>(OnReadCompleted);
	}

	private void OnReadCompleted(IRestResponse<List<Highscore>> response)
	{
		if (response.StatusCode == HttpStatusCode.OK)
		{
			Debug.Log("OnReadCompleted data: " + response.ResponseUri +" data: "+ response.Content);
			List<Highscore> items = response.Data;
			Debug.Log("Read items count: " + items.Count);
//			_isPaginated = false; // default query has max. of 50 records and is not paginated so disable infinite scroll 
			_scores = items;
//			HasNewData = true;

			DisplayScores ();
		}
		else
		{
			Debug.Log("Read Error Status:" + response.StatusCode + " Uri: "+response.ResponseUri );
		}
	}

	//call this to get high scores with scores descending
	public void GetAllHighscores()
	{
		// reset
		_skip = 0;
		GetPageHighscores();
	}

	private void GetPageHighscores()
	{
		CustomQuery query = new CustomQuery("", "score desc", _noPageResults, _skip, "id,username,score,scale");
		_highScoresTable.Query<NestedResults<Highscore>>(query, OnReadNestedResultsCompleted);
	}

	private void OnReadNestedResultsCompleted(IRestResponse<NestedResults<Highscore>> response)
	{
		if (response.StatusCode == HttpStatusCode.OK)
		{
			Debug.Log("OnReadNestedResultsCompleted: " + response.ResponseUri +" data: "+ response.Content);
			List<Highscore> items = response.Data.results;
//			_totalCount = response.Data.count;
			Debug.Log("Read items count: " + items.Count + "/" + response.Data.count);
//			_isPaginated = true; // nested query will support pagination
			if (_skip != 0) {
				_scores.AddRange (items); // append results for paginated results
			} else {
				_scores = items; // set for first page of results
			}
//			HasNewData = true;

			DisplayScores ();
		}
		else
		{
			Debug.Log("Read Nested Results Error Status:" + response.StatusCode + " Uri: "+response.ResponseUri );
		}
//		_isLoadingNextPage = false; // allows next page to be loaded
	}

	public void GetTopHighscores()
	{
		DateTime today = DateTime.Today;
		string day = today.ToString("s");
		string filter = string.Format("createdAt gt '{0}Z'", day);
		Debug.Log ("filter:" + filter);
		string orderBy = "score desc";
		CustomQuery query = new CustomQuery(filter,orderBy,10);
		Query(query);
	}

	public void GetUsernameHighscore()
	{
		Highscore score = GetScore ();
		string filter = string.Format("username eq '{0}'", score.username);
		string orderBy = "score desc";
		CustomQuery query = new CustomQuery(filter,orderBy);
		Query(query);
	}

	private void Query(CustomQuery query)
	{
		_highScoresTable.Query<Highscore>(query, OnReadCompleted);
	}

	void DisplayScores()
	{
		foreach (var highscore in _scores)
			print (highscore.username + " has " + highscore.score);


	}
		

	public void RefreshList ()
	{
		LeaderboardPanel.SetActive (true);

//		foreach(GameObject gObject in GUIInstances){
//			Destroy (gObject);
//		}
//		GUIInstances.Clear ();

//		RectTransform scrollTarget = null;
//		int lastRank = -1;

		for(int i=0;i<_scores.Count;i++)
		{
			var score = _scores[i];
//			if (entry.Position != lastRank+1){AddDotDotDot();}
			GameObject newObject = Instantiate (LeaderboardListItemPF);
			newObject.transform.SetParent (LeaderboardTableContentTransform, false);
			LeaderboardListItem listItem = newObject.GetComponent<LeaderboardListItem>();
			listItem.SetData (score,i+1);
//			if(entry.PlayFabId == PlayFabDataStore.PlayFabId){ //This is me!
//				scrollTarget = listItem.GetComponent<RectTransform>();
//				listItem.Highlight ();
//				//MC EDIT
//				listItem.OnlineText.text = "ONLINE";
//				listItem.OnlineImage.gameObject.SetActive (true);
//
//			}
//			lastRank = entry.Position;
//			GUIInstances.Add (newObject);


		}

//		if(scrollTarget != null){
//			SnapTo (scrollTarget);
//		}

	}
		
	#endregion
}
