  void setup() {
  Serial.begin(112500);
  delay(1000);
  pinMode(2, OUTPUT); //pino com LED desfault na placa ESP32 DEVKIT
  pinMode(4, OUTPUT);
  pinMode(15, OUTPUT);


  
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
  digitalWrite(2, HIGH);
  //delay(500);
  vTaskDelay(200);
  digitalWrite(2, LOW);
  //delay(500);
  vTaskDelay(200);
  }
  
  void taskUm( void * parameter )
  {
  for( int i = 0;i<10;i++ ){
  Serial.println("task SanUSB 1");
  digitalWrite(4, HIGH);
  //delay(900);
  vTaskDelay(900);
  digitalWrite(4, LOW);
  vTaskDelay(900);
  //delay(900);
  }
 // Serial.println("Final da task SanUSB 1");
  //vTaskDelete( NULL );
  }
  
  void taskDois( void * parameter)
  {
  for( int i = 0;i<10;i++ ){
    Serial.println("task SanUSB 2");
  digitalWrite(15, HIGH);
  //delay(2300);
  vTaskDelay(2300);
  digitalWrite(15, LOW);
  //delay(2300);
  vTaskDelay(2300);
  }
 // Serial.println("Final da task SanUSB 2");
 // vTaskDelete( NULL );
  }
