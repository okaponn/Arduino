//ボタンに接続したピンの番号
const int buttonPin = 2;

//LEDに接続したピンの番号
const int ledPin = 13;

//ボタンの状態を表す変数
int buttonState = 0;

void setup(){
  //LEDに接続したピンのモードをOUTPUTにセット
  pinMode(ledPin, OUTPUT);
  //ボタンに接続したピンのモードをINPUTにセット
  pinMode(buttonPin, INPUT);
}

void loop(){
  //ボタンに接続したピンの状態を読み取る
  buttonState = digitalRead(buttonPin);
  
  //ボタンの状態がHIGHであれば
  if(buttonState == HIGH){
    //LEDに接続したピンの値をHIGHにして点灯
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(ledPin, LOW);
  }
}
