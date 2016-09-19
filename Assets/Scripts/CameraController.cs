using UnityEngine;
using System.Collections;

public class CameraController : MonoBehaviour {

	public GameObject player1;
	public GameObject player2;
	private Vector3 offset;

	// Use this for initialization
	void Start () {
		offset = transform.position - ((player1.transform.position + player2.transform.position) / 2f);
	}
	
	// Update is called once per frame
	void LateUpdate () {
		transform.position = ((player1.transform.position + player2.transform.position) / 2f) + offset;
	}
}
