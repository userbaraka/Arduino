#include <dht.h>



dht DHT;

#define DHT11_PIN 7
 int redled=9;
 int greenled=8;

void setup(){
  Serial.begin(9600);
  pinMode(redled,OUTPUT);
  pinMode(greenled,OUTPUT);
  
}

void loop()
{
  int chk = DHT.read11(DHT11_PIN);
 
  Serial.println(DHT.temperature);
  
  delay(5000);
   float t = DHT.temperature;  // Read temperature as Celsius (the default)
  if ((t)<26)
  {
  digitalWrite(greenled, HIGH);
  digitalWrite(redled, LOW);
}
  else 
  {digitalWrite(redled, HIGH);
  digitalWrite(greenled, LOW);

}
}
