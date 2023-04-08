const int PINN1 = 9;
const int PINN2 = 10;
const int PINN3 = 11;

const unsigned long DELAY1 = 100;
const unsigned long DELAY2 = 250;
const unsigned long DELAY3 = 333;

unsigned long previousMillis1 = 0;
unsigned long previousMillis2 = 0;
unsigned long previousMillis3 = 0;

void setup() {
  pinMode(PINN1, OUTPUT);
  pinMode(PINN2, OUTPUT);
  pinMode(PINN3, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis1 >= DELAY1) {
    previousMillis1 = currentMillis;
    static bool ledState = LOW;
    digitalWrite(PINN1, ledState);
    ledState = !ledState;
  }

  if (currentMillis - previousMillis2 >= DELAY2) {
    previousMillis2 = currentMillis;
    static bool ledState = LOW;
    digitalWrite(PINN2, ledState);
    ledState = !ledState;
  }

  if (currentMillis - previousMillis3 >= DELAY3) {
    previousMillis3 = currentMillis;
    static bool ledState = LOW;
    digitalWrite(PINN3, ledState);
    ledState = !ledState;
  }
}
