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

	// Use this for initialization
	void Start () 
	{
		Text.text = string.Format ("{0}:00", Minutes);

	}

	public void StartTimer()
	{
		StartCoroutine (UpdateTimerText ());
	}

	IEnumerator UpdateTimerText()
	{
		TimeLeft = Minutes * Constants.SECONDS_PER_MIN;

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


//	float timeLeft = 60f*60f*4f; //in seconds
//	float hours;
//	float minutes;
//	float seconds;
//	string betweenHoursMinutes;
//	string betweenMinutesSeconds;
//	bool isTimerRunning = true;
//	bool _setRedeemText = false;
//	void Update()
//	{
//		if (_setRedeemText)
//		{
//			if (timeLeft > 0)
//			{
//				timeLeft -= Time.deltaTime;
//				hours = Mathf.Floor(timeLeft / 3600);
//				minutes = Mathf.Floor(timeLeft / 60) - hours * 60;
//				seconds = Mathf.Floor(timeLeft % 60);
//
//				/*
//                if(seconds > 59) 
//                    seconds = 59;
//
//                if (hours < 0)
//                    hours = 0;
//                */
//
//				if (minutes < 0)
//				{
//					if (hours == 0)
//					{
//						//stop = true;
//						minutes = 0;
//						seconds = 0;
//
//					}
//					else {
//						minutes = 59;
//					}
//				}
//				if (minutes < 10)
//				{
//					betweenHoursMinutes = ":0";
//				}
//				else {
//					betweenHoursMinutes = ":";
//				}
//				if (seconds < 10)
//				{
//					betweenMinutesSeconds = ":0";
//				}
//				else {
//					betweenMinutesSeconds = ":";
//				}
//
//				View.Timer.text = hours + betweenHoursMinutes + minutes + betweenMinutesSeconds + seconds;// Mathf.Round(timeLeft).ToString();
//
//			}
//			else {
//
//				isTimerRunning = false;
//				View.Redeem.interactable = true;
//				View.Timer.text = "$" + redeemAmount;
//			}
//		}
//	}

}
