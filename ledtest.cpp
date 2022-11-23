const int relayPin = D8;
const int relayPin1 = D5;

void setup() {
  // put your setup code here, to run once:
pinMode( relayPin, OUTPUT);
pinMode( relayPin1, OUTPUT);
}

void loop() {
  digitalWrite( relayPin, HIGH);
  delay( 600);
  digitalWrite( relayPin, LOW);

  digitalWrite( relayPin1, HIGH);
  delay( 600);
  digitalWrite( relayPin1, LOW);
}
