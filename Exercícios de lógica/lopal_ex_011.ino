//Faça um programa que receba a idade de uma pessoa em anos e
//imprima essa idade em: Meses, Dias, Horas, Minutos.

//Variáveis
int idade = 0;//inicia a idade
int idadeMeses = 0;
int idadeDias = 0;
long idadeHoras = 0;
long idadeMinutos = 0;


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
  Serial.println("|          LOPAL-EX_01         |");
  Serial.println("|                              |");
  Serial.println("|                              |");
  Serial.println("|------------------------------|");//Ultima linha
  //Entrada
  Serial.println("Digite a sua idade");//pergunta a idade do usuário
  while(! Serial.available() ) {}//Aguarda o usuário digitar
  idade = Serial.parseInt();
  
  //Processamento
  idadeMeses = idade*12;
  idadeDias = idade*365;
  idadeHoras = idade*8766;
  idadeMinutos = idade*525960;
  
  //Saída
  Serial.println("Sua idade em meses: " + String(idadeMeses) );
  Serial.println("Sua idade em Dias: " + String(idadeDias) );
  Serial.println("Sua idade em Horas: " + String(idadeHoras) );
  Serial.println("Sua idade em minutos: " + String(idadeMinutos));
  delay (6000);
}