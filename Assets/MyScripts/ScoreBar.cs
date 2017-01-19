using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ScoreBar : MonoBehaviour {

	public Text ScoreText;
	public Text DateText;

	public void SetData (Highscore highscore)
	{
		ScoreText.text = highscore.score.ToString();
		DateText.text = "date";
	}
}
