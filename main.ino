const int potPin = A0;
const int ledPin[] = {2, 3, 4, 5, 6};

void setup() {
  for (int i = 0; i < (sizeof(ledPin) / sizeof(ledPin[0])); i++) pinMode(ledPin[i], OUTPUT);
}

void loop() {
  int potValue = analogRead(potPin);
  int level = map(potValue, 0, 1023, 0, 6);
  for (int i = 0; i < (sizeof(ledPin) / sizeof(ledPin[0])); i++) {
    if (level == 6 || i == level - 1) {
      digitalWrite(ledPin[i], HIGH);
    } else {
      digitalWrite(ledPin[i], LOW);
    }
  }

  delay(200);
}
