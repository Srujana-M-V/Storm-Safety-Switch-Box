int rainPin = A0;
int soundPin = A1;
int relayPin = 7;

int rainThreshold = 550;
int soundThreshold = 750;

unsigned long relayHoldTime = 8000;
long lastSoundTime = -8000;

void setup() {
  Serial.begin(9600);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, HIGH);
}

void loop() {
  int rainValue = analogRead(rainPin);
  int soundValue = analogRead(soundPin);

  Serial.print("Rain: ");
  Serial.print(rainValue);
  Serial.print(" | Sound: ");
  Serial.println(soundValue);

  bool rainDetected = (rainValue < rainThreshold);

  if (soundValue > soundThreshold) {
    lastSoundTime = millis();
  }

  bool soundDetected = (millis() - lastSoundTime < relayHoldTime);

  if (rainDetected || soundDetected) {
    digitalWrite(relayPin, LOW);
  } else {
    digitalWrite(relayPin, HIGH);
  }

  delay(50);
}

