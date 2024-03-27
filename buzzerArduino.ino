// Define the digital pin to which the buzzer is connected
#define BUZZER_PIN 8

void setup()
{
    // Initialize the digital pin for output
    pinMode(BUZZER_PIN, OUTPUT);
}

void loop()
{
    // Turn on the buzzer
    digitalWrite(BUZZER_PIN, HIGH);

    // Wait for 2 seconds
    delay(2000);

    // Turn off the buzzer
    digitalWrite(BUZZER_PIN, LOW);

    // Wait for 2 seconds
    delay(2000);
}
