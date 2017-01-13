using UnityEngine;
using System.Collections;

public class CatScript : MonoBehaviour {

	private float _speed = 100f;
	private float _yRotation = .30f;

	public GameObject tearPF;

	void Start()
	{
		StartCoroutine (CreateTears ());
	}

	IEnumerator CreateTears(){

		GameObject tear;

		int counter=0;
		float xOffset = 20f;
		float yOffset = 10f;
		float zOffset = 40f;

		while (true) 
		{
			counter++;
			if (counter % 2 == 1)
				xOffset = -xOffset;
			
			tear = Instantiate (tearPF, new Vector3(transform.position.x-xOffset,transform.position.y-yOffset,transform.position.z-zOffset), Quaternion.identity, transform) as GameObject;
			yield return new WaitForSeconds (.5f);
			StartCoroutine(WaitAndDestroy(tear));
		}
	}

	IEnumerator WaitAndDestroy(GameObject currentTear)
	{
		yield return new WaitForSeconds (2f);

		Destroy (currentTear);
	}
		
	void Update () {

		if (Mathf.Abs(transform.localRotation.y) > _yRotation)
			_speed = -_speed;

//		transform.Rotate(Vector3.up, _speed * Time.deltaTime);
	}
}
