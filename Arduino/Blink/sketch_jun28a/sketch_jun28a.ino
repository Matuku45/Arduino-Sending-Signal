int redPin = 0;
int greenPin = 1;
int bluePin = 2;

void setup() {
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
}

void loop() {
    // Set colors (adjust values as needed)
    digitalWrite(redPin, HIGH);    // Turn on red
    digitalWrite(greenPin, LOW);   // Turn off green
    digitalWrite(bluePin, LOW);    // Turn off blue
    delay(1000);                   // Wait for 1 second

    digitalWrite(redPin, LOW);     // Turn off red
    digitalWrite(greenPin, HIGH);  // Turn on green
    digitalWrite(bluePin, LOW);    // Turn off blue
    delay(1000);

    digitalWrite(redPin, LOW);     // Turn off red
    digitalWrite(greenPin, LOW);   // Turn off green
    digitalWrite(bluePin, HIGH);   // Turn on blue
    delay(1000);
}