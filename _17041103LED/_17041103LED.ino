void setup() {
  Serial.begin(9600); //9,600bps
  
  // put your setup code here, to run once:
  for(int i=0; i < 10; i++){
    Serial.println(i+1);
    Right(200);

  }

  for(int i=0; i < 2; i++){
    Serial.println(i+1);
    Right(1000);

  }

  Serial.println("END");

}

void loop() {
  // put your main code here, to run repeatedly:

}

void Right(int speed){
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
  delay(speed);
  digitalWrite(13, LOW);
  delay(speed);
}

