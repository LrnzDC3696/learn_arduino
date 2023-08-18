// Use the onboard Uno LED
int LED = 13;

// This is our input pin
int isObstaclePin = 2;

// HIGH MEANS NO OBSTACLE
int isObstacle = HIGH;

void setup() {
  // Set the LED pin to output
  pinMode(LED, OUTPUT);

  // Set the obstacle pin to input
  pinMode(isObstaclePin, INPUT);

  // Initialize the serial port
  Serial.begin(9600);
}

void loop() {
  // Read the value of the obstacle pin 
  isObstacle = digitalRead(isObstaclePin);

  // If the obstacle pin is LOW, there is an obstacle
  if (isObstacle == LOW) {
    // Print "OBSTACLE!!, OBSTACLE!!" to the serial port
    Serial.println("OBSTACLE!!, OBSTACLE!!");

    // Turn on the LED
    digitalWrite(LED, HIGH);
  } else {
    // Print "clear" to the serial port
    Serial.println("clear");

    // Turn off the LED
    digitalWrite(LED, LOW);
  }

  // Wait 200 milliseconds
  delay(200);
}
