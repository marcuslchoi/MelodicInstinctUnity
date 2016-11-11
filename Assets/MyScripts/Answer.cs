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
			if (a.Notes[i].NameFlat != q.Notes[i].NameFlat)
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
		private set{ _isCorrect = value; }
	}

	public Melody QuesMelody
	{
		get{ return _quesMelody; }
		private set{ _quesMelody = value; }
	}

	public Melody AnsMelody
	{
		get{ return _ansMelody; }
		private set{ _ansMelody = value; }
	}
}
