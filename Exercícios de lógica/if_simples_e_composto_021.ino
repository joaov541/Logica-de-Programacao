/*
Uma empresa decide dar aumento de 30% aos funcionários cujo salário é
inferior a 500 reais. Escreva um programa que receba o salário de um
funcionário e imprima o valor do salário reajustado ou uma mensagem caso o
funcionário não tenha direito a aumento.
*/

//variaveis

float salario = 0;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("digite seu salario.");
  while (! Serial.available());
  salario = Serial.parseFloat();
  
  //processamento
  Serial.println("seu salario: R$" + String(salario));

  
  if(salario < 500 ){
  
  salario = salario * 1.3;
    
  Serial.println("salario reajustado em 30%: R$" + String(salario));
   
  } else {
  Serial.println("Seu salario ja esta acima de R$500, portanto, nao tem direito ao reajuste.");
  }   
  Serial.println();
  Serial.println("---------------------------------");
  delay(4000);
}