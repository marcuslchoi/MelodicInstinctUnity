using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System;
using System.Text;

//TODO: turn this into a class? ie Ra = Di = b2 = #1
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
	public static Dictionary<ScaleType, List<ScaleDegree>> TypeToDegrees = new Dictionary<ScaleType, List<ScaleDegree>>{
		{ScaleType.MAJOR,Major}, {ScaleType.RELATIVE_MINOR,RelativeMinor}};
	//END STATICS

	private string _tonic;

	public Scale(string tonic, ScaleType type)
	{
		Type = type;
		Tonic = tonic;
		PopulateMusicNotes();
	}
	public string Tonic
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

	private void PopulateMusicNotes()
	{
		StringBuilder tonicWithIndicator = new StringBuilder (Tonic);
		tonicWithIndicator.Append (Constants.lowerOctIndicator);

		int tonicIndex = System.Array.IndexOf(MusicNote.NotesFlat, tonicWithIndicator.ToString());

		int i;
		int toneCount = 12;
		var solfegeArray = Enum.GetNames(typeof(ScaleDegree));
		var solfNoteDict = new Dictionary<ScaleDegree, string>();

		string solfKeyStr;
		string noteStr;
		ScaleDegree solfKey;

		//ie, do = "Bb"
		//these are the notes below the root
		for (i = tonicIndex; i > 0; i--)
		{
			solfKeyStr = solfegeArray[toneCount - i];
			noteStr = MusicNote.NotesFlat[tonicIndex - i];

			solfKey = (ScaleDegree)Enum.Parse(typeof(ScaleDegree), solfKeyStr);
			//note = (NoteName)Enum.Parse(typeof(NoteName), noteStr);

			solfNoteDict[solfKey] = noteStr;
		}

		//starts at root index to make sure root is lower 'DO'
		for (i = tonicIndex; i < solfegeArray.Length; i++)
		{
			noteStr = MusicNote.NotesFlat[i];

			if (i >= tonicIndex && i < toneCount || i >= toneCount + tonicIndex)
			{
				solfKeyStr = solfegeArray[i - tonicIndex];

			}
			else //if (i >= toneCount && i < toneCount + tonicIndex)
			{
				solfKeyStr = solfegeArray[i - tonicIndex + toneCount];

			}

			solfKey = (ScaleDegree)Enum.Parse(typeof(ScaleDegree), solfKeyStr);

			solfNoteDict[solfKey] = noteStr;
		}

		MusicNotes = new List<MusicNote>();

		foreach (ScaleDegree solf in solfNoteDict.Keys)
		{
			//if the scaletype of this scale obj contains the solfege key
			if (true)//(TypeToDegrees[Type].Contains(solf))
			{
				MusicNote musicNote = new MusicNote(solf, solfNoteDict[solf].ToString());
				MusicNotes.Add(musicNote);
			}

		}

	}
}
