const int soundpin=A0;
const int ledpin=13;
const int threshold=30; // sets threshold value for sound sensor

void setup() {
  Serial.begin(9600);
  pinMode(ledpin,OUTPUT);
  pinMode(soundpin,INPUT);
}

void loop() {
  int soundsens=analogRead(soundpin); // reads analog data from sound sensor
  Serial.println(soundsens);
  if (soundsens>threshold) {
    digitalWrite(ledpin,HIGH); //turns led on
    delay(1000);
  }
  else{
    digitalWrite(ledpin,LOW);
  }
  delay(250);
}
