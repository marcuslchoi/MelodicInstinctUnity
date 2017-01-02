using UnityEngine;
using System.Collections;
using Facebook.Unity;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class FBScript : MonoBehaviour {

	public GameObject DialogLoggedIn;
	public GameObject DialogLoggedOut;
	public Image ProfilePic;

	private List<string> _permissions = new List<string>();

	// Use this for initialization
	void Awake()
	{
		FB.Init (SetInit, OnHideUnity);
	}

	void SetInit()
	{
		if (FB.IsLoggedIn)
			Debug.Log ("fb is logged in");
		else
			Debug.Log ("fb is not logged in");

		DealWithFBMenus (FB.IsLoggedIn);
	
	}
	void OnHideUnity(bool isGameShown)
	{
		if (!isGameShown)
			Time.timeScale = 0;	//paused
		else
			Time.timeScale = 1;
	}

	public void FBLogin()
	{
		_permissions.Add ("public_profile");
		FB.LogInWithReadPermissions (_permissions, AuthCallBack);
	
	}
	void AuthCallBack(IResult result)
	{
		//TODO: POP UP ON ERROR

		if (result.Error != null)
			print ("error " + result.Error);
		else {

			if (FB.IsLoggedIn) {
				Debug.Log ("fb is logged in");
				UserData.FBAccessToken = AccessToken.CurrentAccessToken.TokenString;

			}
			else
				Debug.Log ("fb is not logged in");
		
			DealWithFBMenus (FB.IsLoggedIn);
			LoadGameScene ();
		}
		
	}

	void DealWithFBMenus(bool isLoggedIn)
	{
//		DialogLoggedIn.SetActive (isLoggedIn);
//		DialogLoggedOut.SetActive (!isLoggedIn);

		if (isLoggedIn) 
		{
			FB.API ("/me?fields=first_name,last_name", HttpMethod.GET, DisplayUsername);
			FB.API ("/me/picture?type=square&height=128&width=128", HttpMethod.GET, DisplayProfilePic);
		}

	}

	void LoadGameScene()
	{
		SceneManager.LoadScene ("Game");
	}

	void DisplayUsername(IResult result)
	{
		if (result.Error != null)
			print (result.Error);
		else {

			UserData.FirstName = result.ResultDictionary ["first_name"].ToString();
			UserData.LastName = result.ResultDictionary ["last_name"].ToString();

			print (UserData.FirstName);
			print (UserData.LastName);
		}
	}
	void DisplayProfilePic(IGraphResult result)
	{
		if (result.Texture != null) {

			UserData.ProfilePicSprite=Sprite.Create (result.Texture, new Rect (0, 0, 128, 128), new Vector2 ());
//			ProfilePic.sprite = UserData.ProfilePicSprite;

		} else {
		}


	}
}
