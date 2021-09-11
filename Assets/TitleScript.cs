using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TitleScript : MonoBehaviour
{
  [SerializeField] private GameObject inflateBubbleGum;
  [SerializeField] private GameObject GamemanagerCanvas;
  [SerializeField] private GameManager gameManager;

  void Awake()
  {
    inflateBubbleGum.SetActive(false);
    GamemanagerCanvas.SetActive(false);
  }
  public void StartButton()
  {
    inflateBubbleGum.SetActive(true);
    GamemanagerCanvas.SetActive(true);
    this.gameObject.SetActive(false);
    gameManager.TextBlinking();
  }

}
