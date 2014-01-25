void note(int freq, int length)
{
  long endTime = millis() + length * 240;
  while(millis() < endTime)
  {
    float freq_scale = 1 + (float)analogRead(A0) / 512;
    tone(3, (int)(freq * freq_scale));
  }
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
  
  note(DO, 2);
  note(RE, 2);
  note(MI, 2);
  note(DO, 2);
  
  note(MI, 2);
  note(FA, 2);
  note(SO, 4);
  
  note(MI, 2);
  note(FA, 2);
  note(SO, 4);
  
  note(SO, 1);
  note(LA, 1);
  note(SO, 1);
  note(FA, 1);
  note(MI, 2);
  note(DO, 2);
  
  note(SO, 1);
  note(LA, 1);
  note(SO, 1);
  note(FA, 1);
  note(MI, 2);
  note(DO, 2);
  
  note(DO, 2);
  note(SO, 2);
  note(DO, 4);
  
  note(DO, 2);
  note(SO, 2);
  note(DO, 4);
}
