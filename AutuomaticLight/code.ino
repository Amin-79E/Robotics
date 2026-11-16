int LED = 13;
int LDR;
int SensorPin = A5;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  LDR = analogRead(SensorPin);

  Serial.println(LDR);

  if(LDR > 400){
    digitalWrite(LED, HIGH);
  }
  else{
    digitalWrite(LED, LOW);
  }

  delay(500);

}
