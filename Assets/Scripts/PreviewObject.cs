using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PreviewObject : MonoBehaviour {

    private float angle;

	// Use this for initialization
	void Start () {
        angle = 5;
	}
	
	// Update is called once per frame
	void Update () {
        //angle += Time.deltaTime;
        transform.RotateAround(transform.position, new Vector3(0, 1, 0), angle);
	}
}
