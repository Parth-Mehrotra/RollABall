using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class PlayerController : MonoBehaviour {

	public float speed;
	public float jumpForce;
	public float jumpCooldown;
	public Text winText;
	public Text countText;
	public Text notifications;
	private Rigidbody rb;

	public int count;
	public int score;
	private bool isJumping;
	private float jumpTimer;

	void Start() {
		rb = GetComponent<Rigidbody>();
		count = 0;
		SetCountText();
		winText.text = "";
		notifications.text = "";
		isJumping = false;
		jumpTimer = 0;
	}

	void FixedUpdate() {
		float moveHorizontal = 0;;
		float moveVertical = 0;

		if (Input.GetKey(KeyCode.LeftArrow)) {
			moveHorizontal = -1;
		} else if (Input.GetKey(KeyCode.RightArrow)) {
			moveHorizontal = 1;
		} else if (Input.GetKey(KeyCode.UpArrow)) {
			moveVertical = 1;
		} else if (Input.GetKey(KeyCode.DownArrow)) {
			moveVertical = -1;
		} else {
			moveVertical = 0;
			moveHorizontal = 0;
		} 
 
		Vector3 movement = new Vector3(moveHorizontal, 0, moveVertical);

		jumpTimer += Time.deltaTime;
		rb.AddForce(movement * speed);
		if (jumpTimer > jumpCooldown) {
			isJumping = false;
		}
		if (Input.GetKeyDown(KeyCode.Space)) {
			if (!isJumping) {
				jumpTimer = 0;
				isJumping = true;
				rb.AddForce(0, jumpForce, 0);
			} else {
				Notify("Jump is on Cooldown");
			}
		}
		ClearNotificationArea();
		if (count + GameObject.FindWithTag("Player 2").GetComponent<Player2>().count >= 14) {
			if (GameObject.FindWithTag("Player 2").GetComponent<PlayerController>().score < score) {
				ShowWin();
			}
		}
	}

	void OnTriggerEnter(Collider other) {
		if (other.gameObject.CompareTag("Pick Up")) {
			other.gameObject.SetActive(false);
			score++;
			count++;
		}
		if (other.gameObject.CompareTag("Wall")) {
			score--;
		}
		SetCountText();
	}

	void ClearNotificationArea() {
		Notify("");
	}

	void Notify(string s) {
		notifications.text = s;
	}

	void SetCountText() {
		countText.text = "Score: " + score.ToString();
	}

	void ShowWin() {
		winText.text = "Player 1 Won!";
	}
}
