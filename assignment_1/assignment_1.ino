const int LED_RED = 13;

void setup() {
    pinMode(LED_RED, OUTPUT);
}

void loop() {
    digitalWrite(LED_RED, HIGH);
    delay(100);
    digitalWrite(LED_RED, LOW);
    delay(1000);
}
