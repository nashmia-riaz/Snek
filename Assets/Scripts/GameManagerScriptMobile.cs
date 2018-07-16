using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameManagerScriptMobile : MonoBehaviour
{
    public List<Player> players;
    public GameObject[] spawnPoints;
    public GameObject[] playerObjects = new GameObject[2];
    public GameObject playerPrefab;

    private int totalPlayers;

    private int previousDeadPlayers;
    private int deadPlayers;


    private float startTimer;
    private float endTimer;
    private bool hasSceneLoaded;
    private Text timer;
    private bool hasGameStarted;
    private string winner = "";

    // Use this for initialization
    void Start()
    {
        startTimer = 3.0f;
        endTimer = 3.0f;
        hasSceneLoaded = false;
        deadPlayers = 0;
        previousDeadPlayers = 0;
        hasGameStarted = false;
    }

    void OnLevelFinishedLoading(Scene scene, LoadSceneMode mode)
    {
        print("SCENE WAS LOADED :: " + scene.name);
        totalPlayers = playerObjects.Length;
        if (scene.name == "PlaySceneMobile")
        {


            for (int i = 0; i < 2; i++)
            {
                playerObjects[i]=GameObject.FindGameObjectWithTag("Player" + (i+1));
                playerObjects[i].GetComponent<PlayerControllerMobile>().Initialize(players[i]);
            }

            totalPlayers = playerObjects.Length;

            GameObject timerObject = GameObject.FindGameObjectWithTag("Timer");
            timer = timerObject.GetComponent<Text>();
            hasSceneLoaded = true;
        }

        else if (scene.name == "MainMenuMobile")
        {
            hasSceneLoaded = false;
            //Destroy(gameObject);
        }
    }

    private void OnEnable()
    {
        SceneManager.sceneLoaded += OnLevelFinishedLoading;
    }
    // Update is called once per frame
    void Update()
    {
        if (hasSceneLoaded)
        {
            startTimer -= Time.deltaTime;

            if (startTimer <= 2.2f && startTimer >= 1.8f)
            {
                timer.text = "" + 2;
            }
            else if (startTimer <= 1.2f && startTimer >= 0.8f)
            {
                timer.text = "" + 1;
            }
            else if (startTimer <= 0.2f && startTimer >= -0.8f)
            {
                timer.text = "GO";
            }
            else if (startTimer < -0.8f && !hasGameStarted)
            {
                timer.text = "";
                hasGameStarted = true;
                for (int i = 0; i < totalPlayers; i++)
                {
                    playerObjects[i].GetComponent<PlayerControllerMobile>().canMove = true;
                    playerObjects[i].GetComponent<PlayerControllerMobile>().direction = i;
                }
                GameObject.FindGameObjectWithTag("Tutorial").SetActive(false);
            }
            CheckPlayers();
        }
    }

    void CheckPlayers()
    {
        print(totalPlayers);
        deadPlayers = 0;
        foreach (GameObject playerObj in playerObjects)
        {
            if (playerObj.GetComponent<PlayerControllerMobile>().player.isDead)
            {
                deadPlayers++;
            }
        }
        if (deadPlayers > previousDeadPlayers)
        {
            totalPlayers -= (deadPlayers - previousDeadPlayers);
            previousDeadPlayers = deadPlayers;
        }

        print(totalPlayers);
        if (totalPlayers <= 1)
        {
            endTimer -= Time.deltaTime;
            if (endTimer > 0)
            {
                if (totalPlayers == 1 && winner == "")
                {
                    foreach (GameObject playerObj in playerObjects)
                    {
                        if (!playerObj.GetComponent<PlayerControllerMobile>().player.isDead)
                        {
                            playerObj.GetComponent<PlayerControllerMobile>().canMove = false;
                            timer.fontSize = 100;
                            winner = playerObj.GetComponent<PlayerControllerMobile>().player.name;
                            timer.text = winner + " Wins!";

                        }
                    }
                }
                else if (totalPlayers == 0)
                {
                    timer.text = "Nobody Wins :(";
                }
            }
            else
            {
                //timer.text = "";
                SceneManager.LoadScene("MainMenuMobile");
            }
        }
    }
}
