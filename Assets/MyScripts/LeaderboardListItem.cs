using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class LeaderboardListItem : MonoBehaviour 
{
	public Text RankText;
	public Text UsernameText;
	public Text ScaleText;
	public Text ScoreText;

	public Image BackImage;

	public void Highlight ()
	{
		var MyHighlight = Color.blue;//Constants.BLUE;

		BackImage.color = MyHighlight;
	}

	public void SetData (Highscore entry, int rank)
	{
		//RankText.text = (entry.Position+1).ToString("N0"); //Add 1 because top player is "rank 0", we want to display that as 1
		RankText.text=rank.ToString();
		UsernameText.text = entry.username;
		ScaleText.text = entry.scale;
		ScoreText.text = entry.score.ToString();

		if (true) //(entry.Position % 2 == 0)
		{
			BackImage.color = new Color (.505f,.505f,.505f, .255f);

		}
		else
		{
			BackImage.color = new Color (0f,0f,0f, .3f);

		}
	}

}
