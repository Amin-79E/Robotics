const int ledPin = 9;
const int ledpin = 10;
const int ledPin2 = 10;


void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  for(int brightness =0; brightness<=255 ; brightness++){
    analogWrite(ledPin, brightness);
    analogWrite(ledPin2, 255-brightness);
    delay(5);
  }

  for(int brightness = 255; brightness>=0 ; brightness--){
    analogWrite(ledPin, brightness);
    analogWrite(ledPin2, 255-brightness);
    delay(5);
  }
}
