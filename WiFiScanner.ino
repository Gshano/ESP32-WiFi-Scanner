/*
  Wi-Fi Scanner using ESP32
  --------------------------
  Description:
  This sketch scans for nearby Wi-Fi networks using the ESP32 in station mode.

  Hardware:
  - ESP32 Development Board
  - USB cable

  Author: Garen Shanoian
*/

//include Wifi functionality from library 
#include "WiFi.h"

void setup() {
//Starting a Serial communication between the ESP32 and the Computer 
//So that they could communicate data. #115200 is bits per second
Serial.begin(115200);
//Setting WI-FI Mode to "Station" as in Reciever/Client
WiFi.mode(WIFI_STA);
//Safty Reset to disccont from any wifi connection before scanning
WiFi.disconnect();
//delay 100ms/1s to reset before scanning
delay(100);
Serial.println("Scanning for Wi-Fi Connections...");
}//End setup()

void loop() {
int numOfNet = WiFi.scanNetworks();
//Function gets the number of Network there are and stores it on variable numOfNet.

  if (numOfNet == 0)
    {
      Serial.println("No Networks Found.");
    }
  else 
    {
      Serial.printf("%d network(s) found:\n", numOfNet);

      for(int i = 0; i < numOfNet; ++i)
    {
       Serial.printf("%d: %s (%d dBm) %s\n",
       i + 1,
       //get the name of Wi-Fi at i
       WiFi.SSID(i).c_str(),
       //get the Strength of Wi-Fi at i
        WiFi.RSSI(i),
        //check if the Wi-Fi is Open OR there is a Password
       (WiFi.encryptionType(i) == WIFI_AUTH_OPEN) ? "[OPEN]" : "[SECURED]"
      );
    delay(10);
    }//End for loop
  }//End if/Else 

Serial.println("\nScanning is Complete. Scanning again in 10 secounds...\n");
delay(10000);
}//End loop()
