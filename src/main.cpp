#include <Arduino.h>

uint8_t relay1 = 4;
uint8_t relay2 = 5;
uint8_t photocoupler1 = 19;
uint8_t photocoupler2 = 18;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(photocoupler1, OUTPUT);
  pinMode(photocoupler2, OUTPUT);

  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(relay1, LOW);
  digitalWrite(relay2, LOW);
  digitalWrite(photocoupler1, LOW);
  digitalWrite(photocoupler2, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, LOW);
  //digitalWrite(relay1, LOW);
  //digitalWrite(relay2, LOW);
  digitalWrite(photocoupler1, LOW);
  digitalWrite(photocoupler2, LOW);
  delay(5000);
  digitalWrite(LED_BUILTIN, HIGH);
  //digitalWrite(relay1, HIGH);
  //digitalWrite(relay2, HIGH);
  digitalWrite(photocoupler1, HIGH);
  digitalWrite(photocoupler2, HIGH);
  delay(5000);
}
