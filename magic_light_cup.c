/*
    Project name : Magic light cup module
    Modified Date: 08-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-magic-light-cup-module
*/

// Constants for LED pins and switch pins
const int ledPinA = 9;
const int switchPinA = 8;
const int ledPinB = 6;
const int switchPinB = 7;

// Variables to store the state of switches and LED brightness
int switchStateA = 0;
int switchStateB = 0;
int brightness = 0;

// Variables for debouncing
unsigned long lastDebounceTimeA = 0;
unsigned long lastDebounceTimeB = 0;
unsigned long debounceDelay = 50; // debounce time in milliseconds

void setup() {
  pinMode(ledPinA, OUTPUT);
  pinMode(ledPinB, OUTPUT);
  pinMode(switchPinA, INPUT);
  pinMode(switchPinB, INPUT);

  // Initialize serial communication for debugging
  Serial.begin(9600);
}

void loop() {
  // Read the state of the switches
  int readingA = digitalRead(switchPinA);
  int readingB = digitalRead(switchPinB);

  // Check if switch A is pressed and debounce
  if (readingA == HIGH && (millis() - lastDebounceTimeA) > debounceDelay) {
    if (brightness < 255) {
      brightness++;
    }
    lastDebounceTimeA = millis();
  }

  // Check if switch B is pressed and debounce
  if (readingB == HIGH && (millis() - lastDebounceTimeB) > debounceDelay) {
    if (brightness > 0) {
      brightness--;
    }
    lastDebounceTimeB = millis();
  }

  // Set the brightness of the LEDs
  analogWrite(ledPinA, brightness);  // A slow fade out
  analogWrite(ledPinB, 255 - brightness);  // B slow bright up

  // Print the current brightness to the Serial Monitor for debugging
  Serial.print("Brightness: ");
  Serial.println(brightness);

  // Delay for a short period to control the fade speed
  delay(20);
}
