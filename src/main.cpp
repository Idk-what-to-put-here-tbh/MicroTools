#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <espnow.h>

// put function declarations here:
String message;
//uint8_t broadcastAdress[] = {0xE8, 0x68, 0xE7, 0xC8, 0x04, 0x86}//E8:68:E7:C8:04:86

void setup() {
  // put your setup code here, to run once:
  pinMode(D0, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  WiFi.mode(WIFI_STA);
  Serial.begin(9600);
  Serial.println(WiFi.macAddress());


}

void loop() {
  // put your main code here, to run repeatedly:
  int num = digitalRead(D0);
 // Serial.begin(9600);
 // Serial.print("help");
  if(num == HIGH){
   digitalWrite(LED_BUILTIN, HIGH);
  }
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}