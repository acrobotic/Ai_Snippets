//Serial Relay - Arduino will patch a 
//serial link between the computer and the GPRS Shield
//at 19200 bps 8-N-1
//Computer is connected to Hardware UART
//GPRS Shield is connected to the Software UART 

#include <SoftwareSerial.h>

SoftwareSerial mySerial(7,8);

void setup()
{
  mySerial.begin(9600);                 
  Serial.begin(9600);                  
}

void loop()
{
  if (mySerial.available())
    Serial.write(mySerial.read());
  if (Serial.available())
    mySerial.write(Serial.read());  

}
