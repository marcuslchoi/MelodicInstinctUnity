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
	private List<AudioClip> _toneClips = new List<AudioClip>();


	//note beats of 1 4/4 measure
	private List<float> POSSBEATS = new List<float>{1f,1.5f,2f,2.5f,3f,3.5f,4f,4.5f};


	public Melody(int length, Scale scale, int tempoBPM, int measures, int beatsPerMeasure)
	{
		Length = length;
		Scale = scale;
		TempoBPM = tempoBPM;
		Measures = measures;
		BeatsPerMeasure = beatsPerMeasure;

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

	public float Playtime {
		get;
		private set;
	}

	public float TimePerBeat {
		
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

	public Scale Scale
	{
		get{ return _scale; }
		set{ _scale=value; }
	}


	//TODO: PLAY THE MELODY BASED ON NOTES, NOTEBEATS, BPM
	public IEnumerator Play()
	{
		var origin = new Vector3 (0, 0, 0);

		float waitTime;
		float previousWaitTime = 0f;

		var i = 0;
		foreach (var toneClip in _toneClips) 
		{
			waitTime = (NoteBeats [i] - Constants.beatAdjustment)*TimePerBeat;
			yield return new WaitForSeconds (waitTime-previousWaitTime);
			PlayClip (toneClip, origin);
			previousWaitTime = waitTime;
			i++;
		}

		//yield return null;
	}

	//this method created to play the audio clip like AudioSource.PlayClipAtPoint, 
	//but now with volume control of the temporarily created AudioSource game object
	//http://answers.unity3d.com/questions/316575/adjust-properties-of-audiosource-created-with-play.html
	private AudioSource PlayClip(AudioClip clip, Vector3 pos)
	{
		GameObject tempGO = new GameObject("TempAudio"); // create the temp object
		tempGO.transform.position = pos; // set its position
		AudioSource aSource = tempGO.AddComponent<AudioSource>(); // add an audio source
		aSource.clip = clip; // define the clip
		// set other aSource properties here, if desired
		aSource.Play(); // start the sound
		Destroy(tempGO, clip.length); // destroy object after clip duration

		//aSource.pitch = 1.0f;
		aSource.volume = 1.0f;
		return aSource; // return the AudioSource reference
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

		Playtime = TimePerBeat*(float)BeatsPerMeasure*(float)Measures;
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
			//20% of the time, max interval is 10, otherwise it's 4
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

			int octave = 3;
			if (Notes [i].NameFlat.Contains ("h"))
				octave++;

			var noteNameGeneral = Notes[i].NameFlat.Substring (0, Notes[i].NameFlat.Length - 1);
			_toneClips.Add (Resources.Load<AudioClip>(noteNameGeneral+octave));

		}
	}

}
