#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,20,4);
const int trigPin = 9;
const int echoPin = 10;
const int greenLed = 11;
const int blueLed = 12;
const int redLed = 13;
long duration;
int distance;
void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  pinMode(greenLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  pinMode(redLed, OUTPUT);

  lcd.init();                      // initialize the lcd
  lcd.backlight();
}
void setColor(int r, int g, int b){
  analogWrite(redLed, r);
  analogWrite(greenLed, g);
  analogWrite(blueLed, b);
}
void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);// Reads the echoPin, returns the sound wave travel time in microseconds

  distance = duration * 0.034 / 2;   // Calculating the distance
  
  Serial.print("Distance: ");// Prints the distance on the Serial Monitor
  Serial.println(distance);
  delay(100);
  if(distance < 40 && distance > 0){ // red
  setColor(255,0, 0);
  lcd.clear();
  lcd.noBlink();
  lcd.setCursor(0,0);
  lcd.print("move your ass");
  lcd.setCursor(2,1);
  lcd.print("further");
  }
  delay(100);
  if(distance < 60 && distance > 40){ //green
  setColor(0,255,0);
  lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("looks good");
  }
  delay(100);
  if(distance > 75){ // far
  setColor(255,0, 0);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("damn dog");
  lcd.setCursor(2,1);
  lcd.print("too far");
  }
}





