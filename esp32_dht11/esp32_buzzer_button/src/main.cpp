#include <Arduino.h>

const int buzzer = 21;
const int button = 16;

void setup()
{
    pinMode(buzzer, OUTPUT);
    pinMode(button, INPUT_PULLUP);
}

void loop()
{
    if (digitalRead(button) == 0)
    {
        for (int i = 0; i < 4; i++)
        {
            digitalWrite(buzzer, HIGH);
            delay(2000);
            digitalWrite(buzzer, LOW);
            delay(2000);
        }
    }
}
