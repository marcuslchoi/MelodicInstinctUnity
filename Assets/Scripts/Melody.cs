using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System;

public class Melody : MonoBehaviour {

	private int _length;
	private Scale _scale;
	private List<MusicNote> _notes = new List<MusicNote>();

	public Melody(int length, Scale scale)
	{
		_length = length;
		Scale = scale;

		GenerateMusicNotes();
	}

	//ctor for answer using inputed notes from user
	public Melody(List<MusicNote> answerNotes)
	{
		Notes = new List<MusicNote>();
		Notes = answerNotes;

		_length = answerNotes.Count;
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

	private void GenerateMusicNotes()
	{
		var random = new System.Random();
		int maxInterval;
		var noteIndices = new List<int>();

		Notes = new List<MusicNote>();

		//prevents intervals larger than maxInterval
		for (var i = 0; i < Length; i++)
		{
			var randNum = random.Next(100);

			if (randNum <= 20)
				maxInterval = 10;
			else
				maxInterval = 4;

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

	public Scale Scale
	{
		get{ return _scale; }
		set{ _scale=value; }
	}
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
