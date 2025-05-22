// C++ code
//

#include <Servo.h>

Servo motor;


int palpite;
int verde = 7;
int vermelho = 12;
int azul1 = 4;
int azul2 = 3;
int azul3 = 2;
int acerto = 0;
void setup()
{
  Serial.begin(9600);
  random(analogRead(0));//inicia e normalize a porta
  motor.attach(13);
  motor.write(0);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);

  
}

void desenhaCabecalho()
{
  Serial.println("---JOGO DO DADO---");
  Serial.println("");
  delay(2000);
}

void desenhaPontinho(int qtdPontos = 5, int tempo = 700)
{
  for(int i = 1; i <= qtdPontos; i++)
  {
    Serial.print(".");
    delay(tempo);
  }
}

void loop()
{
  desenhaCabecalho();

  //solicitar palpite do usuario
  Serial.println("Digite seu palpite de 1 a 6");
  while(!Serial.available());  
  palpite = Serial.parseInt();

  //jogar dado
  int numeroSorteado = random(1, 7); //Sorteia um numero de 1 até 7 - 1, ou seja 6


  Serial.print("Jogando dado ");
  desenhaPontinho();
  Serial.println();
  
  //exibir o palpite do usuario
  Serial.println();

  Serial.print("Seu Palpite: " + String(palpite));
  Serial.println();


  //exibif numero sorteado
  Serial.println("Numero do Dado: " + String(numeroSorteado));
  Serial.println("");

  if(palpite == numeroSorteado)
  {
     
    digitalWrite(7, HIGH);
    delay(600);
    digitalWrite(7, LOW);
      
    Serial.println("Parabens, voce acertou!!!");
  } else{
    
    digitalWrite(12, HIGH);
    delay(600);
    digitalWrite(12, LOW);
 
    
    Serial.println("Que pena! Tente outra vez");
  }
  
  for(acerto = 1; acerto <=3; acerto++){
  
    if(acerto == 1){
    
      digitalWrite(4, HIGH);
    
    } else if( acerto = 2){
    
     digitalWrite(3, HIGH);

   } else {
     
   digitalWrite(2, HIGH);
  
    }
  }
 
}
