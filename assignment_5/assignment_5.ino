/* count 1-15 but in binary */

const uint8_t LED_PINS[] = {13, 12, 11, 10};
const uint8_t LED_PIN_COUNT = 4;

const uint8_t COUNT_TO = 15;
const uint16_t DEFAULT_DELAY = 420;

const uint16_t SECOND = 1000;

void setup() {
    for (const auto pin: LED_PINS) {
        pinMode(pin, OUTPUT);
    }
}

void loop() {
    for (uint8_t x = 1; x <= COUNT_TO; x++) {
        for (uint8_t i = 0; i < LED_PIN_COUNT; i++) {
            digitalWrite(LED_PINS[i], (x >> i) & 1);
        }
        delay(SECOND);
    }

    for (const auto pin: LED_PINS) {
        digitalWrite(pin, LOW);
    }
    delay(SECOND*3);
}
