int pinTrig = 5;
int pinEcho = 6;
int pinBuzz = 7;

void setup() {
  pinMode(pinTrig, OUTPUT);
  pinMode(pinEcho, INPUT);
  pinMode(pinBuzz, OUTPUT);

  Serial.begin(9600);

}

void loop() {
  float distance;
  unsigned long duration;

  digitalWrite(pinTrig, HIGH);
  delay(10)
  digitalWrite(pinTrig, LOW);

  duration = pulseIn(pinEcho, HIGH);
  distance = ((340*duration)/10000)/2;

  Serial.printIn(distance);
  delay(300);
}
