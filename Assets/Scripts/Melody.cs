using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System;

public class Melody : MonoBehaviour {

	private int _length;
	private Scale _scale;
	private List<MusicNote> _notes = new List<MusicNote>();
	private List<float> _noteBeats = new List<float> ();	//the beats on which the notes are played
	private int _tempoBPM;

	//note beats of 1 4/4 measure
	private List<float> POSSBEATS = new List<float>{1f,1.5f,2f,2.5f,3f,3.5f,4f,4.5f};


	public Melody(int length, Scale scale, int tempoBPM)
	{
		Length = length;
		Scale = scale;
		TempoBPM = tempoBPM;

		GenerateMusicNotes();
		GenerateNoteBeats ();
	}

	//ctor for answer using inputed notes from user
	public Melody(List<MusicNote> answerNotes)//, List<float>noteBeats)
	{
		Notes = new List<MusicNote>();
		Notes = answerNotes;

		Length = answerNotes.Count;

		//NoteBeats = noteBeats;
	}

	public int TempoBPM 
	{
		get{ return _tempoBPM; }
		private set{ _tempoBPM = value; }
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

	public Scale Scale
	{
		get{ return _scale; }
		set{ _scale=value; }
	}

	//TODO: PLAY THE MELODY BASED ON NOTES, NOTEBEATS, BPM
	public void Play()
	{
	
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
			NoteBeats.Add (POSSBEATS [beatIndex]);

	}

	private void GenerateMusicNotes()
	{
		var random = new System.Random();
		int maxInterval;
		var noteIndices = new List<int>();

		Notes = new List<MusicNote>();

		//prevents intervals larger than maxInterval
		for (var i = 0; i < Length; i++)
		{
			//for max interval
			var randNum = random.Next(100);
			if (randNum <= 20)
				maxInterval = 10;
			else
				maxInterval = 4;

			//generate the random note indices
			int randNoteIndex;
			do
			{
				randNoteIndex = random.Next(Scale.MusicNotes.Count);
			}
			while (i > 0 && Math.Abs(noteIndices[i - 1] - randNoteIndex) >= maxInterval);

			noteIndices.Add(randNoteIndex);
			Notes.Add(Scale.MusicNotes[randNoteIndex]);

		}
	}

}
