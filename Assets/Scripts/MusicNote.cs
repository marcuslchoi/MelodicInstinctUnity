using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class MusicNote : MonoBehaviour {

	private static string[] _notesFlat = new string[] { "Cl", "Dbl", "Dl", "Ebl", "El", "Fl", "Gbl", "Gl", "Abl", "Al", "Bbl", "Bl","Ch", "Dbh", "Dh", "Ebh", "Eh", "Fh", "Gbh", "Gh", "Abh", "Ah", "Bbh", "Bh" };
	private static string[] _notesSharp = new string[] { "Cl", "C#l", "Dl", "D#l", "El", "Fl", "F#l", "Gl", "G#l", "Al", "A#l", "Bl","Ch", "C#h", "Dh", "D#h", "Eh", "Fh", "F#h", "Gh", "G#h", "Ah", "A#h", "Bh" };

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
