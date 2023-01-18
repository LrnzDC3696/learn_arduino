/* Learned about uint8_t, uint16_t, uint32_t */

const uint8_t LED_13 = 13;
const uint8_t LED_12 = 12;
const uint8_t LED_11 = 11;
const uint32_t DEFAULT_DELAY = 500;

void blink(uint8_t led, uint32_t delay_ = DEFAULT_DELAY, uint16_t repeat_times = 1) {
    for (uint16_t i = 0; i < repeat_times; i++) {
        digitalWrite(led, HIGH);
        delay(delay_);
        digitalWrite(led, LOW);
        delay(delay_);
    }
}

void setup() {
    pinMode(LED_13, OUTPUT);
    pinMode(LED_12, OUTPUT);
    pinMode(LED_11, OUTPUT);
}

void loop() {
    blink(LED_13, DEFAULT_DELAY*.5, 5);
    blink(LED_12, DEFAULT_DELAY, 10);
    blink(LED_11, DEFAULT_DELAY*1.5, 15);
}
