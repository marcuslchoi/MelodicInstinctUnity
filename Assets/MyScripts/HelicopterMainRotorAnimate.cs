using UnityEngine;
using System.Collections;

public class HelicopterMainRotorAnimate : MonoBehaviour {

	// Use this for initialization
	void Start () {

	}

	//TODO: use OnEnable

	float speed = 10000f;

	void Update ()
	{
		transform.Rotate(Vector3.forward, speed * Time.deltaTime);
	}
}
