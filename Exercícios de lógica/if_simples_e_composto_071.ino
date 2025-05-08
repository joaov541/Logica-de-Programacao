/*
Faça um programa receba dois valores e imprima qual é o maior número
digitado.
*/

//variáveis
int numero1 = 0;
int numero2 = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
 Serial.println("Digite o primeiro numero.");
 while (! Serial.available());
 numero1 = Serial.parseInt();
  
  
 Serial.println("Digite o segundo numero.");
 while (! Serial.available());
 numero2 = Serial.parseInt();
  
  if(numero1 > numero2){
   Serial.println("primeiro numero e maior" + String(numero1));
   
  } else {
  Serial.println("Segundo numero e maior" + String(numero2));
  }  
    Serial.println();
  delay(4000);
}