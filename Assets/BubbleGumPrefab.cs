using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BubbleGumPrefab : MonoBehaviour
{
  void OnTriggerEnter(Collider collider)
  {
    if (collider.gameObject.tag == "Bubble")
    {
      Debug.Log("衝突した");
    }
  }
}
