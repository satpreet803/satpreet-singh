int LED = 13;
int led = 12;
int Led = 11;
void setup() {
  pinMode(LED, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(Led, OUTPUT);
}
void loop() {
  digitalWrite(LED, HIGH);
  delay(200);
  digitalWrite(LED, LOW);
  delay(200);
  digitalWrite(led, HIGH);
  delay(200);
  digitalWrite(led, LOW);
  delay(200);
  digitalWrite(Led, HIGH);
  delay(200);
  digitalWrite(Led, LOW);
  delay(200);
}