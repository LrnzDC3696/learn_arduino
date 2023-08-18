#include <DHT.h>
#define Type DHT11

int sensePin=2;
DHT HT(sensePin, Type);
float humidity;
float TempC;
float TempF;
int setTime=5;
int dt=1000;

void  setup()
{
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
}
