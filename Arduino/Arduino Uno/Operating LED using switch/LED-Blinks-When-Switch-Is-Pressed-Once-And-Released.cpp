#define LED_PIN 8
#define BUTTON_PIN 7
#define ITERATIONS 10
byte lastButtonState = LOW;
byte ledState = LOW;
void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
}


void loop() {
  byte buttonState = digitalRead(BUTTON_PIN);
  if (buttonState == HIGH) {
    for (int i = 0; i < ITERATIONS ; i ++) {    
        digitalWrite(LED_PIN, HIGH);
        delay(1000);
        digitalWrite(LED_PIN, LOW);
        delay(500);
    }
  }