void setup() {
  pinMode(PB2, OUTPUT);
}

void loop() {
  digitalWrite(PB2, HIGH);
  delay(1000);
  digitalWrite(PB2, LOW);
  delay(1000);
}
