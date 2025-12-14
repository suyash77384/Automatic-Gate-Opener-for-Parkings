#include <Servo.h>

#define PIR_PIN 2
#define SERVO_PIN 9
#define LED_PIN 13   // Optional

Servo gateServo;

int openAngle = 90;
int closeAngle = 0;
bool gateOpen = false;

void setup() {
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);

  gateServo.attach(SERVO_PIN);
  gateServo.write(closeAngle);
}

void loop() {
  int motion = digitalRead(PIR_PIN);

  if (motion == HIGH && !gateOpen) {
    digitalWrite(LED_PIN, HIGH);   // Indicate motion

    gateServo.write(openAngle);    // Open gate
    gateOpen = true;

    delay(3000);                   // Gate open time

    gateServo.write(closeAngle);   // Close gate
    delay(2000);

    digitalWrite(LED_PIN, LOW);
    gateOpen = false;
  }
}
