//Faça um programa que receba um número e exiba o seu dobro.

//Variáveis
int numero = 0;
int dobro = 0;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //cabeçalho
  Serial.println("|------------------------------|");//Primeira Linha
  Serial.println("|                              |");
  Serial.println("|                              |");
  Serial.println("|          LOPAL-EX_03         |");
  Serial.println("|                              |");
  Serial.println("|                              |");
  Serial.println("|------------------------------|");//Ultima linha
  //Entrada
  //Digitar o número
  Serial.println("Digite um numero");
  while (! Serial.available() ) {}
  numero = Serial.parseInt();
    
  //Processamento
  dobro = numero * 2;
  
  //Saída
  Serial.println("Numero digitado e: " + String(numero) );
  Serial.println("Dobro do numero e: " + String(dobro) );
  delay (6000);
  
}