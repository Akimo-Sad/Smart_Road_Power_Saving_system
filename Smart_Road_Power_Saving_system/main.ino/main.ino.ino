// Smart Road Power Saving System
const int ldrPin = A0;
const int irPin = 2;
const int ledPin = 9;

void setup() {
  pinMode(ldrPin, INPUT);
  pinMode(irPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int ldrStatus = analogRead(ldrPin);
  int irStatus = digitalRead(irPin);

  // Night time check (LDR) and Motion check (IR)
  if (ldrStatus < 500 && irStatus == HIGH) {
    digitalWrite(ledPin, HIGH); // Street light ON
  } else {
    digitalWrite(ledPin, LOW);  // Street light OFF
  }
}