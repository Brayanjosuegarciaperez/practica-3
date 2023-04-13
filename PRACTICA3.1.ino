int BOTE=A0;
int Lectura;
int led=3;
 
void setup()
{
  Serial.begin(9600);
  pinMode(POT,INPUT);
  pinMode(led,OUTPUT);
  
}
void loop()
{
  Lectura = analogRead(POT)/4;
  analogWrite(led,Lectura);
  Serial.println(Lectura);
  delay(100);
  
}