using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class PlayerController2 : NetworkBehaviour
{
    private int direction = -5;
    public GameObject trailPrefab;
    private GameObject currentTrail;
    private float speed = 0.3f;
    public float speedTrail = 0.5f;
    private float size = 0.25f;
    private float time = 0;
    public float trailScale;

    private NetworkInstanceId myId;
    // Use this for initialization
    void Start()
    {
        myId = gameObject.GetComponent<NetworkIdentity>().netId;
    }

    // Update is called once per frame
    void Update()
    {
        if (!isLocalPlayer) return;
        if (Input.GetButtonDown("Horizontal") && Input.GetAxisRaw("Horizontal") < 0 && direction != 1) //left
        {
            this.direction = 0;
            transform.eulerAngles = new Vector3(0, 180, 0);
            Vector3 pos = new Vector3(transform.position.x + size / 2 + 0.4f, transform.position.y, transform.position.z);

            trailScale = 0;
            CmdCreateTrail( transform.position, transform.rotation);
        }
        if (Input.GetButtonDown("Horizontal") && Input.GetAxisRaw("Horizontal") > 0 && direction != 0)    //right
        {
            this.direction = 1;
            transform.eulerAngles = new Vector3(0, 0, 0);
            Vector3 pos = new Vector3(transform.position.x - size / 2 - 0.4f, transform.position.y, transform.position.z);

            trailScale = 0;
            CmdCreateTrail( pos, transform.rotation);
        }
        if (Input.GetButtonDown("Vertical") && Input.GetAxisRaw("Vertical") < 0 && direction != 3) //down
        {
            this.direction = 2;
            transform.eulerAngles = new Vector3(0, 90, 0);
            Vector3 pos = new Vector3(transform.position.x, transform.position.y, transform.position.z + size / 2 + 0.4f);

            trailScale = 0;
            CmdCreateTrail( pos, transform.rotation);
        }
        if (Input.GetButtonDown("Vertical") && Input.GetAxisRaw("Vertical") > 0 && direction != 2) //up
        {
            this.direction = 3;
            transform.eulerAngles = new Vector3(0, -90, 0);
            Vector3 pos = new Vector3(transform.position.x, transform.position.y, transform.position.z - size / 2 - 0.4f);

            trailScale = 0;
            CmdCreateTrail( pos, transform.rotation);
        }

        if (this.direction >= 0 && this.direction <= 3) //move left
        {
            transform.Translate(speed, 0, 0);
            trailScale += speedTrail;

            print(gameObject.GetComponent<NetworkIdentity>().netId);

            if (currentTrail)
            {
                currentTrail.transform.localScale = new Vector3(trailScale, currentTrail.transform.localScale.y, currentTrail.transform.localScale.z);

                if (!isServer)
                    CmdUpdateTrail(currentTrail.GetComponent<NetworkIdentity>().netId, trailScale);
                else
                    RpcUpdateTrail(currentTrail.GetComponent<NetworkIdentity>().netId, trailScale);
            }
        }
    }

    [Command]
    void CmdUpdateTrail(NetworkInstanceId id, float newScale)
    {
        RpcUpdateTrail(id, newScale);
    }

    [ClientRpc]
    void RpcUpdateTrail(NetworkInstanceId id, float newScale)
    {
        if (hasAuthority) return;
        GameObject obj = ClientScene.FindLocalObject(id);
        obj.transform.localScale = new Vector3(newScale, obj.transform.localScale.y, obj.transform.localScale.z);
    }

    [Command]
    void CmdCreateTrail(Vector3 posi, Quaternion rot)
    {
        GameObject go = (GameObject)Instantiate(trailPrefab, posi, rot);
        currentTrail = go;
        NetworkServer.SpawnWithClientAuthority(currentTrail, connectionToClient);

        //RpcRelayCurrentTrail(id, go);
    }

    [ClientRpc]
    void RpcRelayCurrentTrail(NetworkInstanceId id, GameObject obj)
    {
        if (gameObject.GetComponent<NetworkIdentity>().netId == id)
        {
            currentTrail = obj;
            trailScale = 0;
        }
    }

}
