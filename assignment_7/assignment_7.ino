/* A digital signal uses discrete (discontinuous) values. */
/* By contrast, non-digital (or analog) systems use a */
/* continuous range of values to represent information. */

/* ONLY THE SQUIGLY LINES CAN HAVE ANALOG WRITE */
const uint8_t LED_PINS_COUNT = 3;
const uint8_t LED_PINS[LED_PINS_COUNT] = {8, 9, 10};
const uint32_t DEFAULT_DELAY = 500;
const uint16_t LED_BRIGHTNESS = 255;

void setup() {
    for (const auto pin: LED_PINS) {
        pinMode(pin, OUTPUT);
    }
}

void loop() {
    const uint8_t SIGNAl = LED_PINS[0];
    const uint8_t PIN = LED_PINS[1];
    const uint8_t PIN_2 = LED_PINS[2];

    /* constantly blink led 0; proressively lit led 1; proressively dim led 2; */ 
    for (uint32_t brightness = 0; brightness < 255; brightness += 17) {
        digitalWrite(SIGNAl, LOW);
        delay(DEFAULT_DELAY);

        /* dim to lit */
        uint32_t brightness_1 = min(brightness, 255);
        analogWrite(PIN, brightness_1);

        /* lit to dim */
        uint32_t brightness_2 = max(255 - brightness, 0);
        analogWrite(PIN_2, brightness_2);

        /* signal stuff */
        digitalWrite(SIGNAl, HIGH);
        delay(DEFAULT_DELAY);
    }

    /* blink 3 times after doing the task */ 
    for (uint8_t i = 0; i < 3; i++) {
        for (const auto pins: LED_PINS) {
            digitalWrite(SIGNAl, HIGH);
            delay(DEFAULT_DELAY);
            digitalWrite(SIGNAl, LOW);
            delay(DEFAULT_DELAY);
        }
    }
}
