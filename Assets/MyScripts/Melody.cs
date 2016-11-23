using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System;
using System.Linq;

public class Melody : MonoBehaviour {

	private int _length;
	private Scale _scale;
	private List<MusicNote> _notes = new List<MusicNote>();
	private List<float> _noteBeats = new List<float> ();	//the beats on which the notes are played
	private List<float> _timesBetweenNotes = new List<float>();
	private int _tempoBPM;
	private List<AudioClip> _toneClips = new List<AudioClip>();
	private int _bigInterval = 10;
	private int _smallInterval = 4;
	private int _percentBigInterval = 20;


	//note beats of 1 4/4 measure
	private List<float> POSSBEATS = new List<float>{1f,1.5f,2f,2.5f,3f,3.5f,4f,4.5f};


	public Melody(int length, Scale scale, int tempoBPM, int measures, int beatsPerMeasure)
	{
		Length = length;
		AllNotesScale = scale;
		TempoBPM = tempoBPM;
		Measures = measures;
		BeatsPerMeasure = beatsPerMeasure;

		GenerateMusicNotes();
		SetToneClips ();

		GenerateNoteBeats ();
		SetTimesBetweenNotes ();
	}

	//for example tunes
	public Melody(string tonic, int tempoBPM, List<string> solfegeStrings, List<float> noteBeats)
	{
		
		AllNotesScale = new Scale(tonic);
		TempoBPM = tempoBPM;

		//populate the notes using allnotesscale and solfstrings
		foreach (var solfString in solfegeStrings) 
		{
			Notes.Add (AllNotesScale.MusicNotes.Find (n => n.TheScaleTone.SolfegeFlat == solfString));
		}
		SetToneClips ();
		NoteBeats = noteBeats.ToList();
		SetTimesBetweenNotes ();
	
	}

	//ctor for answer using inputed notes from user
	public Melody(List<MusicNote> answerNotes)//, List<float>noteBeats)
	{
		Notes = new List<MusicNote>();
		Notes = answerNotes;

		Length = answerNotes.Count;

		//NoteBeats = noteBeats;
	}

	public List<AudioClip> ToneClips {
		get{ return _toneClips.ToList (); }
		//set;
	}

	//times when note is to be played 
	public List<float> TimesBetweenNotes 
	{
		get{ return _timesBetweenNotes; }
		private set{ _timesBetweenNotes = value; }
	}

	public int BigInterval 
	{
		get{ return _bigInterval; }
		set{ _bigInterval = value; }
	}
	public int SmallInterval 
	{
		get{ return _smallInterval; }
		set{ _smallInterval = value; }
	}
	public int PercentBigInterval 
	{
		get{ return _percentBigInterval; }
		set{ _percentBigInterval = value; }
	}

	public int Measures {
		get;
		private set;
	}

	public int BeatsPerMeasure {
		get;
		private set;
	}

	public int TempoBPM 
	{
		get{ return _tempoBPM; }
		private set{ _tempoBPM = value; }
	}

	public float Playtime 
	{
		get{ return TimePerBeat * (float)BeatsPerMeasure * (float)Measures; }

	}

	public float TimePerBeat 
	{
		
		get{ return (float)Constants.SECONDS_PER_MIN / (float)TempoBPM; }

	}

	public List<float> NoteBeats 
	{
		get{ return _noteBeats; }
		private set{_noteBeats = value; }
	}

	public int Length
	{
		get { return _length; }
		set { _length = value; }
	}

	public List<MusicNote> Notes
	{
		get{return _notes;}
		private set{ _notes = value; }
	}

	public Scale AllNotesScale
	{
		get{ return _scale; }
		set{ _scale=value; }
	}
		
	public IEnumerator Play()
	{

		var i = 0;
		foreach (var toneClip in _toneClips) 
		{
			yield return new WaitForSeconds (TimesBetweenNotes[i]);
			Constants.PlayClip (toneClip, Constants.origin);
			i++;
		}
	}

	private void SetToneClips()
	{
		//append octave number to general note name to get the audio clip
		for (var i = 0; i < Notes.Count; i++) 
		{
			int octave = Constants.lowerOct;
			if (Notes [i].NameFlat.Contains (Constants.higherOctIndicator))
				octave++;

			var noteNameGeneral = Constants.RemoveLast (Notes [i].NameFlat);
			_toneClips.Add (Resources.Load<AudioClip> (noteNameGeneral + octave));

		}
	}

	private void GenerateNoteBeats()
	{
		var beatIndices = new List<int> ();

		var random = new System.Random();

		for (var i = 0; i < Length; i++)
		{
			int beatIndex;
			do
			{
				beatIndex = random.Next(POSSBEATS.Count);
			}
			while (beatIndices.Contains(beatIndex));

			beatIndices.Add(beatIndex);

		}
		
		beatIndices.Sort();

		foreach (var beatIndex in beatIndices) 
		{
			var beat = POSSBEATS [beatIndex];
			NoteBeats.Add (beat);
		}
	}

	private void SetTimesBetweenNotes()
	{
		var previousWaitTime = 0f;
		foreach (var noteBeat in NoteBeats) 
		{
			var noteWaitTime = (noteBeat - Constants.beatAdjustment)*TimePerBeat;
			TimesBetweenNotes.Add(noteWaitTime-previousWaitTime);
			previousWaitTime = noteWaitTime;
		}
	
	}

	private void GenerateMusicNotes()
	{
		var random = new System.Random();
		int maxInterval;

		var noteIndices = new List<int>();

		Notes = new List<MusicNote>();
		int percentWhole = 100;

		var scaleTypeChosen = AllNotesScale.Type;
		List<string> scaleDegreesChosen = Scale.TypeToDegrees [scaleTypeChosen];

		var allMusicNotes = AllNotesScale.MusicNotes;

		//these are the poss music notes for the given scaletype
		var possMusicNotes = new List<MusicNote>();
		for(var j = 0; j < allMusicNotes.Count; j++)
		{
			var solfege = allMusicNotes [j].TheScaleTone.SolfegeFlat;

			if(scaleDegreesChosen.Contains(solfege))
				possMusicNotes.Add(allMusicNotes[j]);

		}

		//prevents intervals larger than maxInterval
		for (var i = 0; i < Length; i++)
		{
			//for max interval
			//PercentBigInterval of the time, max interval is BigInterval, otherwise it's SmallInterval
			var randNum = random.Next(percentWhole);
			if (randNum <= PercentBigInterval)
				maxInterval = BigInterval;
			else
				maxInterval = SmallInterval;

			//generate the random note indices
			int randNoteIndex;
			do
			{
				randNoteIndex = random.Next(possMusicNotes.Count);
			}
			while (i > 0 && Math.Abs(noteIndices[i - 1] - randNoteIndex) >= maxInterval);

			noteIndices.Add(randNoteIndex);
			Notes.Add(possMusicNotes[randNoteIndex]);

		}

		//SetToneClips ();
	}

}
