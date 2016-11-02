using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Answer : MonoBehaviour {

	private bool _isCorrect;
	private Melody _quesMelody;
	private Melody _ansMelody;

	public Answer(Melody q, Melody a)
	{
		QuesMelody = q;
		AnsMelody = a;

		var isCorrect = true;

		for (var i = 0; i < QuesMelody.Length; i++)
		{
			if (q.Notes[i].NameFlat != a.Notes[i].NameFlat)
			{
				isCorrect = false;
				break;
			}

		}

		IsCorrect = isCorrect;

	}

	public bool IsCorrect
	{
		get {return _isCorrect;}
		set{ _isCorrect = value; }
	}

	public Melody QuesMelody
	{
		get{ return _quesMelody; }
		set{ _quesMelody = value; }
	}

	public Melody AnsMelody
	{
		get{ return _ansMelody; }
		set{ _ansMelody = value; }
	}
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
