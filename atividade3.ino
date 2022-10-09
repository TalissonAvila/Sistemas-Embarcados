int displayA = 22;
int displayB = 23;
int displayC = 4;
int displayD = 5;
int displayE = 18;
int displayF = 21;
int displayG = 19;
int ledAmarelo = 15;
int ledVerde = 13;
int ledInterno = 2;
void setup() {
  Serial.begin(115200);
  delay(1000);
  pinMode(displayA, OUTPUT);
  pinMode(displayB, OUTPUT);
  pinMode(displayC, OUTPUT);
  pinMode(displayD, OUTPUT);
  pinMode(displayE, OUTPUT);
  pinMode(displayF, OUTPUT);
  pinMode(displayG, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledInterno, OUTPUT);


  xTaskCreate(
  taskUm, /* Ponteiro a função da task criada*/
  "TaskUm", /* nome da task. */
  10000, /* tamanho da pilha em words. */
  NULL, /* Parâmetro passado como input da task */
  1, /* Prioridade da task. */
  NULL); /* Identificador da última task */
  xTaskCreate(taskDois,"TaskDois",10000,NULL,1,NULL);
}

void loop() {
digitalWrite(displayA, HIGH);  //Apaga todos os leds
digitalWrite(displayB, HIGH); 
digitalWrite(displayC, HIGH); 
digitalWrite(displayD, HIGH); 
digitalWrite(displayE, HIGH); 
digitalWrite(displayF, HIGH); 
digitalWrite(displayG, LOW);
trocaLed();  
digitalWrite(ledAmarelo, HIGH);
}

void trocaLed(){
digitalWrite(displayA, LOW);  //Seqüência do numero 9 
digitalWrite(displayB, LOW); 
digitalWrite(displayC, LOW); 
digitalWrite(displayD, LOW); 
digitalWrite(displayE, HIGH); 
digitalWrite(displayF, LOW); 
digitalWrite(displayG, LOW); 
delay(1000);

digitalWrite(displayA, LOW);  //Seqüência do numero 8 
digitalWrite(displayB, LOW); 
digitalWrite(displayC, LOW); 
digitalWrite(displayD, LOW); 
digitalWrite(displayE, LOW); 
digitalWrite(displayF, LOW); 
digitalWrite(displayG, LOW); 
delay(1000);  

digitalWrite(displayA, LOW);  //Seqüência do numero 7 
digitalWrite(displayB, LOW); 
digitalWrite(displayC, LOW); 
digitalWrite(displayD, HIGH); 
digitalWrite(displayE, HIGH); 
digitalWrite(displayF, HIGH); 
digitalWrite(displayG, HIGH); 
delay(1000);  

digitalWrite(displayA, LOW);  //Seqüência do numero 6 
digitalWrite(displayB, HIGH); 
digitalWrite(displayC, LOW); 
digitalWrite(displayD, LOW); 
digitalWrite(displayE, LOW); 
digitalWrite(displayF, LOW); 
digitalWrite(displayG, LOW); 
delay(1000);  
  
digitalWrite(displayA, LOW);  //Seqüência do numero 5 
digitalWrite(displayB, HIGH); 
digitalWrite(displayC, LOW); 
digitalWrite(displayD, LOW); 
digitalWrite(displayE, HIGH); 
digitalWrite(displayF, LOW); 
digitalWrite(displayG, LOW); 
delay(1000); 
 
digitalWrite(displayA, HIGH);  //Seqüência do numero 4 
digitalWrite(displayB, LOW); 
digitalWrite(displayC, LOW); 
digitalWrite(displayD, HIGH); 
digitalWrite(displayE, HIGH); 
digitalWrite(displayF, LOW); 
digitalWrite(displayG, LOW); 
delay(1000);
 
digitalWrite(displayA, LOW);  //Seqüência do numero 3 
digitalWrite(displayB, LOW); 
digitalWrite(displayC, LOW); 
digitalWrite(displayD, LOW); 
digitalWrite(displayE, HIGH); 
digitalWrite(displayF, HIGH); 
digitalWrite(displayG, LOW); 
delay(1000);
   
digitalWrite(displayA, LOW);  //Seqüência do numero 2 
digitalWrite(displayB, LOW); 
digitalWrite(displayC, HIGH); 
digitalWrite(displayD, LOW); 
digitalWrite(displayE, LOW); 
digitalWrite(displayF, HIGH); 
digitalWrite(displayG, LOW); 
delay(1000);

digitalWrite(displayA, HIGH);  //Seqüência do numero 1 
digitalWrite(displayB, LOW); 
digitalWrite(displayC, LOW); 
digitalWrite(displayD, HIGH); 
digitalWrite(displayE, HIGH); 
digitalWrite(displayF, HIGH); 
digitalWrite(displayG, HIGH); 
delay(1000); 
 
digitalWrite(displayA, LOW);  //Seqüência do numero 0 
digitalWrite(displayB, LOW); 
digitalWrite(displayC, LOW); 
digitalWrite(displayD, LOW); 
digitalWrite(displayE, LOW); 
digitalWrite(displayF, LOW); 
digitalWrite(displayG, HIGH); 
delay(1000);

digitalWrite(displayA, HIGH);  //Apaga todos os leds
digitalWrite(displayB, HIGH); 
digitalWrite(displayC, HIGH); 
digitalWrite(displayD, HIGH); 
digitalWrite(displayE, HIGH); 
digitalWrite(displayF, HIGH); 
digitalWrite(displayG, HIGH);
}

  void taskUm( void * parameter ){
    for( int i = 0;i<10;i++ ){
  Serial.println("task SanUSB 1");
  digitalWrite(ledVerde, HIGH);
  //delay(900);
  vTaskDelay(900);
  digitalWrite(ledVerde, LOW);
  vTaskDelay(900);
  //delay(900);
    }
 // Serial.println("Final da task SanUSB 1");
  //vTaskDelete( NULL );
  }

void taskDois( void * parameter){
  for( int i = 0;i<10;i++ ){
    Serial.println("task SanUSB 2");
  digitalWrite(ledAmarelo, HIGH);
  //delay(2300);
  vTaskDelay(2300);
  digitalWrite(ledAmarelo, LOW);
  //delay(2300);
  vTaskDelay(2300);
  }
}

