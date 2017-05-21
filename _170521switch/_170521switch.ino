int fq = 440;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 

}

void loop() {
  // put your main code here, to run repeatedly:
  if( digitalRead(2) == LOW){
    //Serial.print("LOW");
    if(fq < 20000){
      fq = fq + 1;
    }  
  } else {
     
    //Serial.print("HIGH");
    if(fq > 50){
      fq = fq - 1;
    }
  }
  Serial.print(fq);
  Serial.print("\r\n");
  tone(4, fq);
  delay(10);
  
}
