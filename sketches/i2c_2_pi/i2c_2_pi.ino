#include <Wire.h>
#define BUS_ADDRESS 06
#define LED  13
int number = 0;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  Wire.begin(BUS_ADDRESS);
  Wire.onReceive(receiveData);
  Wire.onRequest(sendData);
  Serial.println("Ready!");
}

void loop() {
  delay(100);
}

void receiveData(int byteCount) {
  Serial.print("receiveData");
  while (Wire.available()) {
    number = Wire.read();
    Serial.print("data received: ");
    Serial.println(number);
    if (number == 1) {
      Serial.println(" LED ON");
      digitalWrite(LED, HIGH);
    } else {
      Serial.println(" LED OFF");
      digitalWrite(LED, LOW);
    }
  }
}

void sendData() {
  Wire.write(number);
}