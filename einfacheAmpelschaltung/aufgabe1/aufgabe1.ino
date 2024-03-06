// Konstanten für die Pins
const int ROT = 5;
const int GELB = 6;
const int GRUN = 7;

void setup() {
  // Pins als Ausgänge konfigurieren
  pinMode(ROT, OUTPUT);
  pinMode(GELB, OUTPUT);
  pinMode(GRUN, OUTPUT);
}

void loop() {
  // Rot
  digitalWrite(GRUN, LOW);
  digitalWrite(ROT, HIGH);
  delay(5000); // 5 Sekunden rot

  // Gelb
  digitalWrite(GELB, HIGH);
  delay(2000); // 2 Sekunden gelb

  // Grün
  digitalWrite(ROT, LOW);
  digitalWrite(GELB, LOW);
  digitalWrite(GRUN, HIGH);
  delay(5000); // 5 Sekunden grün

}
