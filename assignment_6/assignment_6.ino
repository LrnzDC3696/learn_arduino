const uint8_t LED_PINS_COUNT= 4;
const uint8_t LED_PINS[LED_PINS_COUNT] = {13, 12, 11, 10};
const uint32_t SECOND = 1000;

void display(uint8_t b1, uint8_t b2, uint8_t b3, uint8_t b4) {
    const uint8_t b[LED_PINS_COUNT] = {b1, b2, b3, b4};

    for (uint8_t i = 0; i < LED_PINS_COUNT; i++) {
        digitalWrite(LED_PINS[i], b[i] == 1);
    }
    delay(SECOND);
}

void setup() {
    for (const auto pin: LED_PINS) {
        pinMode(pin, OUTPUT);
    }
}

void loop() {
    /* 1 - 5 */
    display(0, 0, 0, 1);
    display(0, 0, 1, 0);
    display(0, 0, 1, 1);
    display(0, 1, 0, 0);
    display(0, 1, 0, 1);

    /* 6 - 10 */
    display(0, 1, 1, 0);
    display(0, 1, 1, 1);
    display(1, 0, 0, 0);
    display(1, 0, 0, 1);
    display(1, 0, 1, 0);

    /* 11 - 15 */
    display(1, 0, 1, 1);
    display(1, 1, 0, 0);
    display(1, 1, 0, 1);
    display(1, 1, 1, 0);
    display(1, 1, 1, 1);

    for (const auto pin: LED_PINS) {
        digitalWrite(pin, LOW);
    }
    delay(SECOND * 3);
}
