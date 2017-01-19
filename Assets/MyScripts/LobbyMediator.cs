using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System;
using Facebook.Unity;

using System.Net;
using RestSharp;
using Pathfinding.Serialization.JsonFx;
using Unity3dAzure.AppServices;
using Tacticsoft;
using System.Collections.Generic;

public class LobbyMediator : MonoBehaviour {

	public Image ProfilePic;
	public Text Username;
	public Button EarTrainingGame;
	public GameObject LobbyPanel;

	// Use this for initialization
	void Start () {

//		if(FB.IsLoggedIn)
//			GetMyHighscores ();
	}
	
	// Update is called once per frame
	void Update () {

		if(UserData.ProfilePicSprite!=null)
			ProfilePic.sprite = UserData.ProfilePicSprite;

		if (!String.IsNullOrEmpty (UserData.FirstName))
			Username.text = UserData.FirstName + " "+ UserData.LastName.Substring (0, 1) + ".";
	}

	public void EarTrainingGameOnClick()
	{
		LobbyPanel.SetActive (false);
	
	}

	#region Azure

	public void GetMyHighscores()
	{
		
		string filter = string.Format("userId eq '{0}'", UserData.UserId);
		string orderBy = "updatedAt asc";
		CustomQuery query = new CustomQuery (filter,orderBy);

		Constants.HighScoresTable.Query<Highscore>(query, OnReadMyScoresCompleted);
	}

	private void OnReadMyScoresCompleted(IRestResponse<List<Highscore>> response)
	{
		if (response.StatusCode == HttpStatusCode.OK)
		{
			Debug.Log("OnReadMyScoresCompleted data: " + response.ResponseUri +" data: "+ response.Content);
			List<Highscore> items = response.Data;
			Debug.Log("user id: " +UserData.UserId+ "MyScores items count: " + items.Count);

			var myScores = items;

			foreach (var highscore in myScores)
				print ("MY SCORE! "+highscore.updatedAt+" "+highscore.score);
			
			//HasNewData = true;
			//DisplayScores ();
		}
		else
		{
			Debug.Log("Read My Scores Error Status:" + response.StatusCode + " Uri: "+response.ResponseUri );
		}
	}



	#endregion

}
