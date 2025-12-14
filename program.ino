#include <Servo.h>
#include <LiquidCrystal_I2C.h>

#define PIR_PIN 2
#define SERVO_PIN 9

Servo gateServo;
LiquidCrystal_I2C lcd(0x27, 16, 2); // I2C address may be 0x27 or 0x3F

int gateOpenAngle = 90;
int gateCloseAngle = 0;
bool gateOpen = false;

void setup() {
  pinMode(PIR_PIN, INPUT);
  gateServo.attach(SERVO_PIN);
  gateServo.write(gateCloseAngle);

  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Automatic Gate");
  lcd.setCursor(0, 1);
  lcd.print("System Ready");

  delay(2000);
  lcd.clear();
}

void loop() {
  int motion = digitalRead(PIR_PIN);

  if (motion == HIGH && !gateOpen) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Motion Detected");
    lcd.setCursor(0, 1);
    lcd.print("Gate Opening");

    gateServo.write(gateOpenAngle);
    gateOpen = true;

    delay(3000); // gate open time

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Gate Opened");
    delay(2000);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Gate Closing");
    gateServo.write(gateCloseAngle);

    delay(2000);
    gateOpen = false;

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("System Ready");
  }
}
