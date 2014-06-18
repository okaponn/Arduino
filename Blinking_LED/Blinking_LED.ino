// Example 01 : Blinking LED

#define LED 13 // LEDはデジタルピン13に接続

void setup()
{
  pinMode(LED, OUTPUT); //デジタルピンを出力に設定
}

void loop()
{
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
}
