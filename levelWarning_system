int LED1 = 13;
int LED2 = 12;
int BUZZ = 11;

int SensorValue;
int SensorPin = A5;

void setup() {
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(BUZZ, OUTPUT);
}

void loop() {
  SensorValue = analogRead(SensorPin);
  Serial.println(SensorValue);

  if (SensorValue < 200) {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    digitalWrite(BUZZ, LOW);
  }

  else if (SensorValue < 400) {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
    digitalWrite(BUZZ, LOW);
  }

 else if(SensorValue <=600){
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(BUZZ, HIGH);
 }

  else if (SensorValue <= 1023) {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(BUZZ, HIGH); 
  }
  
  delay(500);
}
