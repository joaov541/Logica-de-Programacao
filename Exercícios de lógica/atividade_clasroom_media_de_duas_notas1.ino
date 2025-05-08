/*
Calcule a média entre duas notas.
Verifique se o aluno foi aprovado:
Aprovado se média é MAIOR OU IGUAL A 6 e SE A frequência É MAIOR OU IGUAL 75%.
Caso contrário, exiba se foi reprovado por nota, por frequência ou por ambos.
Se a média for exatamente 10, exiba: "Parabéns! Nota máxima!
*/


//variáveis
float nota1 = 0;
float nota2 = 0;
float media = 0;
float frequencia = 0;
float percentual = 0;

void setup()
{ 
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite a primeira nota.");
  while(! Serial.available());
  nota1 = Serial.parseFloat();
  
  Serial.println("Digite a segunda nota.");
  while(! Serial.available());
  nota2 = Serial.parseFloat();
  
  Serial.println("Digite o percentual.");
  while(! Serial.available());
  percentual = Serial.parseFloat();
  
  frequencia = frequencia + (percentual /100 * percentual);//pegue de exemplo a estrutura da porcentagem.
  
  media = (nota1+nota2) / 2;
  
  Serial.println("primeira nota: " + String(nota1));
  Serial.println("segunda nota: " + String(nota2));
  Serial.println("percentual: " + String(percentual));
  Serial.println("frequencia: " + String(frequencia));
  Serial.println("media: " + String(media));

  
    
   if(media >= 6){
   Serial.println("aprovado");
   
  } else if(frequencia >= 75){
   Serial.println("aprovado.");
     
   } else if(media = 10){
  Serial.println("Parabéns! Nota máxima!");
  
  } else {
  Serial.println("reprovado");
  }
}

/*Consegui completar o código, porem a mensagem de nota maxima não aparece.
não tive dificuldade, apenas na conta de porcentagem, tive medo de não conseguir
terminar o código, porem fiz mais do que imaginava, e estou feliz, preciso apenas aperfeiçoar.