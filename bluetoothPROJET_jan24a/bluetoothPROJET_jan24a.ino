#include<SoftwareSerial.h>
#define RX 8
#define TX 9
SoftwareSerial BlueT(RX,TX);

int PWM=128;
char Data;


void setup() {
  
  Serial.begin(9600);
  delay(500);
  Serial.println("Bonjour -Pret pour les commandes AT");
  BlueT.begin(9600);
  delay(500);
  }




void loop() {
  while (BlueT.available()) {
  Serial.print(char(BlueT.read())); }
  while (Serial.available()) {
  BlueT.write(char(Serial.read())); }


}