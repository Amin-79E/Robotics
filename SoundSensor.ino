int SOUND;
iny LED = 13;
int SensorPin = A5;

void setup() {
   Serial.begin(9600);
   pinMode(13, OUTPUT);
}

void loop() {
  SOUND = analogRead(SensorPin);

 if( SOUND > x){
    digitalWrite(LED, HIGH);
 }
 else{
    digitalWrite(LED, LOW);
 }

  Serial.println(SOUND);

  delay(500);

}
