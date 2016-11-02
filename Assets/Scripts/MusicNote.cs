using UnityEngine;
using System.Collections;

public class MusicNote : MonoBehaviour {

	public static string[] notesFlat = new string[] { "C", "Db", "D", "Eb", "E", "F", "Gb", "G", "Ab", "A", "Bb", "B" };
	public static string[] notesSharp = new string[] { "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B" };

	private string _nameFlat;
	private string _nameSharp;
	private ScaleDegree _solfege;

	public MusicNote(ScaleDegree solfege, string nameFlat)
	{
		Solfege = solfege;

		NameFlat = nameFlat;

		//adds a higher octave indicator to sharp names
		var isHigherOctave = false;
		var higherOctIndicator = "1";

		var nameFlatTrunc = nameFlat;

		if (nameFlat.Contains(higherOctIndicator))
		{
			isHigherOctave = true;
			nameFlatTrunc = nameFlat.Remove(nameFlat.Length - 1);
		}

		int indexOfNameFlat = System.Array.IndexOf(notesFlat, nameFlatTrunc);

		if (isHigherOctave)
			NameSharp = notesSharp[indexOfNameFlat] + higherOctIndicator;
		else
			NameSharp = notesSharp[indexOfNameFlat];

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

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
