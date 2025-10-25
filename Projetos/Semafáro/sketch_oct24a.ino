bool estadoBotao = 0;
#define botao 6

#define led_verde_principal 10
#define led_amarelo_principal 9
#define led_vermelho_principal 8

#define led_vermelho_esquerda 3
#define led_verde_esquerda 2

void setup()
{
  Serial.begin(9600);
  
  pinMode(botao, INPUT);
  digitalWrite(botao, HIGH);
  
  pinMode(led_verde_principal, OUTPUT);
  pinMode(led_amarelo_principal, OUTPUT);
  pinMode(led_vermelho_principal, OUTPUT);
  pinMode(led_vermelho_esquerda, OUTPUT);
  pinMode(led_verde_esquerda, OUTPUT);
}

void loop()
{
  digitalWrite(led_verde_principal, HIGH);
  digitalWrite(led_amarelo_principal, LOW);
  digitalWrite(led_vermelho_principal, LOW);
  
  digitalWrite(led_vermelho_esquerda, HIGH);
  digitalWrite(led_verde_esquerda, LOW);

  estadoBotao = digitalRead(botao);
  if(!estadoBotao)
  {
    digitalWrite(led_verde_principal, LOW);
    digitalWrite(led_amarelo_principal, HIGH);
    digitalWrite(led_vermelho_principal, LOW);
    delay(5000);
    
    digitalWrite(led_amarelo_principal, LOW);
    digitalWrite(led_vermelho_principal, HIGH);
    digitalWrite(led_verde_principal, LOW);
    
    digitalWrite(led_vermelho_esquerda, LOW);
    digitalWrite(led_verde_esquerda, HIGH);
    
    delay(5000);
    
    digitalWrite(led_verde_esquerda, LOW);
    
    digitalWrite(led_verde_principal, LOW);
    digitalWrite(led_vermelho_esquerda, HIGH);
    delay(1000);
    digitalWrite(led_vermelho_esquerda, LOW);
    delay(1000);
    digitalWrite(led_vermelho_esquerda, HIGH);
    delay(1000);
    digitalWrite(led_vermelho_esquerda, LOW);
    delay(1000);
    digitalWrite(led_vermelho_esquerda, HIGH);
    delay(1000);
    digitalWrite(led_vermelho_esquerda, LOW);
    delay(1000);

  }
}