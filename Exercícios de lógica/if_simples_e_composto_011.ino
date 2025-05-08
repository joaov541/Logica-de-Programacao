/*    
Faça um programa que receba o nome, cargo e salário de um funcionário. Se o
funcionário ganhar abaixo de 1000 reais, calcule o salário acrescido de 10%.
Ao final exiba o nome, o cargo e o salário desse funcionário.
*/

//variáveis
String nome = "";
String cargo = "";
float salario = 0;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("Digite seu nome");//informa a mensagem ao usuario
  while(! Serial.available());//espera o usuario digitar e dar <Enter>
  nome = Serial.readString();//captura o dado digitado pelo usuario
  
  Serial.println("Digite seu cargo");//informa a mensagem ao usuario
  while(! Serial.available());//espera o usuario digitar e dar <Enter>
  cargo = Serial.readString();//captura o dado digitado pelo usuario
  
  Serial.println("Digite seu salario");//informa a mensagem ao usuario
  while(! Serial.available());//espera o usuario digitar e dar <Enter>
  salario = Serial.parseFloat();//captura o dado digitado pelo usuario
  
  //processamento
  if(salario < 1000 ){//true
    //calcular novo salario
   salario = salario * 1.10;
  }//saida
  Serial.println();//pula linha
  Serial.println();

  Serial.println("nome: " + nome);
  Serial.println("cargo: " + cargo);
  Serial.println("salario reajustado: " + String(salario));
  Serial.println();//pula linha
  Serial.println();

  delay(3000);
}