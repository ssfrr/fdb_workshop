void note(int freq, int length)
{
  tone(3, freq);
  delay(length * 240);
  noTone(3);
  delay(length * 10);
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
  note(DO, 2);
  note(RE, 2);
  note(MI, 2);
  note(DO, 2);
  
  note(DO, 1);
  note(RE, 1);
  note(RE, 1);
  note(DO, 1);
  
  note(MI, 2);
  note(FA, 2);
  note(SO, 4);
  
  note(MI, 2);
  note(FA, 2);
  note(LA, 4);
  
  note(SO, 1);
  note(LA, 1);
  note(SO, 1);
  note(FA, 1);
  note(MI, 2);
  note(DO, 2);
  
  note(MI, 1);
  note(LA, 1);
  note(SO, 1);
  note(LA, 1);
  note(MI, 2);
  note(DO, 2);
  
  note(DO, 2);
  note(SO, 2);
  note(DO, 4);
  
  note(DO, 2);
  note(SO, 2);
  note(DO, 4);
}
