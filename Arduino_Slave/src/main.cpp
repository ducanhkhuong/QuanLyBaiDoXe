#include <Arduino.h>

const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;
const int potPin = A0;

void setup() {
    pinMode(redPin  , OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin , OUTPUT);
    pinMode(potPin  , INPUT_PULLUP);

    Serial.begin(9600);
}

void loop() {
    int potValue = analogRead(potPin);

    long colorValue = map(potValue, 0, 1023, 0, 16777215);

    int redValue = (colorValue >> 16) & 0xFF;
    int greenValue = (colorValue >> 8) & 0xFF;
    int blueValue = colorValue & 0xFF;

    analogWrite(redPin, redValue);
    analogWrite(greenPin, greenValue);
    analogWrite(bluePin, blueValue);

    String hexColor = "#";
    if (redValue < 16) hexColor += "0";
    hexColor += String(redValue, HEX);
    if (greenValue < 16) hexColor += "0";
    hexColor += String(greenValue, HEX);
    if (blueValue < 16) hexColor += "0";
    hexColor += String(blueValue, HEX);

    Serial.print("Mã màu HEX: ");
    Serial.println(hexColor);

    delay(50);
}
