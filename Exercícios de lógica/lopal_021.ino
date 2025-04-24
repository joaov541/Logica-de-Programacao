//Faça um programa que receba o ano de nascimento de uma pessoa e
//o ano atual. Calcule e imprima:
//a. A idade dessa pessoa
//b. Essa idade convertida em semana

//Variáveis
int anoNascimento = 0;
int anoAtual = 0;
int idade = 0;
int idadeSemanas = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //Entrada
  //Ano Nacimento
  Serial.println("Digite seu ano de nascimento");
  while (! Serial.available() ) {}
  anoNascimento = Serial.parseInt();
  
  //Ano Atual
  Serial.println("Digite seu ano atual");
  while (! Serial.available() ) {}
  anoAtual = Serial.parseInt();
  
  //Processamento
  idade = anoAtual - anoNascimento;
  idadeSemanas = idade * 52;
  
  
  
  //Saída
  Serial.println("Seu ano de Nascimento: " + String(anoNascimento) );
  Serial.println("Seu ano Atual: " + String(anoAtual) );
  Serial.println("Sua idade: " + String(idade) );
  Serial.println("Sua idade em Semanas: " + String(idadeSemanas) );
}