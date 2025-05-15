/*
Exibir os números pares de 60 a 80 e ímpares de 81 a 101 no mesmo laço while.
*/

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("numeros pares");
  for(int contador = 60; contador<=80; contador += 2){
  Serial.println(String(contador));
  }
  delay(4000);
  Serial.println("------------------");
  Serial.println("numeros impares");

  for(int contador2 = 81; contador2 <=101; contador2 +=2){
  Serial.println(String(contador2));
  }
  delay(4000);
}