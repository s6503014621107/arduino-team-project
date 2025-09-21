// Example: LED Blink with Serial Monitor
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("Arduino Team Project: LED Blink Start");
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("LED ON");
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("LED OFF");
  delay(500);
}
