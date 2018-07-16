using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerMenuScriptMobile : MonoBehaviour
{
    public Player player;
    public Text defaultName;
    public string playerColor;

    private int currentColor;
    private string[] Colors = new string[4]
    {
        "#42f4f1",
        "#31ed4a",
        "#fffa02",
        "#0f52fc"
    };
    public GameObject previewObject;

    void OnEnable()
    {
        previewObject.SetActive(true);
    }
    private void OnDisable()
    {
        if(previewObject)
        previewObject.SetActive(false);
    }
    // Use this for initialization
    void Start()
    {
        player = new Player();
        player.name = defaultName.text.ToString();
        currentColor = 0;
        SetPreviewColor();
        
    }

    public void ColorChange()
    {
        currentColor++;
        if (currentColor > 3)
            currentColor = 0;

        SetPreviewColor();
    }

    private void SetPreviewColor()
    {
        Color newCol = new Color();
        ColorUtility.TryParseHtmlString(Colors[currentColor], out newCol);
        previewObject.GetComponent<Renderer>().material.color = newCol;
        player.color = Colors[currentColor];
    }

    public void SetName(string newName)
    {
        if (newName != "")
            player.name = newName;
    }

    // Update is called once per frame
    void Update()
    {
    }
}
