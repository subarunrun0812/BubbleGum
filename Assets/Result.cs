using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class Result : MonoBehaviour
{
  [SerializeField] private AudioSource audioSource;

  public void HighScoreAudio()
  {
    audioSource.Play();
  }
}
