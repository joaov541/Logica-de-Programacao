//Cadastro de convidados-Vetores

//variáveis
String convidados[4];//cria um vetor tamanho 4

int idadeConvidados[4];
  
String emailConvidados[4];


void desenhaCabecalho(){
  Serial.println("CHURRASCO DA FAMILIA NASCIMENTO");
  Serial.println();
  delay(4000);
  Serial.println("Seja bem vindo(a) ao nosso churrasco, para entrar, vamos fazer o seu cadastro!!");
  Serial.println();
  Serial.println();
  delay(2000);

}



void setup()
{
  Serial.begin(9600); 
}

void loop()
{
  desenhaCabecalho(); 
  for(int i = 0; i <= 3; i++){
    
  //solicite o nome do usuário
   Serial.println("Informe " + String(i+1)+ " o nome para cadastro");
   while(!Serial.available());
   convidados[i] = Serial.readString();
   
      
  //solicite a idade
   Serial.println("Informe a idade de  " + convidados[i]);
   while(!Serial.available());
   idadeConvidados[i] = Serial.parseInt();
       
    
  //solicite o email  
   Serial.println("Informe o email de " + convidados[i]);
   while(!Serial.available());
   emailConvidados[i] = Serial.readString();
   Serial.println();
   Serial.println();
  
  
  } //fim do for
  
  //exibir a lista de convidados
  //obs: só vai na festa quem for maior de idade >=18
  //exibir com o print cada um dos arrays
  //pular linha
    Serial.println("Exibindo convidads eleitos para a festa");
  
   for(int i = 0; i <= 3; i++){

  // if(idadeConvidados[i] >= 18){  
  Serial.println("nome: " + convidados[i]);
  
  Serial.println("idade: " + String(idadeConvidados[i])+ "anos");

  Serial.println("email: " + emailConvidados[i]);
     Serial.println("Permissao para a festa: " + String(idadeConvidados[i] >= 18 ? "OK" : "Menor de Idade"));
     
  Serial.println("-------------------------");
   Serial.println();

    
  }  
  
  Serial.println();
  delay(2000);
}