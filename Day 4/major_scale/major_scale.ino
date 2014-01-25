void note(int freq, int length)
{
  tone(3, freq);
  delay(length * 250);
}

void setup()
{
  pinMode(2, OUTPUT);
  digitalWrite(2, LOW);
  pinMode(3, OUTPUT);
  digitalWrite(3, LOW);
}

int DO = 262;
int RE = 294;
int MI = 330;
int FA = 349;
int SO = 392;
int LA = 440;
int TI = 494;
int DO2 = 523;

void loop()
{
  note(DO, 1);
  note(RE, 1);
  note(MI, 1);
  note(FA, 1);
  note(SO, 1);
  note(FA, 1);
  note(TI, 1);
  note(DO2, 1);
}
