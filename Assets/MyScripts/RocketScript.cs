using UnityEngine;
using System.Collections;

public class RocketScript : MonoBehaviour {

	private float _xInitialPos;
	private float _yInitialPos;
	private float _zInitialPos;
	private float _speed = 50f;

	// Use this for initialization
	void Awake () {

		_xInitialPos = transform.localPosition.x;
		_yInitialPos = transform.localPosition.y;
		_zInitialPos = transform.localPosition.z;

	}


	void OnEnable()
	{
		ResetPosition ();
	}

	void ResetPosition()
	{
		transform.localPosition = new Vector3 (_xInitialPos,_yInitialPos,_zInitialPos);
	}

	void Update () {
	
		transform.Translate(Vector3.up * _speed * Time.deltaTime);
	}
}
