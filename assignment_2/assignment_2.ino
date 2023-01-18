const int LED_RED = 13;
const int LED_YELLOW = 12;
const int LED_GREEN = 11;
const int DEFAULT_DELAY = 250;

void blink(int led_color) {
    digitalWrite(led_color, HIGH);
    delay(DEFAULT_DELAY);
    digitalWrite(led_color, LOW);
}

void setup() {
    pinMode(LED_RED, OUTPUT);
    pinMode(LED_YELLOW, OUTPUT);
    pinMode(LED_GREEN, OUTPUT);
}

void loop() {
    blink(LED_RED);
    blink(LED_YELLOW);
    blink(LED_GREEN);
}
