using UnityEngine;
using System.Collections;

public class UfoScript : MonoBehaviour {

	private float _xInitialPos;
	private float _yInitialPos;
	private float _zInitialPos;
	private float _speed = 200f;

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

	int x=0;
	private float _speedRotate=100f;
	void Update () {

		//TODO: MAKE SURE UFO DOESN'T BLOCK CAMERA!!!

		x++;
		if (x % 20 == 0) 
		{
			_speedRotate = -_speedRotate;
		}
		transform.Rotate (Vector3.up, _speedRotate * Time.deltaTime);

		if(transform.localPosition.z>0)
			transform.Translate(new Vector3(-1f,-1f,1.5f) * _speed * Time.deltaTime);
	}
}
