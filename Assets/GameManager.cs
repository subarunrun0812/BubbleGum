using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;
using DG.Tweening;
public class GameManager : MonoBehaviour
{
  [SerializeField] private TextMeshProUGUI scoreText;
  public int score = 0;

  [SerializeField] private Text resultscoreText;

  [SerializeField] private Text highScoreText;
  public int highScore = 0;

  public float DurationSeconds;
  public Ease EaseType;

  [SerializeField] GameObject canvasGameobject;//canvasGroupがついているゲームオブジェクト
  public CanvasGroup canvasGroup;//長押しすると風船が膨らむよ
  [SerializeField] private GameObject bang;//風船が破裂するときに出すimage&文字

  [SerializeField] private AudioSource a1;//inflate

  [SerializeField] private AudioSource a2;//フッ
  [SerializeField] private AudioSource bangAudio;//bang

  [SerializeField] private GameObject resultCanvas;

  [SerializeField] private GameObject Ranking;

  // [SerializeField] private Result resultAudio;
  void Start()
  {
    highScoreText.text = PlayerPrefs.GetInt("HighScore", 0).ToString();
    canvasGameobject.SetActive(false);
  }
  public void AddScore()
  {
    score++;
  }

  public void InflateAudio()
  {
    a1.Play();
    a2.Play();
  }

  public void StopInflateAudio()
  {
    a1.Stop();
  }
  public void Bang()//爆発した時
  {
    bang.SetActive(true);
    bangAudio.Play();
    Debug.Log("当たった");
    StartCoroutine("ActiveResult");
    canvasGameobject.SetActive(false);
  }
  IEnumerator ActiveResult()
  {
    yield return new WaitForSeconds(1f);
    Ranking.SetActive(true);
    resultCanvas.SetActive(true);
  }

  public void Retry()
  {
    SceneManager.LoadScene("SampleScene");
  }

  void Update()
  {
    scoreText.text = score.ToString();
    resultscoreText.text = score.ToString();//リザルト画面に出てくるテキストなので、スコアテキストと同じで良い

    if (score >= PlayerPrefs.GetInt("HighScore", highScore))
    {
      highScore = score;
      PlayerPrefs.SetInt("HighScore", score);
      highScoreText.text = score.ToString();
      Debug.Log("ハイスコアは" + highScore);
      // resultAudio.HighScoreAudio();
    }
    // if (Input.GetKeyDown(KeyCode.R))//テストプレイ時のみ
    // {
    //   SceneManager.LoadScene("SampleScene");
    // }
  }
  public void Save()
  {
    //メソッドがよばれた時のキーと値をセットする
    PlayerPrefs.SetInt("HighScore", highScore);
    PlayerPrefs.Save();
  }

  public void TextBlinking()//ゲームの説明をする。テキストは点滅させる
  {
    canvasGroup = canvasGameobject.GetComponent<CanvasGroup>();
    canvasGameobject.SetActive(true);
    canvasGroup.DOFade(0.9f, this.DurationSeconds).SetEase(EaseType).
    SetLoops(10, LoopType.Yoyo);
  }
}
