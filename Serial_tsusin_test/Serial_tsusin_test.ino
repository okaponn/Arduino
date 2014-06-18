//アナログ入力ピン0の値をコンピュータへ送る
//アップロードの後に「Serial Monitor」ボタンを押すこと

#define SENSOR 0 //抵抗型のセンサがつながってるピン
int val = 0; //センサからの値を記憶する変数

void setup(){
  Serial.begin(9600); //シリアルポートを開く。
  //毎秒9600bitでコンピュータに送信
}

void loop(){
  val = analogRead(SENSOR); //センサから値を取得
  Serial.println(val); //シリアルポートにデータを出力
  delay(1000);
}
