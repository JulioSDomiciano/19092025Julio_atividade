// C++ code
//
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  
}

void loop()
{
  digitalWrite(11, HIGH);
  delay(1000); // aguarde 1000 millisecond(s) ligado
  digitalWrite(11, LOW);
  delay(1000); // aguarde 1000 millisecond(s) desligado
  digitalWrite(9, HIGH);
  delay(500); // aguarde 500 millisecond(s) ligado
  digitalWrite(9, LOW);
  delay(500); // aguarde 500 millisecond(s) desligado
  
  digitalWrite(10, HIGH);
  delay(700); // aguarde 700 millisecond(s) ligado
  digitalWrite(10, LOW);
  delay(700); // aguarde 700 millisecond(s) desligado

  digitalWrite(9, HIGH);
  delay(500); // aguarde 500 millisecond(s) ligado
  digitalWrite(9, LOW);
  delay(500); // aguarde 500 millisecond(s) desligado
  
  digitalWrite(9, HIGH);
  delay(500); // aguarde 500 millisecond(s) ligado
  digitalWrite(9, LOW);
  delay(500); // aguarde 500 millisecond(s) desligado
}


