using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;

public class MusicNote : MonoBehaviour {

	private static string[] _notesFlat = new string[] { "Cl", "Dbl", "Dl", "Ebl", "El", "Fl", "Gbl", "Gl", "Abl", "Al", "Bbl", "Bl","Ch", "Dbh", "Dh", "Ebh", "Eh", "Fh", "Gbh", "Gh", "Abh", "Ah", "Bbh", "Bh" };
	private static string[] _notesSharp = new string[] { "Cl", "C#l", "Dl", "D#l", "El", "Fl", "F#l", "Gl", "G#l", "Al", "A#l", "Bl","Ch", "C#h", "Dh", "D#h", "Eh", "Fh", "F#h", "Gh", "G#h", "Ah", "A#h", "Bh" };

	private static Dictionary<string,string> _flatToSharp = new Dictionary<string,string>();
	private static Dictionary<string, List<char>> _tonicToKeyLayout = new Dictionary<string,List<char>> ();

	private string _nameFlat;
	private string _nameSharp;
	private ScaleDegree _solfege;

	//system calls this
	static MusicNote()
	{
		//tonic to key layout describes where the black and white piano keys are
		//in relation to the tonic
		//TODO: DRY
		List<string> notes = new List<string>{ "C", "Db", "D", "Eb", "E", "F", "Gb", "G", "Ab", "A", "Bb", "B" };
		List<char> keyLayout = new List<char>{ 'W', 'B', 'W', 'B', 'W', 'W', 'B', 'W', 'B', 'W', 'B', 'W' };

		//initialize _tonicToKeyLayout dictionary
		for(var i = 0;i < notes.Count; i++)
		{
			_tonicToKeyLayout.Add (notes [i], new List<char>(keyLayout));

			keyLayout.Add (keyLayout [0]);
			keyLayout.RemoveAt (0);
		}

		//initialize flatToSharp static dictionary
		for (var i = 0; i < NotesFlat.Length; i++)
			_flatToSharp [NotesFlat [i]] = NotesSharp [i];
	
	}

	public MusicNote(ScaleDegree solfege, string nameFlat)
	{
		Solfege = solfege;
		NameFlat = nameFlat;
		NameSharp = MusicNote.FlatToSharp[nameFlat];

	}

//	public MusicNote(string nameFlat)
//	{
//		NameFlat = nameFlat;
//	}

	public MusicNote (string solfegeString)
	{
		Solfege = (ScaleDegree)Enum.Parse (typeof(ScaleDegree), solfegeString);
	}

	public static Dictionary<string,string> FlatToSharp 
	{
		get{ return new Dictionary<string, string>(_flatToSharp); }
	}
		
	public static Dictionary<string,List<char>> TonicToKeyLayout 
	{
		get{ return new Dictionary<string, List<char>>(_tonicToKeyLayout); }
	}


	public static string[] NotesFlat 
	{
		get{ return _notesFlat; }
	}
	public static string[] NotesSharp 
	{
		get{ return _notesSharp; }
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
