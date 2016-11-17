using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System;
using System.Text;

//TODO: turn this into a class? ie Ra = Di = b2 = #1
public enum ScaleDegree { DOl, RAl, REl, MEl, MIl, FAl, SEl, SOLl, LEl, LAl, TEl, TIl, DOh, RAh, REh, MEh, MIh, FAh, SEh, SOLh, LEh, LAh, TEh, TIh }
public enum ScaleType { MAJOR, RELATIVE_MINOR, MELODIC_MINOR, HARMONIC_MINOR }

public class Scale : MonoBehaviour {

	//STATICS: are these needed??

	public static List<ScaleDegree> Major = new List<ScaleDegree>
	{ScaleDegree.DOl,ScaleDegree.REl,ScaleDegree.MIl,ScaleDegree.FAl,ScaleDegree.SOLl,ScaleDegree.LAl,ScaleDegree.TIl,
		ScaleDegree.DOh,ScaleDegree.REh,ScaleDegree.MIh,ScaleDegree.FAh,ScaleDegree.SOLh,ScaleDegree.LAh,ScaleDegree.TIh };

	public static List<ScaleDegree> RelativeMinor = new List<ScaleDegree>
	{ScaleDegree.DOl,ScaleDegree.REl,ScaleDegree.MEl,ScaleDegree.FAl,ScaleDegree.SOLl,ScaleDegree.LEl,ScaleDegree.TEl, 
		ScaleDegree.DOh,ScaleDegree.REh,ScaleDegree.MEh,ScaleDegree.FAh,ScaleDegree.SOLh,ScaleDegree.LEh,ScaleDegree.TEh};

	//DICTIONARY CONTAINING KEY: SCALE TYPES, VALUES: LIST OF SCALE DEGREES 
	public static Dictionary<ScaleType, List<ScaleDegree>> TypeToDegrees = new Dictionary<ScaleType, List<ScaleDegree>>{
		{ScaleType.MAJOR,Major}, {ScaleType.RELATIVE_MINOR,RelativeMinor}};
	//END STATICS

	private string _tonic;
	private int _tonicIndex;

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
	public int TonicIndex
	{
		get{ return _tonicIndex; }
		private set{ _tonicIndex = value; }
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

		TonicIndex = System.Array.IndexOf(MusicNote.NotesFlat, tonicWithIndicator.ToString());

		int i;
		int toneCount = 12;
		var solfegeArray = Enum.GetNames(typeof(ScaleDegree));
		var solfNoteDict = new Dictionary<ScaleDegree, string>();

		string solfKeyStr;
		string noteStr;
		ScaleDegree solfKey;

		//ie, do = "Bb"
		//these are the notes below the root
		for (i = TonicIndex; i > 0; i--)
		{
			solfKeyStr = solfegeArray[toneCount - i];
			noteStr = MusicNote.NotesFlat[TonicIndex - i];

			solfKey = (ScaleDegree)Enum.Parse(typeof(ScaleDegree), solfKeyStr);
			//note = (NoteName)Enum.Parse(typeof(NoteName), noteStr);

			solfNoteDict[solfKey] = noteStr;
		}

		//starts at root index to make sure root is lower 'DO'
		for (i = TonicIndex; i < solfegeArray.Length; i++)
		{
			noteStr = MusicNote.NotesFlat[i];

			if (i >= TonicIndex && i < toneCount || i >= toneCount + TonicIndex)
			{
				solfKeyStr = solfegeArray[i - TonicIndex];

			}
			else //if (i >= toneCount && i < toneCount + tonicIndex)
			{
				solfKeyStr = solfegeArray[i - TonicIndex + toneCount];

			}

			solfKey = (ScaleDegree)Enum.Parse(typeof(ScaleDegree), solfKeyStr);

			solfNoteDict[solfKey] = noteStr;
		}

		MusicNotes = new List<MusicNote>();

		//this now generates all tones and puts them in dictionary (not just for specified scale)  
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
