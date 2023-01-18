const int LED_RED = 13;
const int LED_YELLOW = 12;
const int LED_GREEN = 11;
const int DEFAULT_DELAY = 250;

void lightOut(int led_color, int delay_ = DEFAULT_DELAY) {
    digitalWrite(led_color, HIGH);
    delay(delay_);
    digitalWrite(led_color, LOW);
    delay(delay_);
}

void setup() {
    pinMode(LED_RED, OUTPUT);
    pinMode(LED_YELLOW, OUTPUT);
    pinMode(LED_GREEN, OUTPUT);
}

void loop() {
    int loop_count = 5;

    for (int i = 0; i < loop_count; i++) {
        lightOut(LED_RED);
    }

    for (int i = 0; i < loop_count*2; i++) {
        lightOut(LED_YELLOW);
    }

    for (int i = 0; i < loop_count*3; i++) {
        lightOut(LED_GREEN);
    }

}
