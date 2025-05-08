/*
Faça um programa que receba um número inteiro do usuário e informe se este
número é positivo ou negativo.
*/  
 
//variáveis
  
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
  
  Serial.println("numero: " + String(numero));
  
  if(numero > 0){
   Serial.println("o numero e positivo.");
    
  } else {
   Serial.println("o numero e negativo."); 
    
  }
  Serial.println("---------------");
  delay(3000);
}
