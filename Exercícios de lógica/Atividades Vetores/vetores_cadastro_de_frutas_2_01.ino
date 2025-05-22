// C++ code

//variaveis
String frutas[6]; // cria um vetor de tamanho 6
float precosFrutas[6];


void setup()
{
  Serial.begin(9600);

  Serial.println("*** PROGRAMA SACOLAO DO ZEH ***");
  Serial.println();

  Serial.println("Oh ZEH, bora cadastrar as frutas");
  Serial.println();

  for (int i = 0; i <= 5; i++) {
    
    Serial.println("Informa a " + String(i + 1) + " fruta: ");
    while (!Serial.available());
    String frutaDigitada = Serial.readString();
    
    Serial.println("qual o preco de " + frutaDigitada + "?");
    while (!Serial.available());
    float precoDigitado = Serial.parseFloat();
    
    frutas[i]= frutaDigitada;
    precosFrutas[i] = precoDigitado;
  }

  // Mostra a primeira fruta cadastrada como teste
  Serial.println("Exibindo valores cadastrados:");
  Serial.println();
  
  for(int i = 0; i<=5; i++ ){    
  Serial.println(String(i + 1) + "a fruta: " + frutas[i]);
  Serial.println("preco da fruta: R$" + String(precosFrutas[i]));
    
  }
}

void loop()
{
  
}
