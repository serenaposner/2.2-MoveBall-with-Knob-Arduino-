/*
Arduino sketch to control the horizontal movement of an 
onscreen ball with a dial
Serena Posner
DIGF 2B03 Physical Computing
OCAD University
Created on 022515
*/

int dialPin = 0;

void setup()
{
  Serial.begin(9600);
}

void loop ()
{
  int val = map(analogRead(dialPin), 0, 1023, 0, 400);
  Serial.println(val);
  delay(50);
}
