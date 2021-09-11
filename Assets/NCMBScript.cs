using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using NCMB;
public class NCMBScript : MonoBehaviour
{
  [SerializeField] public GameManager gameManager;

  void Start()
  {
    // Type == Number の場合
    naichilab.RankingLoader.Instance.SendScoreAndShowRanking(gameManager.score);
  }
}
