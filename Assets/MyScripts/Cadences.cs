using UnityEngine;
using System.Collections;
using System.Collections.Generic;

//these are the same as Scaletone.SolfegeFlats
public enum SolfEnum
{
	DO,RA,RE,ME,MI,FA,SE,SOL,LE,LA,TE,TI
}
public class Cadences : MonoBehaviour {

	public static string tonic;

	public static List<SolfEnum> IChord = new List<SolfEnum>{ SolfEnum.DO, SolfEnum.MI, SolfEnum.SOL };
	public static List<SolfEnum> IVChord = new List<SolfEnum>{ SolfEnum.DO, SolfEnum.FA, SolfEnum.LA };
	public static List<SolfEnum> VChord = new List<SolfEnum>{ SolfEnum.TI, SolfEnum.RE, SolfEnum.SOL };

	public static List<List<SolfEnum>> Chords;

	static Cadences ()
	{
		Chords = new List<List<SolfEnum>>{ IChord, IVChord, IChord, VChord, IChord };
	}
}
