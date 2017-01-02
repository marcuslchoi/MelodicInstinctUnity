using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class UserData : MonoBehaviour {

	public static string FirstName {
		get;
		set;
	}

	public static string LastName {
		get;
		set;
	}

	public static Sprite ProfilePicSprite {
		get;
		set;
	}

	public static string FBAccessToken { get; set; }

}
