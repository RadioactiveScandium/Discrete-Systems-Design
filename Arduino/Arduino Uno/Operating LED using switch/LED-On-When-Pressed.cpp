#define LED_PIN 8
#define BUTTON_PIN 7

// Reference --> https://roboticsbackend.com/arduino-turn-led-on-and-off-with-button/

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
}
void loop() {
  if (digitalRead(BUTTON_PIN) == HIGH) {
    digitalWrite(LED_PIN, HIGH);
  }
  else {
    digitalWrite(LED_PIN, LOW);
  }
}