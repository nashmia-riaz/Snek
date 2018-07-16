using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonHandler : MonoBehaviour {
    public GameObject NextMenu;
    public GameObject CurrentMenu;
    public GameObject animatedObject;

    public void ShowNextMenu() {
        NextMenu.SetActive(true);
        CurrentMenu.SetActive(false);
        animatedObject.GetComponent<Animator>().SetTrigger("ExitMenu");
    }

    public void ShowPreviousMenu()
    {
        NextMenu.SetActive(true);
        CurrentMenu.SetActive(false);
        animatedObject.GetComponent<Animator>().SetTrigger("EnterMenu");
    }
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
