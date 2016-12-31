using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System;

public class LobbyMediator : MonoBehaviour {

	public Image ProfilePic;
	public Text Username;
	public Button EarTrainingGame;
	public GameObject LobbyPanel;

	// Use this for initialization
	void Start () {


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

}
