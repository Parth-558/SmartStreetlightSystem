const int ldrPin = A0;
const int ledPin = 9;
const int btnPin = 2;

bool manualMode = false;
bool ledState = false;
int pressCount = 0;

unsigned long lastDebounceTime = 0;
const unsigned long debounceDelay = 200;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(btnPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  checkButton();

  if (manualMode) {
    // Manual Mode → LED controlled by ledState
    digitalWrite(ledPin, ledState ? HIGH : LOW);
    Serial.println(ledState ? "Manual: LED ON" : "Manual: LED OFF");
  } else {
    // Auto Mode → LDR controls LED
    int lightVal = analogRead(ldrPin);
    Serial.print("Auto Light: ");
    Serial.println(lightVal);

    if (lightVal < 500) {
      digitalWrite(ledPin, HIGH);
    } else {
      digitalWrite(ledPin, LOW);
    }
  }

  delay(100);
}

void checkButton() {
  static bool lastButtonState = HIGH;
  bool currentButtonState = digitalRead(btnPin);

  if (lastButtonState == HIGH && currentButtonState == LOW && (millis() - lastDebounceTime > debounceDelay)) {
    
    pressCount++;

    if (pressCount == 1) {
      manualMode = true;
      ledState = true; // Turn ON
    } else if (pressCount == 2) {
      ledState = false; // Turn OFF
    } else if (pressCount >= 3) {
      manualMode = false; // Back to Auto
      pressCount = 0;
    }

    lastDebounceTime = millis();
  }

  lastButtonState = currentButtonState;
}



