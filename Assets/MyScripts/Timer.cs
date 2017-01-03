using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Timer : MonoBehaviour {

	public Text Text;

	public int Minutes 
	{
		get;
		set;
	}

	public int TimeLeft 
	{
		get;
		private set;
	}

	void Start () 
	{
		//Text.text = string.Format ("{0}:00", Minutes);
		Reset();
	}

	public void StartTimer()
	{
		StartCoroutine (UpdateTimerText ());
	}

	public void Reset()
	{
		StopAllCoroutines();
		TimeLeft = Minutes * Constants.SECONDS_PER_MIN;
		Text.text = string.Format ("{0}:00", Minutes);
	
	}

	IEnumerator UpdateTimerText()
	{
		TimeLeft = Minutes * Constants.SECONDS_PER_MIN;

		//TODO: REMOVE THIS AFTER TESTING!!
		//TimeLeft = 10;

		int oneSecond = 1;
		int timesUp = 0;

		int secondsDisplay;
		int minutesDisplay;

		string betweenMinutesSeconds;

		while(TimeLeft > timesUp)
		{	
			yield return new WaitForSeconds(oneSecond);
			TimeLeft -= oneSecond;
			minutesDisplay = TimeLeft / Constants.SECONDS_PER_MIN;
			secondsDisplay = TimeLeft % Constants.SECONDS_PER_MIN;

			if (secondsDisplay < 10)
			{
				betweenMinutesSeconds = ":0";
			}
			else 
			{
				betweenMinutesSeconds = ":";
			}

			Text.text = minutesDisplay + betweenMinutesSeconds + secondsDisplay; //TimeLeft.ToString();

		}
	}

}
