using UnityEngine;
using System.Collections;

public class Dropdown : MonoBehaviour {

	public RectTransform Container;
	bool isOpen = false;
	float dropSpeed = 12f;
	float open = 1f;
	float closed = 0f;

	public void OnClick()
	{
		isOpen = !isOpen;
	}
	// Update is called once per frame
	void Update () 
	{
			Vector3 scale = Container.localScale;
			scale.y = Mathf.Lerp (scale.y, isOpen? open:closed, Time.deltaTime * dropSpeed);
			Container.localScale = scale;

	}
}
