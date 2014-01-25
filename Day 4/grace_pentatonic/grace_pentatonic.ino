const int NUM_BTNS = 5;
const int PIN_BTNS[] = {8, 9, 10, 11, 12};
const int PIN_POS = 3;
const int PIN_NEG = 2;
const int FREQ_BASE = 220; // A3
const int NUM_NOTES = 9;
// start with the minor pentatonic, add in between notes and octave up
const int NOTE_STEPS[] = {0, 2, 3, 4, 5, 6, 7, 10, 12};

int note_freqs[NUM_NOTES];

int get_note()
{
  int btn_state[NUM_BTNS];
  for(int i = 0; i < NUM_BTNS; ++i)
  {
     btn_state[i] = !digitalRead(PIN_BTNS[i]);
  }
  for(int i = 0; i < NUM_BTNS - 1; ++i)
  {
     if(btn_state[i] && btn_state[i+1])
     {
       return note_freqs[2 * i + 1];
     }
     else if(btn_state[i])
     {
       return note_freqs[2 * i];
     }
  }
  if(btn_state[NUM_BTNS - 1])
  {
     return note_freqs[2 * (NUM_BTNS - 1)];
  }
  return -1;
}

void setup()
{
  for(int i = 0; i < NUM_NOTES; ++i)
  {
     note_freqs[i] = (float)FREQ_BASE * pow(2.0, NOTE_STEPS[i] / 12.0);
  }
  pinMode(PIN_POS, OUTPUT);
  pinMode(PIN_NEG, OUTPUT);
  digitalWrite(PIN_POS, LOW);
  digitalWrite(PIN_NEG, LOW);
  for(int i = 0; i < NUM_BTNS; ++i)
  {
     pinMode(PIN_BTNS[i], INPUT_PULLUP);
  }
}

void loop()
{
   int note = get_note(); // returns a frequency
   if(note < 0)
   {
     noTone(PIN_POS);
   }
   else
   {
     tone(PIN_POS, note);
   }
}
