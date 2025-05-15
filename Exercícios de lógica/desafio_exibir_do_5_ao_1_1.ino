/*
while - É uma estrutura de repetição que só executa repetição/laço enquanto
a condição for verdadeira.
*/
int numero1 = 0;//Variavel global

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //o 0 tambem conta.
  //while
  int contadorWhile = 5;//variavel local
  while(contadorWhile >= 1){
  Serial.println(String(contadorWhile));
  //contadorWhile = contadorWhile - 1;
   contadorWhile--;
    
  }
  Serial.println("-----------------");
  delay(7000);
}