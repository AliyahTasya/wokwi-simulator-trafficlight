#include <Arduino.h>

#define RED_LED 23
#define YELLOW_LED 21
#define GREEN_LED 22

void setup() {
    Serial.begin(115200);
    pinMode(RED_LED, OUTPUT);
    pinMode(YELLOW_LED, OUTPUT);
    pinMode(GREEN_LED, OUTPUT);
}

void loop() {
    // Lampu merah nyala 30 detik
    digitalWrite(RED_LED, HIGH);
    delay(30000);
    digitalWrite(RED_LED, LOW);
    Serial.println("Lampu Merah");

    // Lampu hijau nyala 20 detik
    digitalWrite(GREEN_LED, HIGH);
    delay(20000);
    digitalWrite(GREEN_LED, LOW);
    Serial.println("Lampu Hijau");

    // Lampu kuning nyala 5 detik
    digitalWrite(YELLOW_LED, HIGH);
    delay(5000);
    digitalWrite(YELLOW_LED, LOW);
    Serial.println("Lampu Kuning");

}
