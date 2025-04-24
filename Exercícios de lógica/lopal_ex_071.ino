//Faça um programa que receba o nome, cargo e salário de um funcionário. Calcule o
//salário acrescido de 10%. Ao final exiba o nome, o cargo e o novo salário desse
//funcionário.

//Variáveis
String nome = "";
String cargo = "";
float salario = 0;
float novoSalario = 0;

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
  Serial.println("|          LOPAL-EX_07         |");
  Serial.println("|                              |");
  Serial.println("|                              |");
  Serial.println("|------------------------------|");//Ultima linha
  
  //Entrada
  //Digite o nome
  Serial.println("Digite seu nome");
  while (!Serial.available());
  nome = Serial.readString();
  
  //Digite seu cargo
  Serial.println("Digite seu cargo");
  while (!Serial.available());
  cargo = Serial.readString();
  
  //Digite seu salário
  Serial.println("Digite seu salario");
  while (!Serial.available());
  salario = Serial.parseFloat();
  
  //Processamento
  novoSalario = salario * 1.10;
  
  //Saída
  Serial.println();
  Serial.println("Seu nome: " + nome);
  Serial.println("Seu cargo: " + cargo);
  Serial.println("Seu Salario: " + String(salario));
  Serial.println("Seu novo Salario: " + String(novoSalario));
  Serial.println();
  delay (6000);
}