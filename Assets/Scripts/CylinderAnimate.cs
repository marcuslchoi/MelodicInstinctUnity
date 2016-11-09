using UnityEngine;
using System.Collections;

public class CylinderAnimate : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}

	//TODO: use OnEnable

	float speed = 1000f;

	void Update ()
	{
		transform.Rotate(Vector3.up, speed * Time.deltaTime);
	}
}
