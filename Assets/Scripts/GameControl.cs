using UnityEngine;
using System.Collections;

public class GameControl : MonoBehaviour {
	public void ResetPressed() {
		Application.LoadLevel (Application.loadedLevelName);
	}
}
