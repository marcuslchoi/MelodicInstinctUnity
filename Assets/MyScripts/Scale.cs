using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System;
using System.Text;

//public enum ScaleDegree { DOl, RAl, REl, MEl, MIl, FAl, SEl, SOLl, LEl, LAl, TEl, TIl, DOh, RAh, REh, MEh, MIh, FAh, SEh, SOLh, LEh, LAh, TEh, TIh }
public enum ScaleType { MAJOR, RELATIVE_MINOR, MELODIC_MINOR, HARMONIC_MINOR }

public class Scale : MonoBehaviour {

	//STATICS

	public static List<string> Major = new List<string> ();

//		new List<ScaleDegree>
//	{ScaleDegree.DOl,ScaleDegree.REl,ScaleDegree.MIl,ScaleDegree.FAl,ScaleDegree.SOLl,ScaleDegree.LAl,ScaleDegree.TIl,
//		ScaleDegree.DOh,ScaleDegree.REh,ScaleDegree.MIh,ScaleDegree.FAh,ScaleDegree.SOLh,ScaleDegree.LAh,ScaleDegree.TIh };

//	public static List<ScaleDegree> RelativeMinor = new List<ScaleDegree>
//	{ScaleDegree.DOl,ScaleDegree.REl,ScaleDegree.MEl,ScaleDegree.FAl,ScaleDegree.SOLl,ScaleDegree.LEl,ScaleDegree.TEl, 
//		ScaleDegree.DOh,ScaleDegree.REh,ScaleDegree.MEh,ScaleDegree.FAh,ScaleDegree.SOLh,ScaleDegree.LEh,ScaleDegree.TEh};

	//DICTIONARY CONTAINING KEY: SCALE TYPES, VALUES: LIST OF SCALE DEGREES 
	public static Dictionary<ScaleType, List<string>> TypeToDegrees = new Dictionary<ScaleType, List<string>>();

	//END STATICS

	private string _tonic;
	private int _tonicIndex;

	static Scale()
	{
		//populate the scale types
		foreach (var solfege in ScaleTone.SolfegeTwoOctaves) 
		{
		
			//the solfege syllable without an octave indicator
			var solfegeGeneral = Constants.RemoveLast (solfege);

			if (Constants.MAJOR_TONES.Contains (solfegeGeneral)) 
			{
				Major.Add (solfege);
			}
			//TODO: OTHER SCALES
		}

		TypeToDegrees.Add (ScaleType.MAJOR, Major);
			
	}

	//TODO: PUT TYPE IN MELODY?
	public Scale(string tonic, ScaleType type)
	{
		Type = type;
		Tonic = tonic;
		PopulateMusicNotes();
	}

	public Scale(string tonic)
	{
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
		private set;
	}

	public ScaleType Type
	{
		get;
		private set;
	}

	private void PopulateMusicNotes()
	{

		//TODO: = Tonic+lowerOctIndicator
		StringBuilder tonicWithIndicator = new StringBuilder (Tonic);
		tonicWithIndicator.Append (Constants.lowerOctIndicator);

		TonicIndex = System.Array.IndexOf(MusicNote.NotesFlat, tonicWithIndicator.ToString());

		int i;
		int toneCount = 12;
		var solfegeTwoOctaves = ScaleTone.SolfegeTwoOctaves; //Enum.GetNames(typeof(ScaleDegree));
		var solfNoteDict = new Dictionary<string, string>();

		string solfKeyStr;
		string noteStr;
		//ScaleDegree solfKey;

		//ie, do = "Bb"
		//these are the notes below the root
		for (i = TonicIndex; i > 0; i--)
		{
			solfKeyStr = solfegeTwoOctaves[toneCount - i];
			noteStr = MusicNote.NotesFlat[TonicIndex - i];

			solfNoteDict[solfKeyStr] = noteStr;
		}

		//starts at root index to make sure root is lower 'DO'
		for (i = TonicIndex; i < solfegeTwoOctaves.Count; i++)
		{
			noteStr = MusicNote.NotesFlat[i];

			if (i >= TonicIndex && i < toneCount || i >= toneCount + TonicIndex)
			{
				solfKeyStr = solfegeTwoOctaves[i - TonicIndex];

			}
			else //if (i >= toneCount && i < toneCount + tonicIndex)
			{
				solfKeyStr = solfegeTwoOctaves[i - TonicIndex + toneCount];

			}

			solfNoteDict[solfKeyStr] = noteStr;
		}

		MusicNotes = new List<MusicNote>();

		//this now generates all tones and puts them in dictionary (not just for specified scale)  
		foreach (string solf in solfNoteDict.Keys)
		{
			//if the scaletype of this scale obj contains the solfege key
			if (true)//(TypeToDegrees[Type].Contains(solf))
			{
				MusicNote musicNote = new MusicNote(solf, solfNoteDict[solf]);
				MusicNotes.Add(musicNote);
			}

		}

	}
}
