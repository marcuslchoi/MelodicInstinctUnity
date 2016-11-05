using UnityEngine;
using System.Collections;

public class Constants : MonoBehaviour {

	public static int totalTones = 12;
	public static string lowerOctIndicator = MusicNote.NotesFlat[0].Substring(MusicNote.NotesFlat[0].Length-1); 
	public static string higherOctIndicator = MusicNote.NotesFlat[totalTones].Substring(MusicNote.NotesFlat[totalTones].Length-1); 
	public static int SECONDS_PER_MIN = 60;

	public static float beatAdjustment = 1f; //adjust for first beat is 1, not 0
}
