using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Unity3dAzure.AppServices;

public class Constants : MonoBehaviour {

	public static int totalTones = 12;
	public static string lowerOctIndicator = MusicNote.NotesFlat[0].Substring(MusicNote.NotesFlat[0].Length-1); 
	public static string higherOctIndicator = MusicNote.NotesFlat[totalTones].Substring(MusicNote.NotesFlat[totalTones].Length-1); 
	public static int SECONDS_PER_MIN = 60;

	//TODO: DON'T NEED CLIENT HERE, REMOVE BEFORE RELEASE
	public static MobileServiceClient Client;
	public static MobileServiceTable<Highscore> HighScoresTable;
	public static MobileServiceTable<User> UsersTable;

	public static List<string> MAJOR_TONES = new List<string>{"DO","RE","MI","FA","SOL","LA","TI"};

	public static int lowerOct = 3;

	public static float beatAdjustment = 1f; //adjust for first beat is 1, not 0

	public static float maxBeatDifference = .25f;

	public static Vector3 origin = new Vector3 (0, 0, 0);

	//this method created to play the audio clip like AudioSource.PlayClipAtPoint, 
	//but now with volume control of the temporarily created AudioSource game object
	//http://answers.unity3d.com/questions/316575/adjust-properties-of-audiosource-created-with-play.html
	public static AudioSource PlayClip(AudioClip clip, Vector3 pos)
	{
		GameObject tempGO = new GameObject("TempAudio"); // create the temp object
		tempGO.transform.position = pos; // set its position
		AudioSource aSource = tempGO.AddComponent<AudioSource>(); // add an audio source
		aSource.clip = clip; // define the clip
		// set other aSource properties here, if desired
		aSource.PlayDelayed(0f);// Play(); // start the sound
		Destroy(tempGO, clip.length); // destroy object after clip duration

		//aSource.pitch = 1.0f;
		aSource.volume = 1.0f;
		return aSource; // return the AudioSource reference
	}

	public static string RemoveLast(string str)
	{
		var lastRemoved = str.Substring (0, str.Length - 1);
		return lastRemoved;
	}
}
