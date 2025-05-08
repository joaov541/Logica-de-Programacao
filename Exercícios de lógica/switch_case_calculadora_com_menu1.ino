
//variáveis
float numero1 = 0;
float numero2 = 0;
float soma; 
float subtracao;
float multiplicacao;
float divisao;
int escolhaDaOperacao;
int contador = 0;

void setup()
{
  Serial.begin(9600);
  
  
  do{
    Serial.println("Bem-vindo(a) a calculadora mega inteligente!!!");
    Serial.println("Escolha uma das operacoes:");
    Serial.println("1- somar");
    Serial.println("2- subtracao");
    Serial.println("3- multiplicar");
    Serial.println("4- Dividir");
    while(!Serial.available()){}

    escolhaDaOperacao = Serial.parseInt();// Armazena o que o usuário digitou na variável

    Serial.println("Agora, para realizar a operacao, digite o primeiro numero:");
    while(! Serial.available());
    numero1 = Serial.parseFloat();

    Serial.println("Digite o segundo numero.");
    while(! Serial.available());
    numero2 = Serial.parseFloat();
     
  
  
  switch(escolhaDaOperacao){
      case 1:
       soma = numero1+numero2;
      Serial.println("WOW!!! o resultado foi: " + String(soma)); 
      break;
    
    case 2:
      subtracao = numero1-numero2;
      Serial.println("WOW!!! o resultado foi: " + String(subtracao));
      break;
    
    case 3:
      multiplicacao = numero1*numero2;
      Serial.println("WOW!!! o resultado foi: " + String(multiplicacao));
      break;
    
    case 4:
      divisao = numero1/numero2;
      Serial.println("WOW!!! o resultado foi: " + String(divisao));
      break;
    
    default:
    Serial.println("opcao invalida");
  	}
  }
    while(contador != 0);
 }

  void loop()
  {
  //sem código
  }
  