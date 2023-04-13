int interna=A4;
int lectura;
int led =11;
int led2 =5;
int led3 =6;
int led4 =9;
int led5 =10;

void setup()
{
Serial.begin(9600);
  pinMode(pot,INPUT); //pinde todos
  pinMode(led,OUTPUT);//pinde todos
  pinMode(led2,OUTPUT);  //pinde todos
  pinMode(led3,OUTPUT);  //pinde todos
  pinMode(led4,OUTPUT);   //pinde todos
  pinMode(led5,OUTPUT);   //pinde todos
}

void loop(){
  
  lectura = analogRead(pot);  //lectura
  if(lectura >= 200 && lectura <= 1023){
  digitalWrite(led,HIGH);
  Serial.println(lectura);
  }
  
  
  digitalWrite(led,LOW);  //led de la 1 a la 2
  if(lectura >= 200 && lectura <= 1023){  //led de la 1 a la 2
  digitalWrite(led2,HIGH);   //led de la 1 a la 2
  Serial.println(lectura);   //led de la 1 a la 2
  }
  
  
  digitalWrite(led2,LOW);   //led de la 2 a la 3
  if(lectura >= 800 && lectura <= 1023){   //led de la 2 a la 3
  digitalWrite(led3,HIGH);   //led de la 2 a la 3
  Serial.println(lectura);   //led de la 2 a la 3
  }
  
  
  digitalWrite(led3,LOW);
  if(lectura >= 800 && lectura <= 1023){
  digitalWrite(led4,HIGH);
  Serial.println(lectura);
  }
  
  
  digitalWrite(led4,LOW);
  if(lectura >= 1023 && lectura <= 1023){
  digitalWrite(led5,HIGH);
  Serial.println(lectura);
  }
  
  digitalWrite(led5,LOW);
}