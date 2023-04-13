int pot=A0;
int pot2=A1;
int pot3=A2;
int lectura;
int lectura1;
int lectura2;
int led=3;
int led2=5;
int led3=6;

void setup()
{
  Serial.begin(9600);
  pinMode(pot,INPUT);
  pinMode(pot2,INPUT);
  pinMode(pot3,INPUT);
  pinMode(led,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}
void loop()
{
  lectura = analogRead(pot)/4;
  analogWrite(led,lectura);
  Serial.println(lectura);
  Serial.print("Blue    ");
  delay(1000);

  lectura1 = analogRead(pot2)/4;
  analogWrite(led2,lectura1);
  Serial.println(lectura1);
  Serial.print("red     ");
  delay(1000);

  
  lectura2 = analogRead(pot3)/4;
  analogWrite(led3,lectura2);
  Serial.println(lectura2);
  Serial.print("Green    ");
  delay(1000);
  
}