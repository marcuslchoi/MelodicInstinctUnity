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

		while(TimeLeft > 0)
		{			
			TimeLeft -= 1;
			Text.text = TimeLeft.ToString();
			yield return new WaitForSeconds(1);
		}
	}

}
