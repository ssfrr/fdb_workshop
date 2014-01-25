void setup()
{
  pinMode(2, OUTPUT);
  digitalWrite(2, LOW);
  pinMode(3, OUTPUT);
  digitalWrite(3, LOW);
}

void loop()
{
  int pressure = analogRead(A0);
  if(pressure < 10)
  {
    noTone(3);
  }
  else
  {
    tone(3, 100 + pressure / 2);
  }
}
