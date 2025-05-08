
//Enviar 1 para acender o LED 1 (verde)
//Enviar 2 para acender o LED 2 (vermelho)
//Enviar 0 para apagar ambos


// criar as variáveis
String opcao = "";
int led1 = 5;
int led2 = 6;

void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

  Serial.println("Digite 1 (LED1), 2 (LED2), ou 0 (apagar):");
}

void loop() {
  if (Serial.available() > 0) {
    opcao = Serial.readString();

    if (opcao == "1") {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
      Serial.println("LED 1 aceso.");
    }

    if (opcao == "2") {
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      Serial.println("LED 2 aceso.");
    }

    if (opcao == "0") {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      Serial.println("Ambos os LEDs apagados.");
    }
  }
}


