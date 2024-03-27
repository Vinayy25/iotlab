#include <SoftwareSerial.h>
// Create software serial object to communicate with HC-05
SoftwareSerial mySerial(3, 2); // HC-05 Tx & Rx is connected to Arduino #3 & #2
String message = "";
int LED = 13; // device to control
void setup()
{
    // Begin serial communication with Arduino and Arduino IDE (Serial Monitor)
    Serial.begin(9600);

    // Begin serial communication with Arduino and HC-05
    mySerial.begin(9600);
    pinMode(LED, OUTPUT);

    Serial.println("Initializing...");
    Serial.println("The device started, now you can pair it with bluetooth!");
}

void loop()
{
    if (mySerial.available())
    {
        char incomingChar = mySerial.read();
        if (incomingChar != '\n')
        {
            message += String(incomingChar);
        }
        else
        {
            message = "";
        }
        Serial.write(incomingChar);
    }
    // Check received message and control output accordingly
    if (message == "1")
    {
        digitalWrite(LED, HIGH);
    }
    else if (message == "0")
    {
        digitalWrite(LED, LOW);
    }
    delay(20);
}