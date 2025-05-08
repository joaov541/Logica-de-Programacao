/*
Faça um programa que receba um número do usuário e informe se este
número é par ou ímpar.
*/  
int numero = 0;  

void setup()
{
  Serial.begin(9600);
}

void loop()
{
 Serial.println("Digite um numero.");
  while(! Serial.available());
  numero = Serial.parseInt();
  
  if(numero % 2 == 0) {//se for par
   Serial.println("numero e par.");
   
  } else { 
   Serial.println("numero e impar");
  }
  Serial.println("--------------");
  delay(3000);
}