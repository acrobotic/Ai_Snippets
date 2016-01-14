/*
  1. Send $$$ with no line ending
  2. Switch to carriage return
  3. Send commands
  # Typically, scan needs to be run twice for it to work
  scan 
  #WPA2
  set wlan auth 4
  set wlan phrase my_password
  join my_ssid
  #FTP
  set ftp user roving
  set ftp password Pass123
  set ftp directory public
  set ftp filename wifly3-475.img
  set ftp mode 1
  set ftp address 198.175.253.161
  set ftp time 200
  save
  get ftp
  ftp update
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
