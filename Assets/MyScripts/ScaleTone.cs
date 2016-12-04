using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

public class ScaleTone : MonoBehaviour {

	private static List<string> _solfegeFlats = new List<string>{"DO","RA","RE","ME","MI","FA","SE","SOL","LE","LA","TE","TI"};
	private static List<string> _solfegeSharps = new List<string>{"DO","DI","RE","RI","MI","FA","FI","SOL","SI","LA","LI","TI"};
	private static List<string> _numberFlats = new List<string>{"1","b2","2","b3","3","4","b5","5","b6","6","b7","7"};
	private static List<string> _numberSharps = new List<string>{"1","#1","2","#2","3","4","#4","5","#5","6","#6","7"};
	private static List<string> _solfegeTwoOctaves = new List<string> ();

	private string _solfegeOctave;
	private string _solfegeFlat;
	private string _solfegeSharp;
	private string _numberFlat;
	private string _numberSharp;

	public string SolfegeOctave {
		get{ return _solfegeOctave; }
		private set{ _solfegeOctave = value; }
	}

	public string SolfegeFlat {
		get{ return _solfegeFlat; }
		private set{ _solfegeFlat = value; }
	}
	public string SolfegeSharp {
		get{ return _solfegeSharp; }
		private set{ _solfegeSharp = value; }
	}
	public string NumberFlat {
		get{ return _numberFlat; }
		private set{ _numberFlat = value; }
	}
	public string NumberSharp {
		get{ return _numberSharp; }
		private set{ _numberSharp = value; }
	}

	public static List<string> SolfegeFlats {
		get{ return _solfegeFlats.ToList (); }

	}
	public static List<string> SolfegeSharps {
		get{ return _solfegeSharps.ToList (); }

	}
	public static List<string> NumberFlats {
		get{ return _numberFlats.ToList (); }

	}
	public static List<string> NumberSharps {
		get{ return _numberSharps.ToList (); }

	}
	public static List<string> SolfegeTwoOctaves {
		get{ return _solfegeTwoOctaves.ToList (); }

	}

	public ScaleTone (string solfegeOctave)
	{
		var solfegeGeneral = Constants.RemoveLast (solfegeOctave);

		var solfIndex = SolfegeFlats.IndexOf (solfegeGeneral);

		SolfegeOctave = solfegeOctave;
		SolfegeFlat = solfegeGeneral;
		SolfegeSharp = SolfegeSharps [solfIndex];
		NumberFlat = NumberFlats [solfIndex];
		NumberSharp = NumberSharps [solfIndex];

	}

	static ScaleTone()
	{
		int numberOfOctaves = 2;
		string octaveIndicator = "";

		int i = 0;

		//set tones for SolfegeTwoOctaves
		while (i < numberOfOctaves) 
		{
			if(i==0)
				octaveIndicator = Constants.lowerOctIndicator;
			else if(i==1)
				octaveIndicator = Constants.higherOctIndicator;

			foreach (var solfege in SolfegeFlats) 
			{
				_solfegeTwoOctaves.Add (solfege + octaveIndicator);
			}

			i++;
		}
			
	}

}
