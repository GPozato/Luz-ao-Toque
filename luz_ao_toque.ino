// C++ code
//
int sinal = 0;

void setup()
{
  pinMode(10, INPUT);
  pinMode(8, OUTPUT);

  sinal = 0;
}

void loop()
{
  sinal = digitalRead(10);
  if (sinal == 0) {
    digitalWrite(8, LOW);
    sinal = 1;
  } else {
    digitalWrite(8, HIGH);
    sinal = 0;
  }
  delay(200); // Wait for 200 millisecond(s)
}
