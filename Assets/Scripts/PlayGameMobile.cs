using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayGameMobile : MonoBehaviour
{
    public GameObject[] players = new GameObject[2];
    private List<Player> finalPlayers = new List<Player>();
    public GameObject managerPrefab;
    // Use this for initialization
    void Start()
    {

    }

    public void StartGame()
    {
        GameObject manager = Instantiate(managerPrefab);
        DontDestroyOnLoad(manager);
        foreach (GameObject player in players)
        {
            Player playerObj = player.GetComponent<PlayerMenuScriptMobile>().player;
            
            finalPlayers.Add(playerObj);
            print(playerObj.name);
        }

        manager.GetComponent<GameManagerScriptMobile>().players = finalPlayers;
        SceneManager.LoadScene("PlaySceneMobile");
    }

    // Update is called once per frame
    void Update()
    {

    }
}
