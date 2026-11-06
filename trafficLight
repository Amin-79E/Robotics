const int RED = 13;
const int YELLOW = 12;
const int GREEN = 11;

void setLights(bool r, bool y, bool g) {
  digitalWrite(RED, r);
  digitalWrite(YELLOW, y);
  digitalWrite(GREEN, g);
}

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop() {
  setLights(HIGH, LOW, LOW);   // red
  delay(5000);

  setLights(LOW, LOW, HIGH);   // green
  delay(5000);

  setLights(LOW, HIGH, LOW);   // yellow
  delay(2000);
}
