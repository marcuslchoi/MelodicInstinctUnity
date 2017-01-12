using UnityEngine;
using System.Collections;

public class StarScript : MonoBehaviour {

	private float _xScale;
	private float _yScale;
	private float _zScale;
	private float _timeEnabled;
	private float _speed = 200f;

	void Awake()
	{
		_xScale = transform.localScale.x;
		_yScale = transform.localScale.y;
		_zScale = transform.localScale.z;
	}

	void OnEnable()
	{
		_timeEnabled = Time.time;
		ResetPosition ();
	}

	void ResetPosition()
	{
		transform.localScale = new Vector3 (_xScale, _yScale, _zScale);
	}

	void Update () {
	
		int secondsEnabled = (int)Time.time-(int)_timeEnabled;

		if(secondsEnabled % 2 == 0)
			transform.localScale += _speed*Time.deltaTime * new Vector3 (1f, 1f, 1f);

		else
			transform.localScale -= _speed*Time.deltaTime * new Vector3 (1f, 1f, 1f);
	}
}
