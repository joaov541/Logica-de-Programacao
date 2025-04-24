// C++ code
//
void setup()
{
  Serial.begin(9600);
}

//Inicialização de Variáveis
int caixaPequena = 0;// -32767 até 32767
long caixaGrande = 0;// -2147483648 até 2147483647

void loop()
{
  caixaPequena = 32767;
  caixaGrande = 32767;
  Serial.println(caixaPequena);
  Serial.println(caixaGrande);
  delay(20000);
}