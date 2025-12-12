//配列にピン番号をまとめる
const int LEDS[5] = {8, 9, 10, 11, 12};

void setup() {
//配列を使ってpinModeを設定
  for(int i=0; i<5; i++){
    pinMode(LEDS[i], OUTPUT);
  }
}

void loop() {
//LEDが5個あるので、5回を無限ループ
  for(int i=0; i<5; i++){
//まずはLEDを全消灯させる
    for(int j=0; j<5; j++){
      digitalWrite(LEDS[j], LOW);
    }
//i番目のLEDを点灯
    digitalWrite(LEDS[i], HIGH);
    delay(500);
  }
}