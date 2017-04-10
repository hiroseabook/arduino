int notes[] = {7, 12, 11, 12, 14, 9, 14, 0, 12, 11, 9, 11, 12, 0, 7};
int sizeNote;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("処理を開始");

  sizeNote = sizeof(notes) / sizeof(int);
  Normalize(4);
  Play();
}

void loop() {
  // put your main code here, to run repeatedly:

}

void Normalize(int octave){
  for (int i=0; i<sizeNote; i++){
    if (notes[i] == 0){
      continue;
    }
    notes[i] = notes[i] + 12 * octave;
  }
}

void Play(){
  for( int i = 0; i < sizeNote; i++){
    int note = notes[i];
    Serial.println(note);
    TonePlay(note);
  }
}

void TonePlay(int midiNum){
  float freq = MidiToFreq(midiNum);
  Serial.println(freq);
  if(freq > 20){
    tone(8, freq);
  }
  delay(500);
  noTone(8);
}

float MidiToFreq(int midiNum){
  float freq;
  float a = 440.0;
  freq = ( a / 32.0 ) * pow(2.0, ((float(midiNum) - 9.0) / 12.0));
  return freq;  
}
