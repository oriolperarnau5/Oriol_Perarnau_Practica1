#include <Arduino.h>

#define LED_BUILTIN 2      // Pin del LED (canvia si cal)
#define DELAY 500 // Temps de retard en mil·lisegons

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);   // Configurar el LED com a sortida
    Serial.begin(115200);       // Iniciar la comunicació sèrie
}

void loop() {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(DELAY);
    digitalWrite(LED_BUILTIN, LOW);
    Serial.println("ON");
    delay(DELAY);
    Serial.println("OFF");        
}
