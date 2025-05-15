/*
Exibir os números pares de 0 a 100.
*/
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for(int contador = 0; contador<=100; contador += 2){
  Serial.println(String(contador));
  }
  Serial.println();
  delay(2000);
}