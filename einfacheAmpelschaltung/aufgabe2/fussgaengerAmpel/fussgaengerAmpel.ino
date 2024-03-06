// PINS
const int ApROT = 5;
const int ApGELB = 6;
const int ApGRUN = 7;
const int FpROT = 9;
const int FpGRUN = 8;

void setup() {
  // SETUP the Ampel PINS
  pinMode(ApROT, OUTPUT);
  pinMode(ApGELB, OUTPUT);
  pinMode(ApGRUN, OUTPUT);
  // SETUP the FußgängerAmpel PINS
  pinMode(FpROT, OUTPUT);
  pinMode(FpGRUN, OUTPUT);
}

void loop() {
  // Rot
  digitalWrite(ApGRUN, LOW);
  digitalWrite(ApROT, HIGH);
  digitalWrite(FpROT, LOW);
  digitalWrite(FpGRUN, HIGH);
  delay(5000); // 5 Sekunden rot

  // Gelb
  digitalWrite(ApGELB, HIGH);
  digitalWrite(FpGRUN, LOW);
  digitalWrite(FpROT, HIGH);
  delay(2000); // 2 Sekunden gelb

  // Grün
  digitalWrite(ApROT, LOW);
  digitalWrite(ApGELB, LOW);
  digitalWrite(ApGRUN, HIGH);
  delay(5000); // 5 Sekunden grün
}
