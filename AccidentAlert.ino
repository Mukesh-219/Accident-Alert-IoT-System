/* AccidentAlert.ino - MVP prototype
   Simple vibration alert using Arduino UNO and a shock sensor (SW-420)
*/

const int sensorPin = 2;
const int buzzerPin = 8;
int sensorState = 0;

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Accident Alert System - MVP started");
}

void loop() {
  sensorState = digitalRead(sensorPin);
  if (sensorState == HIGH) {
    Serial.println("⚠️ ALERT: Vibration detected! Possible accident.");
    digitalWrite(buzzerPin, HIGH);
    delay(500);
    digitalWrite(buzzerPin, LOW);
    delay(1000); // wait before next detection
  }
}
