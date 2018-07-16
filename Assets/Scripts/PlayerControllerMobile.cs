using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerControllerMobile : MonoBehaviour
{
    public int direction = -5;
    public GameObject trailPrefab;
    private GameObject currentTrail;
    private float speed = 0.3f;
    public float speedTrail = 0.6f;
    private float size = 0.25f;
    private float time = 0;
    public float trailScale;

    public bool canMove;

    public Player player;
    public GameObject explosionPrefab;

    // Use this for initialization
    void Start()
    {
        //player = new Player();
        //player.keys[0] = "up";
        //player.keys[1] = "left";
        //player.keys[2] = "down";
        //player.keys[3] = "right";
        //player.color = "#f48942";
        //direction = 2;
        //canMove = true;
    }

    public void Initialize(Player newPlayer)
    {
        player = newPlayer;
        Color newCol = new Color();
        ColorUtility.TryParseHtmlString(player.color, out newCol);
        gameObject.GetComponent<Renderer>().material.color = newCol;
        trailScale = 0.1f;
        createTrail(transform.position, transform.rotation);
    }

    // Update is called once per frame
    void Update()
    {
        WhenMoving();

    }

    public void TurnLeft()
    {
        if (canMove)
        {
            this.direction = 3;
            trailScale = 0;
            Vector3 rot = transform.rotation.eulerAngles;
            rot = new Vector3(rot.x, rot.y - 90, rot.z);
            transform.rotation = Quaternion.Euler(rot);
            createTrail(transform.position, transform.rotation);
        }
    }

    public void TurnRight()
    {
        if (canMove)
        {
            this.direction = 2;
            trailScale = 0;
            Vector3 rot = transform.rotation.eulerAngles;
            rot = new Vector3(rot.x, rot.y + 90, rot.z);
            transform.rotation = Quaternion.Euler(rot);
            createTrail(transform.position, transform.rotation);
        }
    }

    void WhenMoving()
    {
        if (canMove) //move left
        {
            transform.Translate(speed, 0, 0);
            trailScale += speedTrail;
            
            currentTrail.transform.localScale = new Vector3(trailScale, currentTrail.transform.localScale.y, currentTrail.transform.localScale.z);

        }
    }

    void createTrail(Vector3 Pos, Quaternion Rot)
    {
        currentTrail = Instantiate(trailPrefab, Pos, Rot);
        currentTrail.transform.localScale = new Vector3(trailScale, currentTrail.transform.localScale.y, currentTrail.transform.localScale.z);
        Color newCol = new Color();
        ColorUtility.TryParseHtmlString(player.color, out newCol);
        currentTrail.transform.GetChild(0).GetComponent<Renderer>().material.color = newCol;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "trail")
        {
            print("DEAD");
            player.isDead = true;
            GameObject explosion = Instantiate(explosionPrefab, transform.position, transform.rotation);
            explosion.GetComponent<Renderer>().material.color = gameObject.GetComponent<Renderer>().material.color;
            Destroy(explosion, 3.0f);
            player.isDead = true;
            canMove = false;
        }
    }
}
