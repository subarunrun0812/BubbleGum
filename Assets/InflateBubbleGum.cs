using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class InflateBubbleGum : MonoBehaviour
{
  public GameObject gumPrefab;//パブルガムをアタッチする

  private GameObject instance;

  private float maxsize = 1.05f;//初期値を設定

  private bool ingame = true;

  public GameManager gameManager;

  void Update()
  {
    if (ingame == true)
    {
      if (Input.GetMouseButtonDown(0))
      {
        if (instance != null)//もし、ガムがひとつもなかったら
        {
          maxsize = instance.transform.localScale.x;//ガムの大きさのxの情報を保存する
        }
        instance = Instantiate(gumPrefab) as GameObject;
        gameManager.AddScore();
        gameManager.InflateAudio();
      }
      if (Input.GetMouseButton(0))//左クリックされているとき
      {
        if (instance.transform.localScale.x < 1.1f)//毎秒毎にガムを大きくする
        {
          instance.transform.localScale += new Vector3(0.005f, 0.005f, 0.005f);
        }
        if (instance.transform.localScale.x >= maxsize)//膨らませてる風船が外側の風船に当たったら
        {
          gameManager.Bang();
          gameManager.StopInflateAudio();
          ingame = false;
        }
      }
      if (Input.GetMouseButtonUp(0))
      {
        gameManager.StopInflateAudio();
      }
    }
  }
}
