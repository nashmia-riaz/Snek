using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerMenuScript : MonoBehaviour {
    public bool isSlotFilled;
    public GameObject slotFilledImage;
    public GameObject slotUnfilledImage;
    public Player player;
    public Text defaultName;
    public string playerColor;

    public string[] keys = new string[4];

	// Use this for initialization
	void Start () {
        isSlotFilled = false;
        player = new Player();
        player.name = defaultName.text.ToString();
        player.keys = keys;
        player.color = playerColor;
    }

    public void FillOrUnfillSlot()
    {
        isSlotFilled = !isSlotFilled;

        if (!isSlotFilled)
        {
            UnfillSlot();
        }
        else
        {
            FillSlot();
        }
    }
    
    void UnfillSlot()
    {
        slotUnfilledImage.SetActive(true);
        slotFilledImage.SetActive(false);

        player.wantsToPlay = false;
    }

    void FillSlot()
    {
        slotFilledImage.SetActive(true);
        slotUnfilledImage.SetActive(false);

        player.wantsToPlay = true;
    }
	
    public void SetName(string newName)
    {
        if(newName != "")
            player.name = newName;
    }

	// Update is called once per frame
	void Update () {	
	}
}

public class Player
{
    public string name;
    public bool wantsToPlay;
    public bool isDead;
    public string color;

    public string[] keys = new string[4];

    public Player()
    {
        wantsToPlay = false;
        isDead = false;
    }
}