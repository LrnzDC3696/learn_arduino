#include <DHT.h>
#define Type DHT11
#include "SevSeg.h"
SevSeg sevseg;

int sensePin=13;
DHT HT(sensePin, Type);
float humidity;
float TempC;
float TempF;
int setTime=5;
int dt=1000;

void  setup()
{
  //Set to 1 for single-digit display
  byte numDigits = 1;
  
  //defines common pins while using multi-digit display. Left for single digit display
  byte digitPins[] = {};
  
  //Defines Arduino pin connections in order: A, B, C, D, E, F, G, DP
  byte segmentPins[] = {6, 12, 11, 10, 9, 8, 7, 6};
  byte displayType = COMMON_CATHODE; //Use COMMON_ANODE for Common Anode display
  bool resistorsOnSegments = true; //‘false’ if resistors are connected to common pin
  
  //Initialize sevseg object. Use COMMON_ANODE instead of COMMON_CATHODE for CA display
  sevseg.begin(displayType, numDigits, digitPins, segmentPins, resistorsOnSegments);
  sevseg.setBrightness(90);
  
  Serial.begin(9600); 
  HT.begin();
  delay(setTime);
}

void loop()
{
  humidity=HT.readHumidity();
  TempC=HT.readTemperature();
  TempF=HT.readTemperature(true);

  Serial.print("Humidity: ");
  Serial.println(humidity);
  
  Serial.print("Temp C: ");
  Serial.println(TempC);
  
  Serial.print("Temp F: ");
  Serial.println(TempF);
  Serial.println();
  delay(dt);
    // sevseg.setNumber(7);

  //Display numbers 0-9 with 1 seconds delay
//  for(int i = 0; i <= 10; i++)
//  {
//    if (i == 10)
//    {
//      i = 0;
//    }
//    sevseg.setNumber(i);
//    sevseg.refreshDisplay();
//    delay(1000);
//  }
}
