using UnityEngine;
using System.Collections;

public class SpinningTopScript : MonoBehaviour {

	private float _speedRotate = 200f;
	private float _x = 7f;
	private float _y = 100f;
	private float _z = 0f;

	// Update is called once per frame
	void Update () {
	
		transform.Rotate (new Vector3(_x,_y,_z), _speedRotate * Time.deltaTime);
	}
}
