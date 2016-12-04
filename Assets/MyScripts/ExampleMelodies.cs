using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ExampleMelodies : MonoBehaviour {

	public static Dictionary<string, List<Melody>> SolfegeToMelodies = new Dictionary<string, List<Melody>>();

	static ExampleMelodies()
	{
		//initialize dictionary
		foreach (var solfegeKey in ScaleTone.SolfegeFlats)
			SolfegeToMelodies [solfegeKey] = new List<Melody> ();

		string tonic = "C";
		int tempo = 100;
		string currentSolfege;
		string name;
		List<string> solfList;
		List<float> beatList;

		//DO
		currentSolfege = ScaleTone.SolfegeFlats [0];

		name = "Here Comes the Bride";
		solfList = new List<string>{"SOLl","DOh","DOh","DOh","SOLl","REh","TIl","DOh"};
		beatList = new List<float>{1f,2f,2.66f,3f,5f,6f,6.66f,7f};
		AddMelody (currentSolfege,name, tonic, tempo, solfList, beatList);

		name = "Somewhere, Over the Rainbow";
		solfList = new List<string>{"DOl","DOh","TIl","SOLl","LAl","TIl","DOh"};
		beatList = new List<float>{1f,3f,5f,6f,6.5f,7f,8f};
		AddMelody (currentSolfege,name, tonic, tempo, solfList, beatList);

		name = "Time to Say Goodbye";
		solfList = new List<string>{"SOLl","DOh","TIl","REh","DOh"};
		beatList = new List<float>{1f,3f,7f,8f,9f};
		AddMelody (currentSolfege,name, tonic, tempo, solfList, beatList);

		name = "Ave Maria";
		solfList = new List<string>{"DOh","TIl","DOh","MIh","REh"};
		beatList = new List<float>{1f,3f,4f,5f,7f};
		AddMelody (currentSolfege,name, tonic, tempo, solfList, beatList);

		//RE 
		currentSolfege = ScaleTone.SolfegeFlats [1];

		name = "Someone to Watch Over Me";
		solfList = new List<string>{"DOl","REl","MIl","SOLl","LAl","DOh","REh","REh","DOh","TIl"};
		beatList = new List<float>{1f,1.5f,2f,2.5f,3f,3.5f,4f,4.5f,5.5f,6f};
		AddMelody (currentSolfege,name, tonic, tempo, solfList, beatList);

		name = "Have Yourself A Merry Little Christmas";
		solfList = new List<string>{"DOl","MIl","SOLl","DOh","SOLl","FAl","MIl","REl","DOl","REl"};
		beatList = new List<float>{1f,2f,3f,4f,5f,5.5f,6f,6.5f,7f,8f};
		AddMelody (currentSolfege,name, tonic, tempo, solfList, beatList);

		name = "I Loves You Porgy";
		solfList = new List<string>{"DOl","MIl","SOLl","TIl","REh","DOh","SOLl","MIl","MIl","SOLl"};
		beatList = new List<float>{1.5,2,2.5,3,3.5,5.5,6,6.5,7,7.5};
		AddMelody (currentSolfege,name, tonic, tempo, solfList, beatList);


		//TI
		currentSolfege = ScaleTone.SolfegeFlats [11];

		name = "Jurassic Park Theme";
		solfList = new List<string>{"DOh","TIl","DOh","DOh","TIl","DOh","DOh","TIl","DOh","REh","REh","FAh","FAh"};
		beatList = new List<float>{1f,1.5f,2f,5f,5.5f,6f,9f,9.5f,10f,11.5f,12f,13.5f,14f};
		AddMelody (currentSolfege,name, tonic, tempo, solfList, beatList);

	}

	public static void SetExampleMelodies(string solfege)
	{
		//TODO: CALL THIS IN GAME MEDIATOR, ONLY SET WHEN THE BUTTON IS PRESSED
	
	}

	private static void AddMelody(string currentSolfege,string name, string tonic, int tempo, List<string> solfList, List<float> beatList)
	{
		SolfegeToMelodies[currentSolfege].Add(new Melody (name, tonic, tempo, solfList, beatList));
	}

	/*
	 * 
	 * else if tutorialSection == "sol"
        {
            tunesLimited = ["William Tell Overture", "Superman Theme Song", "Mighty Mouse Theme Song"]
        }
        else if tutorialSection == "sol from below"
        {
            tunesLimited = ["William Tell Overture (Theme)","Happy Birthday","Here Comes the Bride","Chopin Nocturne Op. 9 No 2","Someday My Prince Will Come","Chopin Waltz Op. 64 No 2","At Last","Singin' in the Rain","Han Solo and the Princess"] // chopin nocturne, waltz, fantaisie, marions theme, someday, another you, once in life,
        }
        else if tutorialSection == "mi"    //mi
        {
            tunesLimited = ["Mary Had a Little Lamb", "Raindrops Keep Falling on My Head", "Brahms' Lullaby", "A Whole New World"]
        }
        else if tutorialSection == "fa"    //fa
        {
            tunesLimited = ["Don't Stop Believin'", "When I Fall in Love", "Happy Birthday (Ending)"]
        }
        else if tutorialSection == "la"    //la
        {
            tunesLimited = ["The Hills Are Alive","What A Wonderful World","Kumbaya","Singin' in the Rain"]
            
        }
        else if tutorialSection == "re"   //re
        {
            tunesLimited = ["Someone to Watch Over Me", "Have Yourself A Merry Little Christmas","I Loves You Porgy","All I Ask of You"]
            
            print(tunesLimited)
        }
        else if tutorialSection == "play minor scale"
        {
            tunesLimited = ["Minor Scale"]
        }
        else if tutorialSection == "me"
        {
            tunesLimited = ["Alone Together","Beethoven's 5th Symphony","Round Midnight"]
        }
        else if tutorialSection == "le"
        {
            tunesLimited = ["Darth Vader Theme","Batman Theme","Sleepwalk (Major)","Revolutionary Etude"]//,"Autumn Leaves"]
        }
        else if tutorialSection == "te"
        {
            tunesLimited = ["Peter Gunn Theme","Watermelon Man","Luck Be a Lady","Rockin' Robin"] //mission imp
        }
        else if tutorialSection == "fi"
        {
            tunesLimited = ["Young at Heart","Birk's Works","Back to the Future Theme","The Simpsons Theme","Star-Spangled Banner","Pink Panther Theme"]//maria,baby elephant,agua de beber,be my love', young at heart!!
        }
        else if tutorialSection == "ra"
        {
            tunesLimited = ["Cry Me a River","Nardis","Han Solo and the Princess"]//white rabbit,tool
        }


*/
}
