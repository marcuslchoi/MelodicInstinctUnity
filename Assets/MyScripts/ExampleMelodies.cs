using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ExampleMelodies : MonoBehaviour {

	public static Dictionary<string, List<Melody>> SolfegeToMelodies = new Dictionary<string, List<Melody>>();

	public static Melody hereComes;
	public static Melody somewhereOver;
	public static Melody timeToSay;
	public static Melody aveMaria;
	public static Melody jurassicPark;

	public static Melody someoneWatch;
	public static Melody haveYourself;
	public static Melody iLoves;

	public static Melody maryHad;
	public static Melody raindropsKeep;
	public static Melody brahmsLullaby;
	public static Melody wholeNewWorld;

	public static Melody dontStop;
	public static Melody whenIFall;
	public static Melody happyBdayEnding;

	//sol
	//["William Tell Overture intro", "Superman Theme Song", "Mighty Mouse Theme Song", "hills are alive"]
	public static Melody williamTellIntro;
	public static Melody superman;
	public static Melody mightyMouse;
	public static Melody hillsAreAlive;

	//"William Tell Overture (Theme)","Happy Birthday","Here Comes the Bride","Chopin Nocturne Op. 9 No 2","Someday My Prince Will Come","Chopin Waltz Op. 64 No 2","At Last","Singin' in the Rain","Han Solo and the Princess"] // chopin nocturne, waltz, fantaisie, marions theme, someday, another you, once in life,
	public static Melody williamTellTheme;
	public static Melody happyBday;
	public static Melody chopinNocturneOp9No2;
	public static Melody somedayMyPrince;
	public static Melody singinRain;

	//la
	//"The Hills Are Alive","What A Wonderful World","Kumbaya","Singin' in the Rain"
	public static Melody wonderfulWorld;
	public static Melody kumbaya;

	//ti

	static ExampleMelodies()
	{
		//initialize dictionary
		foreach (var solfegeKey in ScaleTone.SolfegeFlats)
			SolfegeToMelodies [solfegeKey] = new List<Melody> ();

	}

	public static void GenerateMelodies()
	{
		print ("generate melodies");
		string tonic = "C";
		int tempo = 100;
		string name;
		List<string> solfList;
		List<float> beatList;

		//do
		name = "Here Comes the Bride";
		solfList = new List<string>{ "SOLl", "DOh", "DOh", "DOh", "SOLl", "REh", "TIl", "DOh" };
		beatList = new List<float>{ 1f, 2f, 2.66f, 3f, 5f, 6f, 6.66f, 7f };
		hereComes = new Melody(name, tonic, tempo, solfList, beatList);

		name = "Somewhere, Over the Rainbow";
		solfList = new List<string>{ "DOl", "DOh", "TIl", "SOLl", "LAl", "TIl", "DOh" };
		beatList = new List<float>{ 1f, 3f, 5f, 6f, 6.5f, 7f, 8f };
		somewhereOver = new Melody(name, tonic, tempo, solfList, beatList);

		name = "Time to Say Goodbye";
		solfList = new List<string>{ "SOLl", "DOh", "TIl", "REh", "DOh" };
		beatList = new List<float>{ 1f, 3f, 7f, 8f, 9f };
		timeToSay = new Melody(name, tonic, tempo, solfList, beatList);

		name = "Ave Maria";
		solfList = new List<string>{ "DOh", "TIl", "DOh", "MIh", "REh" };
		beatList = new List<float>{ 1f, 3f, 4f, 5f, 7f };
		aveMaria = new Melody(name, tonic, tempo, solfList, beatList);

		name = "Jurassic Park Theme";
		solfList = new List<string> {"DOh","TIl","DOh","DOh","TIl","DOh","DOh","TIl","DOh","REh","REh","FAh","FAh"};
		beatList = new List<float>{ 1f, 1.5f, 2f, 5f, 5.5f, 6f, 9f, 9.5f, 10f, 11.5f, 12f, 13.5f, 14f };
		jurassicPark = new Melody(name, tonic, tempo, solfList, beatList);

		//re
		name = "Someone to Watch Over Me";
		solfList = new List<string>{ "DOl", "REl", "MIl", "SOLl", "LAl", "DOh", "REh", "REh", "DOh", "TIl" };
		beatList = new List<float>{ 1f, 1.5f, 2f, 2.5f, 3f, 3.5f, 4f, 4.5f, 5.5f, 6f };
		someoneWatch = new Melody(name, tonic, tempo, solfList, beatList);

		name = "Have Yourself A Merry Little Christmas";
		solfList = new List<string>{ "DOl", "MIl", "SOLl", "DOh", "SOLl", "FAl", "MIl", "REl", "DOl", "REl" };
		beatList = new List<float>{ 1f, 2f, 3f, 4f, 5f, 5.5f, 6f, 6.5f, 7f, 8f };
		haveYourself = new Melody(name, tonic, tempo, solfList, beatList);

		name = "I Loves You Porgy";
		solfList = new List<string>{ "DOl", "MIl", "SOLl", "TIl", "REh", "DOh", "SOLl", "MIl", "MIl", "SOLl" };
		beatList = new List<float>{ 1.5f, 2f, 2.5f, 3f, 3.5f, 5.5f, 6f, 6.5f, 7f, 7.5f };
		iLoves = new Melody(name, tonic, tempo, solfList, beatList);

		//mi
		name = "Mary Had a Little Lamb";
		solfList = new List<string> {"MIl","REl","DOl","REl","MIl","MIl","MIl","REl","REl","REl","MIl","SOLl","SOLl"};
		beatList = new List<float>{ 1f, 2f, 3f, 4f, 5f, 6f, 7f, 9f, 10f, 11f, 13f, 14f, 15f };
		maryHad = new Melody(name, tonic, tempo, solfList, beatList);

		name = "Raindrops Keep Falling on My Head";
		solfList = new List<string>{ "MIl", "MIl", "MIl", "FAl", "MIl", "REl", "DOl", "MIl" };
		beatList = new List<float>{ 1f, 2f, 2.5f, 3f, 3.5f, 4f, 4.5f, 5f };
		raindropsKeep = new Melody(name, tonic, tempo, solfList, beatList);

		name = "Brahms' Lullaby";
		solfList = new List<string> {"MIl","MIl","SOLl","MIl","MIl","SOLl","MIl","SOLl","DOh","TIl","LAl","LAl","SOLl"};
		beatList = new List<float>{ 1f, 1.5f, 2f, 4f, 4.5f, 5f, 7f, 7.5f, 8f, 9f, 10f, 11f, 12f };
		brahmsLullaby = new Melody(name, tonic, tempo, solfList, beatList);

		name = "A Whole New World";
		solfList = new List<string> {"MIh","REh","FAh","MIh","DOh","SOLl","MIh","REh","FAh","MIh","DOh","MIh","REh"};
		beatList = new List<float>{ 1f, 2f, 2.5f, 3.5f, 4.5f, 5f };
		wholeNewWorld = new Melody(name, tonic, tempo, solfList, beatList);	

		//fa
		name = "Don't Stop Believin'";
		solfList = new List<string>{ "FAl", "MIl", "REl", "FAl", "MIl" };
		beatList = new List<float>{ 1f, 2.5f, 4.5f, 5f, 6.5f };
		dontStop = new Melody(name, tonic, tempo, solfList, beatList);	

		name = "When I Fall in Love";
		solfList = new List<string>{ "SOLl", "DOh", "FAh", "MIh", "DOh" };
		beatList = new List<float>{ 1f, 2f, 3f, 4.5f, 5f };
		whenIFall = new Melody(name, tonic, tempo, solfList, beatList);	

		name = "Happy Birthday (Ending)";
		solfList = new List<string>{ "FAh", "FAh", "MIh", "DOh", "REh", "DOh" };
		beatList = new List<float>{ 1f, 1.5f, 2f, 3f, 4f, 5f };
		happyBdayEnding = new Melody(name, tonic, tempo, solfList, beatList);	

		//sol
		name = "William Tell Overture (Intro)";
		solfList = new List<string>{"SOLl","SOLl","SOLl","SOLl","SOLl","SOLl","SOLl","MIl","DOl","MIl","SOLl","MIl","SOLl","DOh"};
		beatList = new List<float>{1f,2.5f,2.75f,3f,4.5f,4.75f,5f,5.5f,6f,6.5f,7f,7.5f,8f,8.5f};
		williamTellIntro = new Melody(name, tonic, tempo, solfList, beatList);

		name = "Superman Theme Song";
		solfList = new List<string>{ 
			"SOLl","SOLl","DOl","SOLl","SOLl","DOh","SOLl","DOl",
			"SOLl","SOLl","DOl","SOLl","SOLl","MIh","REh","REh"};
		beatList = new List<float>{ 
			1f,2f,2.33f,2.66f,3f,5f,6f,7f,
			9f,10f,10.33f,10.66f,11f,13f,13.66f,14f};
		superman = new Melody(name, tonic, tempo, solfList, beatList);

		name = "Mighty Mouse Theme Song";
		solfList = new List<string>{ "SOLh","MIh","DOh","SOLl","DOh","MIh","SOLh" };
		beatList = new List<float>{ 1f,2f,2.5f,3.5f,4f,4.5f,5f };
		mightyMouse = new Melody(name, tonic, tempo, solfList, beatList);

		name = "The Hills Are Alive";
		solfList = new List<string>{ "SOLh","LAh","SOLh","FAh","MIh","REh","DOh","TIl","LAl","TIl","TIl" };
		beatList = new List<float>{ 1f,2f,3f,3.5f,4f,7f,7.5f,8f,9f,10f,12f };
		hillsAreAlive = new Melody(name, tonic, tempo, solfList, beatList);

		//SOL FROM BELOW
		name = "William Tell Overture (Theme)";
		tempo = 200;
		solfList = new List<string>{ 
			"SOLl","SOLl","SOLl","SOLl","SOLl","SOLl","SOLl","SOLl","DOh","REh","MIh",
			"SOLl","SOLl","SOLl","SOLl","SOLl","DOh","MIh","REh","TIl","SOLl"};
		beatList = new List<float>{ 
			1f,1.5f,2f,3f,3.5f,4f,5f,5.5f,6f,7f,8f,
			9f,9.5f,10f,11f,11.5f,12f,13f,14f,15f,16f };
		williamTellTheme = new Melody(name, tonic, tempo, solfList, beatList);

		name = "Happy Birthday";
		tempo = 100;
		solfList = new List<string>{ 
			"SOLl","SOLl","LAl","SOLl","DOh","TIl",
			"SOLl","SOLl","LAl","SOLl","REh","DOh",
			"SOLl","SOLl","SOLh","MIh","DOh","TIl","LAl",
			"FAh","FAh","MIh","DOh","REh","DOh"
			};
		beatList = new List<float>{ 
			1f,1.5f,2f,3f,4f,5f,
			7f,7.5f,8f,9f,10f,11f,
			13f,13.5f,14f,15f,16f,17f,18f,
			20f,20.5f,21f,22f,23f,24f
			};
		happyBday = new Melody(name, tonic, tempo, solfList, beatList);

		name = "Chopin Nocturne Opus 9 No 2";
		solfList = new List<string>{"SOLl","MIh","REh","MIh","REh","DOh"};
		beatList = new List<float>{ 1f,2f,6f,7f,8f,11f};
		chopinNocturneOp9No2 = new Melody(name, tonic, tempo, solfList, beatList);

		name = "Someday My Prince Will Come";
		solfList = new List<string>{"SOLl","DOh","LEl","TIl","LAl","LAl"};
		beatList = new List<float>{ 1f,4f,6f,7f,9f,10f};
		somedayMyPrince = new Melody(name, tonic, tempo, solfList, beatList);

		name = "Singin' in the Rain";
		solfList = new List<string>{"SOLl","SOLh","MIh","REh","DOh","LAl",
			"SOLl","DOh","REh","MIh","FAh","SOLh"};
		beatList = new List<float>{ 1f,2f,3.5f,4,5f,5.5f};
		singinRain = new Melody(name, tonic, tempo, solfList, beatList);

		//la
		name = "What a Wonderful World";
		solfList = new List<string>{"SOLl","LAl","DOh","DOh","SOLh","LAh","LAh","LAh","SOLh"};
		beatList = new List<float>{ 1f,1.5f,2f,3.5f,4f,6.5f,7f,7.5f,8f};
		wonderfulWorld = new Melody(name, tonic, tempo, solfList, beatList);

		name = "Kumbaya";
		solfList = new List<string>{"DOh","MIh","SOLh","SOLh","SOLh","LAh","LAh","SOLh"};
		beatList = new List<float>{ 1f,1.5f,2f,2.75f,3f,5f,5.5f,6f};
		kumbaya = new Melody(name, tonic, tempo, solfList, beatList);

		//todo: chopin waltz, han solo and the princess

	}

	public static void SetExampleMelodies(string solfege)
	{
		string tonic = "C";
		int tempo = 100;
		string name;
		List<string> solfList;
		List<float> beatList;
		
		if (SolfegeToMelodies [solfege].Count == 0) 
		{
			//do or ti
			if (solfege == ScaleTone.SolfegeFlats [0] || solfege == ScaleTone.SolfegeFlats [11]) {	

				SolfegeToMelodies [solfege] = new List<Melody>{hereComes, somewhereOver, timeToSay, aveMaria, jurassicPark};
		
			}
			//re
			else if (solfege == ScaleTone.SolfegeFlats [2]) {

				SolfegeToMelodies [solfege] = new List<Melody>{someoneWatch,haveYourself,iLoves};

			}
			//mi
			else if (solfege == ScaleTone.SolfegeFlats [4]) {	
				SolfegeToMelodies [solfege] = new List<Melody>{maryHad,raindropsKeep,brahmsLullaby,wholeNewWorld};

			}
			//fa
			else if (solfege == ScaleTone.SolfegeFlats [5]) {	

				SolfegeToMelodies [solfege] = new List<Melody>{dontStop,whenIFall,happyBdayEnding};

			}
			//sol
			else if (solfege == ScaleTone.SolfegeFlats [7]) 
			{	
				//["William Tell Overture", "Superman Theme Song", "Mighty Mouse Theme Song", "hills are alive"]
				//"William Tell Overture (Theme)","Happy Birthday","Here Comes the Bride","Chopin Nocturne Op. 9 No 2","Someday My Prince Will Come","Chopin Waltz Op. 64 No 2","At Last","Singin' in the Rain","Han Solo and the Princess"]

				SolfegeToMelodies [solfege] = new List<Melody>{williamTellIntro,superman,mightyMouse,hillsAreAlive,
					williamTellTheme,happyBday,hereComes,chopinNocturneOp9No2,somedayMyPrince,singinRain};
			}

		}
	}

	private static void AddMelody(string currentSolfege,string name, string tonic, int tempo, List<string> solfList, List<float> beatList)
	{
		SolfegeToMelodies[currentSolfege].Add(new Melody (name, tonic, tempo, solfList, beatList));
	}



	/*
	 * 
	 * else if tutorialSection == "sol"
        {
            tunesLimited = ["William Tell Overture", "Superman Theme Song", "Mighty Mouse Theme Song", "hills are alive"]
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
            tunesLimited = ["Darth Vader Theme","Batman Theme","Sleepwalk (Major)","Revolutionary Etude"]//,"Autumn Leaves","just friends"]
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
