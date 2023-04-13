int pinAnalogico=0;
int valorResistencia = 0;           
int Entrada = 5;         
float salida = 0;       
float R1 = 1000;       
float R2 = 0;          
float vt = 0;    

void setup()
{
  Serial.begin(9600);             

}

void loop()
{
  valorResistencia = analogRead(pinAnalogico);  
  if(valorResistencia)
    {
        vt = valorResistencia * Entrada;
        salida = vt /1023.0;  
        vt = (Entrada / salida) - 1;
        R2 = R1 / vt;
        Serial.println(salida);                    
        Serial.println(R2);             
        delay(1000);
   }
}