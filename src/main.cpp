#include <Arduino.h>

uint8_t outpin1 = 4;
uint8_t outpin2 = 5;
uint8_t outpin3 = 19;
uint8_t outpin4 = 18;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(outpin1, OUTPUT);
  pinMode(outpin2, OUTPUT);
  pinMode(outpin3, OUTPUT);
  pinMode(outpin4, OUTPUT);

  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(outpin1, LOW);
  digitalWrite(outpin2, LOW);
  digitalWrite(outpin3, LOW);
  digitalWrite(outpin4, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, LOW);
  //digitalWrite(outpin1, LOW);
  //digitalWrite(outpin2, LOW);
  digitalWrite(outpin3, LOW);
  digitalWrite(outpin4, LOW);
  delay(5000);
  digitalWrite(LED_BUILTIN, HIGH);
  //digitalWrite(outpin1, HIGH);
  //digitalWrite(outpin2, HIGH);
  digitalWrite(outpin3, HIGH);
  digitalWrite(outpin4, HIGH);
  delay(5000);
}