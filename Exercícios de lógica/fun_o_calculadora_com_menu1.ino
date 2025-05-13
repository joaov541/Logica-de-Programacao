
//variáveis

float subtracao;
float multiplicacao;
float divisao;
int escolhaDaOperacao;
int contador = 0;
float resultado = 0;
float somar(float numero1,float numero2 ,float numero3 = 0){

   return (numero1 + numero2 + numero3);  
}
 
float subtrair(float numero1, float numero2){

return (numero1-numero2);

}

float multiplicar(float numero1,float numero2){
return (numero1*numero2);

}

float dividir(float numero1, float numero2){
return (numero1 / numero2);
  
}



void setup()
{
  Serial.begin(9600);
  
float numero1 = 0;
float numero2 = 0;
  
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
    resultado = somar(numero1, numero2, 5);
      Serial.println("WOW!!! o resultado foi: " + String(resultado));
      //Serial.println("WOW!!! o resultado foi: " + String(somar()));  segunda opção

      break;
    
    case 2:
    resultado = subtrair(numero1, numero2);
      Serial.println("WOW!!! o resultado foi: " + String(resultado));
      break;
    
    case 3:
    resultado = multiplicar(numero1, numero2);
      Serial.println("WOW!!! o resultado foi: " + String(resultado));
      break;
    
    case 4:
    resultado = dividir(numero1, numero2);
      Serial.println("WOW!!! o resultado foi: " + String(resultado));
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
  