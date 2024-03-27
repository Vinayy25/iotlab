// Define the digital pins for the push button and LED
#define BUTTON_PIN 2
#define LED_PIN 3

void setup()
{
    // Initialize the digital pins
    pinMode(BUTTON_PIN, INPUT);
    pinMode(LED_PIN, OUTPUT);
}

void loop()
{
    // Read the state of the push button
    int buttonState = digitalRead(BUTTON_PIN);

    // Check if the button is pressed (assuming it's active low)
    if (buttonState == HIGH)
    {
        // Turn on the LED
        digitalWrite(LED_PIN, HIGH);
    }
    else
    {
        // Turn off the LED
        digitalWrite(LED_PIN, LOW);
    }
}
