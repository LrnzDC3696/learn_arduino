const uint8_t LED_LIGHTS[] = {9};
const int READER = A0;
const uint32_t BAUD_RATE = 9600;
const uint32_t DELAY = 690;

void setup() {
    for (const auto pin: LED_LIGHTS) {
        pinMode(LED_LIGHTS, OUTPUT);
    }

    pinMode(READER, INPUT);
    Serial.begin(BAUD_RATE);
    /* `Serial. begin(9600);` passes the value 9600 to the speed parameter. */
    /* This tells the Arduino to get ready to exchange messages with the */
    /* Serial Monitor at a data rate of 9600 bits per second. That's 9600 */
    /* binary ones or zeros per second, and is commonly called a baud rate. */
}

void loop() {
    int amps = analogRead(READER);
    Serial.println(amps);
    delay(DELAY);
}
