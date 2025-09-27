#define LED 4
#define LED2 5
#define LED3 6

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  
}


void loop()
{
  digitalWrite(LED,HIGH);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  delay(1000);
  digitalWrite(LED,LOW);
  digitalWrite(LED2,HIGH);
  digitalWrite(LED3,LOW);
  delay(1000);
  digitalWrite(LED,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,HIGH);
  delay(1000);
  digitalWrite(LED,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  delay(1000);
  digitalWrite(LED,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,HIGH);
  delay(1000);
  digitalWrite(LED,LOW);
  digitalWrite(LED2,HIGH);
  digitalWrite(LED3,LOW);
  delay(1000);
  digitalWrite(LED,HIGH);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  delay(1000);
  digitalWrite(LED,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  delay(1000);
}