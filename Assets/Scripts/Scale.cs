using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System;

public enum NoteName { C, Db, D, Eb, E, F, Gb, G, Ab, A, Bb, B, C1, Db1, D1, Eb1, E1, F1, Gb1, G1, Ab1, A1, Bb1, B1 }
//public enum NoteNameSharp { C, Cs, D, Ds, E, F, Fs, G, Gs, A, As, B, C1, Cs1, D1, Ds1, E1, F1, Fs1, G1, Gs1, A1, As1, B1 }
public enum ScaleDegree { DO, RA, RE, ME, MI, FA, SE, SOL, LE, LA, TE, TI, DO1, RA1, RE1, ME1, MI1, FA1, SE1, SOL1, LE1, LA1, TE1, TI1 }
public enum ScaleType { MAJOR, RELATIVE_MINOR, MELODIC_MINOR, HARMONIC_MINOR }

public class Scale : MonoBehaviour {

	//STATICS: are these needed??

	public static List<ScaleDegree> Major = new List<ScaleDegree>
	{ScaleDegree.DO,ScaleDegree.RE,ScaleDegree.MI,ScaleDegree.FA,ScaleDegree.SOL,ScaleDegree.LA,ScaleDegree.TI,
		ScaleDegree.DO1,ScaleDegree.RE1,ScaleDegree.MI1,ScaleDegree.FA1,ScaleDegree.SOL1,ScaleDegree.LA1,ScaleDegree.TI1 };

	public static List<ScaleDegree> RelativeMinor = new List<ScaleDegree>
	{ScaleDegree.DO,ScaleDegree.RE,ScaleDegree.ME,ScaleDegree.FA,ScaleDegree.SOL,ScaleDegree.LE,ScaleDegree.TE, 
		ScaleDegree.DO1,ScaleDegree.RE1,ScaleDegree.ME1,ScaleDegree.FA1,ScaleDegree.SOL1,ScaleDegree.LE1,ScaleDegree.TE1};

	//DICTIONARY CONTAINING KEY: SCALE TYPES, VALUES: LIST OF SCALE DEGREES 
	public static Dictionary<ScaleType, List<ScaleDegree>> Dict = new Dictionary<ScaleType, List<ScaleDegree>>{
		{ScaleType.MAJOR,Major}, {ScaleType.RELATIVE_MINOR,RelativeMinor}};
	//END STATICS

	private NoteName _tonic;

	public Scale(NoteName tonic, ScaleType type)
	{
		Type = type;
		Tonic = tonic;
		PopulateMusicNotes(tonic);
	}
	public NoteName Tonic
	{
		get{ return _tonic; }
		set{ _tonic = value; }
	}

	public List<MusicNote> MusicNotes
	{
		get;
		set;
	}

	public ScaleType Type
	{
		get;
		set;
	}

	private void PopulateMusicNotes(NoteName tonic)
	{
		int tonicIndex = (int)tonic;

		int i;
		int toneCount = 12;
		var solfegeArray = Enum.GetNames(typeof(ScaleDegree));
		var noteArray = Enum.GetNames(typeof(NoteName));
		var solfNoteDict = new Dictionary<ScaleDegree, NoteName>();

		string solfKeyStr;
		string noteStr;
		ScaleDegree solfKey;
		NoteName note;

		//ie, do = "Bb"
		//these are the notes below the root
		for (i = tonicIndex; i > 0; i--)
		{
			solfKeyStr = solfegeArray[toneCount - i];
			noteStr = noteArray[tonicIndex - i];

			solfKey = (ScaleDegree)Enum.Parse(typeof(ScaleDegree), solfKeyStr);
			note = (NoteName)Enum.Parse(typeof(NoteName), noteStr);

			solfNoteDict[solfKey] = note;
		}

		//starts at root index to make sure root is lower 'DO'
		for (i = tonicIndex; i < solfegeArray.Length; i++)
		{
			noteStr = noteArray[i];

			if (i >= tonicIndex && i < toneCount || i >= toneCount + tonicIndex)
			{
				solfKeyStr = solfegeArray[i - tonicIndex];

			}
			else //if (i >= toneCount && i < toneCount + tonicIndex)
			{
				solfKeyStr = solfegeArray[i - tonicIndex + toneCount];

			}

			solfKey = (ScaleDegree)Enum.Parse(typeof(ScaleDegree), solfKeyStr);
			note = (NoteName)Enum.Parse(typeof(NoteName), noteStr);

			solfNoteDict[solfKey] = note;
		}

		MusicNotes = new List<MusicNote>();

		foreach (var key in solfNoteDict.Keys)
		{
			//if the scaletype of this scale obj contains the solfege key
			if (Dict[Type].Contains(key))
			{
				MusicNote musicNote = new MusicNote(key, solfNoteDict[key].ToString());
				MusicNotes.Add(musicNote);
			}

		}

	}

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
