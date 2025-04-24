//Faça um programa que receba a medida em polegadas e exiba esse número em
//centímetros.

// Variáveis
int polegadas = 0;
int cm = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Entrada
  Serial.println("Digite a medida em polegadas: ");
  while (!Serial.available()) {}
  polegadas = Serial.parseInt();

  // Processamento
  cm = polegadas * 2.54;

  // Saída
  Serial.print("Medida em cm: ");
  Serial.print(cm / 10); // parte inteira
  Serial.print(".");
  Serial.println(cm % 10); // parte decimal

  // Limpa o buffer
  while (Serial.available()) { Serial.read(); }

  delay(5000);
}