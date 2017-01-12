using UnityEngine;
using System.Collections;
using Facebook.Unity;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

using System;
using System.Net;
using RestSharp;
using Pathfinding.Serialization.JsonFx;
using Unity3dAzure.AppServices;
using Tacticsoft;

public class FBScript : MonoBehaviour {

	public GameObject DialogLoggedIn;
	public GameObject DialogLoggedOut;
	public Image ProfilePic;

	private List<string> _permissions = new List<string>();

	private string _appUrl = "http://melodicinstinct.azurewebsites.net";
	private MobileServiceClient _client;
	private MobileServiceTable<User> _usersTable;
	private User _user;	//this is me
	private Message _message; //used for login

	void Awake()
	{
		FB.Init (SetInit, OnHideUnity);

		_client = MobileServiceClient.Create(_appUrl);
		_usersTable = _client.GetTable<User> ("Users");

		Constants.Client = _client;
		Constants.UsersTable = _usersTable;
		Constants.HighScoresTable = _client.GetTable<Highscore>("Highscores");
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
				//UserData.FBAccessToken = Facebook.Unity.AccessToken.CurrentAccessToken.TokenString;

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
			FB.API ("/me?fields=first_name,last_name", HttpMethod.GET, SaveUsername);
			FB.API ("/me/picture?type=square&height=128&width=128", HttpMethod.GET, SaveProfilePic);
		}

	}

	void LoadGameScene()
	{
		SceneManager.LoadScene ("Game");
	}

	void SaveUsername(IResult result)
	{
		if (result.Error != null)
			print (result.Error);
		else {

			UserData.FirstName = result.ResultDictionary ["first_name"].ToString();
			UserData.LastName = result.ResultDictionary ["last_name"].ToString();

			FBLoginToAzure ();

		}
	}
	void SaveProfilePic(IGraphResult result)
	{
		if (result.Texture != null) {

			UserData.ProfilePicSprite=Sprite.Create (result.Texture, new Rect (0, 0, 128, 128), new Vector2 ());
//			ProfilePic.sprite = UserData.ProfilePicSprite;

		} else {
		}
			
	}

	#region Azure
	public void FBLoginToAzure()
	{
		_client.Login(MobileServiceAuthenticationProvider.Facebook, Facebook.Unity.AccessToken.CurrentAccessToken.TokenString, OnLoginCompleted);
	}

	private void OnLoginCompleted(IRestResponse<MobileServiceUser> response)
	{
//		Debug.Log("Status: " + response.StatusCode + " Uri:" + response.ResponseUri );
//		Debug.Log("OnLoginCompleted: " + response.Content );

		if ( response.StatusCode == HttpStatusCode.OK)
		{
			MobileServiceUser mobileServiceUser = response.Data;
			_client.User = mobileServiceUser;
//			Debug.Log("Authorized UserId: " + _client.User.user.userId );

			_user = new User {
				UserId = _client.User.user.userId,
				FirstName = UserData.FirstName,
				LastName = UserData.LastName
					//FriendIds=new List<string>{"id1","id2"}
			};

			//query the users table to see if user is already in DB. If not, calls insertnewuser
			GetUserWithUserId ();
		}
		else
		{
			Debug.Log("Authorization Error: " + response.StatusCode);
			_message = Message.Create ("Login failed", "Error");
		}
	}

	private void GetUserWithUserId()
	{

		string filter = string.Format("UserId eq '{0}'", _user.UserId);
		CustomQuery query = new CustomQuery(filter);
		QueryWithUserId(query);

	}

	private void QueryWithUserId(CustomQuery query)
	{
		_usersTable.Query<User> (query, OnUserIdReadCompleted);

	}

	private void OnUserIdReadCompleted(IRestResponse<List<User>> response)
	{
		if (response.StatusCode == HttpStatusCode.OK)
		{
//			Debug.Log("OnUserIdReadCompleted data: " + response.ResponseUri +" data: "+ response.Content);
			List<User> items = response.Data;
//			Debug.Log("Read items count: " + items.Count);
			//			_isPaginated = false; // default query has max. of 50 records and is not paginated so disable infinite scroll 

			if (items.Count >= 1) 
			{
				print ("user is already in Database");

			} else {
				print ("Inserting new user in Database");
				InsertNewUser ();
			}
		}
		else
		{
			Debug.Log("Read Error Status:" + response.StatusCode + " Uri: "+response.ResponseUri );
		}
	}

	public void InsertNewUser()
	{
		if (_user != null) {
			_usersTable.Insert<User> (_user, OnInsertUserCompleted);
		}
	}

	private void OnInsertUserCompleted(IRestResponse<User> response)
	{
		if (response.StatusCode == HttpStatusCode.Created)
		{
			Debug.Log( "OnInsertUserCompleted: " + response.Data );
			User item = response.Data;
		}
		else
		{
			Debug.Log("Insert User Error Status:" + response.StatusCode + " Uri: "+response.ResponseUri );
		}
	}

	#endregion
}
