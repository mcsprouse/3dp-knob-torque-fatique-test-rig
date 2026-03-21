#include <Servo.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <EEPROM.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

Servo myServo;

const int servoPin = 9;
const int rotationTime = 1440;  // Adjust if needed after testing reverse
int revolutionCount = 0;
const int eepromAddress = 0;

void setup() {
  myServo.attach(servoPin);
  myServo.write(90);  // Stop initially

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {  // or 0x3D if needed
    for (;;);
  }

  // Load saved count
  EEPROM.get(eepromAddress, revolutionCount);
  if (revolutionCount < 0 || revolutionCount > 1000000) {
    revolutionCount = 0;
  }

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.println("Servo Ready");
  display.println("Revolutions:");
  display.setTextSize(2);
  display.println(revolutionCount);
  display.display();
}

void loop() {
  myServo.write(180);       // Reversed direction — change to 180 if you want original
  delay(rotationTime);
  
  myServo.write(90);
  delay(1000);
  
  revolutionCount++;
  EEPROM.put(eepromAddress, revolutionCount);  // Save
  
  display.clearDisplay();
  display.setCursor(0, 0);
  display.println("Revolutions:");
  display.setTextSize(2);
  display.println(revolutionCount);
  display.display();
}