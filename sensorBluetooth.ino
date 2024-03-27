#include <SoftwareSerial.h>
#include <dht11.h>
#define DHT11PIN 7
dht11 DHT11;
// Create software serial object to communicate with HC-05
SoftwareSerial mySerial(3, 2); // HC-05 Tx & Rx is connected to Arduino #3 & #2
// String message = "";
//  device to control
void setup()
{
    // Begin serial communication with Arduino and Arduino IDE (Serial Monitor)
    Serial.begin(9600);

    // Begin serial communication with Arduino and HC-05
    mySerial.begin(9600);

    Serial.println("Initializing...");
    Serial.println("The device started, now you can pair it with bluetooth!");
}

void loop()
{
    Serial.println();

    int chk = DHT11.read(DHT11PIN);

    Serial.print("Humidity (%): ");
    Serial.println((float)DHT11.humidity, 2);
    float h = DHT11.humidity;

    Serial.print("Temperature  (C): ");
    Serial.println((float)DHT11.temperature, 2);

    float t = DHT11.temperature;
    mySerial.print(h);
    mySerial.print(",");
    mySerial.print(t);
    mySerial.print(";");

    delay(2000);
}