int FLAME;
int LED= 13;
int SensorPin = A5;

void setup() {
   Serial.begin(9600);
   pinMode(13, OUTPUT);

}

void loop() {
  FLAME = analogRead(SensorPin);

  Serial.println(FLAME);

  if(FLAME < 200){
    digitalWrite(LED, HIGH);
  }
  else{
    digitalWrite(LED, LOW);
  }

  delay(500);

}
