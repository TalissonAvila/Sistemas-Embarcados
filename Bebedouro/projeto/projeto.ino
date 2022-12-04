#define Pir D0
#define Rele D1
int WaitTime = 600000; // 10 minutos de tempo de espera
int OnTime = 60000; // 60 segundos de tempo On
int tempo = 0;
void setup() {
  pinMode (Pir, INPUT);
  pinMode(BUILTIN_LED, OUTPUT);
  digitalWrite(BUILTIN_LED, LOW);
  pinMode(Rele, OUTPUT);

}

void loop() {
 int state = digitalRead(Pir);
 delay (500);
 tempo = tempo + 500;
 if ((state == HIGH) and (tempo >= WaitTime)){
  digitalWrite(Rele, LOW);
  delay(OnTime);
  tempo = 0;
 }
 else{
    digitalWrite(Rele, HIGH);
 }

}
