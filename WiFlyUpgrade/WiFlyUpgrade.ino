/*
  1. Send $$$ with no line ending
  2. Switch to carriage return
  3. Send commands
*/

void setup()
{
  Serial1.begin(9600);                 
  Serial.begin(9600);                  
}

void loop()
{
  if (Serial1.available())
    Serial.write(Serial1.read());
  if (Serial.available())
    Serial1.write(Serial.read());  

}
