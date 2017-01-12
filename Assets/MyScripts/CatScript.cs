using UnityEngine;
using System.Collections;

public class CatScript : MonoBehaviour {

	private float _speed = 100f;
	private float _yRotation = .30f;

	//rotate y between yRot and -yRot
	void Update () {

		if (Mathf.Abs(transform.localRotation.y) > _yRotation)
			_speed = -_speed;

		transform.Rotate(Vector3.up, _speed * Time.deltaTime);
	}
}
