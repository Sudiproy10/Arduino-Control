//Code for command mode control of arduino from phone by Sudip_roy


int led = 13;
void setup()
{
  Serial.begin(9600);
  
  pinMode(led,OUTPUT);
  digitalWrite(led,LOW);
}
void loop()
{
 if(Serial.available())
 {
   String value = Serial.readStringUntil('\n');
   Serial.println(value);
   if(value == "on")
   {
     digitalWrite(led,HIGH);
   }
   else if(value == "off")
   {
     digitalWrite(led,LOW);
   }
  
 }
}

