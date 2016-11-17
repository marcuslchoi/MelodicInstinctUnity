using UnityEngine;
using System.Collections;

public class HelicopterHover : MonoBehaviour {

	float speed;

	void Update () {

		if ((Mathf.Floor (Time.time) % 2 == 1))
			speed = 20f;
		else
			speed = -20f;
	
		transform.Translate (Vector3.up * Time.deltaTime * speed);
	}
}
