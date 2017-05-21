void setup()
{

  // GND をブレッドボードの「マイナス」に接続
  // 抵抗に今回は2.2kオームを使用

  // LEDは線の長い方から短い方に電流が流れるため，
  // 抵抗の次に接続するのは LED の長い方
  
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);

}

void loop()
{
  
   digitalWrite(2, HIGH);
   digitalWrite(3, HIGH);
   digitalWrite(4, HIGH);      
   delay(1000);
      
   digitalWrite(2, LOW);
   digitalWrite(3, LOW);   
   digitalWrite(4, LOW);   
   delay(1000);

}
