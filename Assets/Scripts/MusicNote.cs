using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class MusicNote : MonoBehaviour {

	private static string[] _notesFlat = new string[] { "C", "Db", "D", "Eb", "E", "F", "Gb", "G", "Ab", "A", "Bb", "B","C1", "Db1", "D1", "Eb1", "E1", "F1", "Gb1", "G1", "Ab1", "A1", "Bb1", "B1" };
	private static string[] _notesSharp = new string[] { "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B","C1", "C#1", "D1", "D#1", "E1", "F1", "F#1", "G1", "G#1", "A1", "A#1", "B1" };

	private static Dictionary<string,string> _flatToSharp = new Dictionary<string,string>();

	private string _nameFlat;
	private string _nameSharp;
	private ScaleDegree _solfege;

	//system calls this
	static MusicNote()
	{
		//initialize flatToSharp static dictionary
		for (var i = 0; i < NotesFlat.Length; i++)
			FlatToSharp [NotesFlat [i]] = NotesSharp [i];
	
	}

	public static Dictionary<string,string> FlatToSharp 
	{
		get{ return _flatToSharp; }
	}
	public static string[] NotesFlat 
	{
		get{ return _notesFlat; }
	}
	public static string[] NotesSharp 
	{
		get{ return _notesSharp; }
	}

	public MusicNote(ScaleDegree solfege, string nameFlat)
	{
		Solfege = solfege;

		NameFlat = nameFlat;

		NameSharp = MusicNote.FlatToSharp[nameFlat];

	}

	public MusicNote(string nameFlat)
	{
		NameFlat = nameFlat;
	}

	public string NameFlat
	{
		get{ return _nameFlat; }
		set{ _nameFlat = value; }
	}

	public string NameSharp
	{
		get{ return _nameSharp; }
		set{ _nameSharp = value; }
	}

	public ScaleDegree Solfege
	{
		get{ return _solfege; }
		set{ _solfege = value; }
	}
		
}
