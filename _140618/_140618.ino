#include <LiquidCrystal.h>

// CdSセルに接続したピンの番号
const int sensorPin = 0;

// LEDに接続したピンの番号
const int ledPin = 9;

void setup(){
  // LEDに接続したピンのモードを出力にセット
  pinMode(ledPin, OUTPUT);
}

void loop(){
  // 明るさを読み取る
  int brightness = analogRead(sensorPin);
  
  //センサの値(0〜1023)をLEDの輝度(0〜255)に変換
  int intensity = map(brightness, 0, 1023, 255, 0);
  
  //LEDに接続したピンに輝度の値をセット
  analogWrite(ledPin, intensity);
  
  //次回の処理まで100ms待つ
  delay(100);
}
