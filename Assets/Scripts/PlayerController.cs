using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public int direction = -5;
    public GameObject trailPrefab;
    private GameObject currentTrail;
    private float speed = 0.3f;
    public float speedTrail = 0.5f;
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

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(player.keys[1]) && direction != 2) //left
        {
            this.direction = 3;
        }
        if (Input.GetKeyDown(player.keys[3]) && direction != 3) //right
        {
            this.direction = 2;
        }
        if (Input.GetKeyDown(player.keys[2]) && direction != 1) //down
        {
            this.direction = 0;
        }
        if (Input.GetKeyDown(player.keys[0]) && direction != 0) //up
        {
            this.direction = 1;
        }

        WhenMoving();

    }

    void WhenMoving()
    {
        if(direction == 3 && canMove)
        {
            trailScale = 0;
            transform.eulerAngles = new Vector3(0, 180, 0);
            Vector3 pos = new Vector3(transform.position.x + size / 2 + 0.4f, transform.position.y, transform.position.z);
            createTrail(pos, transform.rotation);
        }
        if (direction == 2 && canMove)
        {
            trailScale = 0;
            transform.eulerAngles = new Vector3(0, 0, 0);
            Vector3 pos = new Vector3(transform.position.x - size / 2 - 0.4f, transform.position.y, transform.position.z);
            createTrail(pos, transform.rotation);
        }
        if (direction == 0 && canMove)
        {
            trailScale = 0;
            transform.eulerAngles = new Vector3(0, 90, 0);
            Vector3 pos = new Vector3(transform.position.x, transform.position.y, transform.position.z + size / 2 + 0.4f);
            createTrail(pos, transform.rotation);
        }
        if (direction == 1 && canMove)
        {
            trailScale = 0;
            transform.eulerAngles = new Vector3(0, -90, 0);
            Vector3 pos = new Vector3(transform.position.x, transform.position.y, transform.position.z - size / 2 - 0.4f);
            createTrail(pos, transform.rotation);
        }
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

        Color newCol = new Color();
        ColorUtility.TryParseHtmlString(player.color, out newCol);
        currentTrail.transform.GetChild(0).GetComponent<Renderer>().material.color = newCol;
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "trail")
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
