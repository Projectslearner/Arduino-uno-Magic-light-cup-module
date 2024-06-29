/*
    Project name : Arduino Uno Magic Light Cup Module 
    Modified Date: 29-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-magic-light-cup-module
*/

// Define the pins connected to the RGB LED
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

void setup() {
  // Initialize the RGB LED pins as outputs
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  // Initialize serial communication
  Serial.begin(9600);
}

void loop() {
  // Example: Red color
  setColor(255, 0, 0);
  delay(1000);  // Stay red for 1 second
  printColorValues();  // Print RGB values to Serial Monitor

  // Example: Green color
  setColor(0, 255, 0);
  delay(1000);  // Stay green for 1 second
  printColorValues();  // Print RGB values to Serial Monitor

  // Example: Blue color
  setColor(0, 0, 255);
  delay(1000);  // Stay blue for 1 second
  printColorValues();  // Print RGB values to Serial Monitor
}

// Function to set RGB color
void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);       // Set the intensity of the red LED
  analogWrite(greenPin, greenValue);   // Set the intensity of the green LED
  analogWrite(bluePin, blueValue);     // Set the intensity of the blue LED
}

// Function to print RGB values to Serial Monitor
void printColorValues() {
  int redValue = analogRead(redPin);       // Read red LED intensity
  int greenValue = analogRead(greenPin);   // Read green LED intensity
  int blueValue = analogRead(bluePin);     // Read blue LED intensity
  
  Serial.print("Red: ");
  Serial.print(redValue);
  Serial.print(", Green: ");
  Serial.print(greenValue);
  Serial.print(", Blue: ");
  Serial.println(blueValue);
}
