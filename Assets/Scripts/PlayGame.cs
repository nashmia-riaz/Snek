using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class PlayGame : MonoBehaviour {
    public GameObject[] players = new GameObject[4];
    public GameObject managerPrefab;
    List<Player> finalPlayers;
    public GameObject playerLimit;
    // Use this for initialization
    void Start () {

        finalPlayers = new List<Player>();
    }
	
    public void StartGame()
    {

        foreach (GameObject player in players)
        {
            Player playerObj = player.GetComponent<PlayerMenuScript>().player;
            if (playerObj.wantsToPlay)
            {
                finalPlayers.Add(playerObj);
                print(playerObj.name);
            }
        }
        if (finalPlayers.ToArray().Length > 1)
        {
            GameObject manager = Instantiate(managerPrefab);
            DontDestroyOnLoad(manager);
            manager.GetComponent<GameManagerScript>().players = finalPlayers;
            SceneManager.LoadScene("PlayScene");
        }
        else
        {
            playerLimit.SetActive(true);
            finalPlayers.Clear();
        }
    }

	// Update is called once per frame
	void Update () {
		
	}
}
