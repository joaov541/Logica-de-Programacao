// C++ code
//
int numero;
int resultado;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Bem vindo(a).");
  Serial.println("Escolha um numero para mostrar sua taboada");
  while(!Serial.available());
  numero = Serial.parseInt();
  
  for(int contador = 1; contador <= 10; contador++){
    resultado = numero * contador;
    Serial.println(String(numero) + " x " + String(contador) + " = " + String(resultado));
  }  
  delay(3000);
}