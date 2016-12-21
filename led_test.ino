int LED = 2;
int as = 3;
void setup() 
{
  pinMode(LED,OUTPUT);
}

void loop() 
{
 
  if(as == 2)
  {
  digitalWrite(LED,HIGH);
  delay(1000);
  digitalWrite(LED,LOW);
  delay(1000);
  }
}
