using UnityEngine;
using System.Collections;

public class CylinderAnimate : MonoBehaviour {


	private float _speed = 100f;

	void Update ()
	{
		transform.Rotate(Vector3.up, _speed * Time.deltaTime);
	}
}
