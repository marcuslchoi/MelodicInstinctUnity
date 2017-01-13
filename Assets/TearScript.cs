using UnityEngine;
using System.Collections;

public class TearScript : MonoBehaviour {

	public Rigidbody rb;

	void Start()
	{
		rb.AddForce (Vector3.down* 5000f);
	}
}
