using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
public class ChangeFace : MonoBehaviour
{

  //   [SerializeField] private GameObject Face1;
  [SerializeField] private GameObject Face2;

  private bool change = true;



  //   public void ChangeFaceColor()
  //   {
  //     Face1.GetComponent<Renderer>().material.color = Random.ColorHSV(0f, 1f, 1f, 1f, 0.5f, 1f);
  //   }

  public void ChangeFaceButton()
  {
    if (change == true)
    {
      Face2.transform.DOLocalMoveZ(0.0877f, 2.5f);
      change = false;
      Debug.Log("faceが前進");
    }
    else
    {
      Face2.transform.DOLocalMoveZ(0f, 2.5f);
      change = true;
    }
  }
}
