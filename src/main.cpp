#include <Arduino.h>

uint8_t outpin1 = 2;
uint8_t outpin2 = 3;
uint8_t outpin3 = 4;
uint8_t outpin4 = 5;
uint8_t outpin_latch = 25;

void setup() {
  Serial.begin(9600);

  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(outpin1, OUTPUT);
  pinMode(outpin2, OUTPUT);
  pinMode(outpin3, OUTPUT);
  pinMode(outpin4, OUTPUT);
  pinMode(outpin_latch, OUTPUT);

  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(outpin1, LOW);
  digitalWrite(outpin2, LOW);
  digitalWrite(outpin3, LOW);
  digitalWrite(outpin4, LOW);
  digitalWrite(outpin_latch, LOW);
  delay(5000);
  Serial.print("start looping...");
}

void loop() {
  // put your main code here, to run repeatedly:

  // output: low
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(outpin_latch, HIGH);
  digitalWrite(outpin1, LOW);
  digitalWrite(outpin2, LOW);
  digitalWrite(outpin3, LOW);
  digitalWrite(outpin4, LOW);
  digitalWrite(outpin_latch, LOW);
  delay(5000);

  // output: low
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(outpin_latch, LOW);
  digitalWrite(outpin1, HIGH);
  digitalWrite(outpin2, HIGH);
  digitalWrite(outpin3, HIGH);
  digitalWrite(outpin4, HIGH);
  digitalWrite(outpin_latch, LOW);
  delay(5000);

  // output: low
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(outpin_latch, LOW);
  digitalWrite(outpin1, LOW);
  digitalWrite(outpin2, LOW);
  digitalWrite(outpin3, LOW);
  digitalWrite(outpin4, LOW);
  digitalWrite(outpin_latch, LOW);
  delay(5000);

  // output: high
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(outpin_latch, HIGH);
  digitalWrite(outpin1, HIGH);
  digitalWrite(outpin2, HIGH);
  digitalWrite(outpin3, HIGH);
  digitalWrite(outpin4, HIGH);
  digitalWrite(outpin_latch, LOW);
  delay(5000);

  // output: high
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(outpin_latch, LOW);
  digitalWrite(outpin1, LOW);
  digitalWrite(outpin2, LOW);
  digitalWrite(outpin3, LOW);
  digitalWrite(outpin4, LOW);
  digitalWrite(outpin_latch, LOW);
  delay(5000);

  // output: high
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(outpin_latch, LOW);
  digitalWrite(outpin1, HIGH);
  digitalWrite(outpin2, HIGH);
  digitalWrite(outpin3, HIGH);
  digitalWrite(outpin4, HIGH);
  digitalWrite(outpin_latch, LOW);
  delay(5000);
}