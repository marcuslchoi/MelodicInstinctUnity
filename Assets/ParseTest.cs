using UnityEngine;
using System.Collections;
using Parse;

public class ParseTest : MonoBehaviour {

	// Use this for initialization
	void Start () {
		ParseObject testObject = new ParseObject("TestObject1");
		testObject["foo1"] = "bar1";
		//testObject.SaveAsync();
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
