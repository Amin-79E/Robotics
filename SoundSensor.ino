int SOUND;
int SensorPin = A5;

void setup() {
   Serial.begin(9600);

}

void loop() {
  SOUND = analogRead(SensorPin);

  Serial.println(SOUND);

  delay(500);

}
