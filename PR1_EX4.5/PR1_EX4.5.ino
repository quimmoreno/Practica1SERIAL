int sensorReading = 4;
/*
 0= FOSC
 1= MIG FOSC
 2= CLAR
 3= BRILLANT
 */
 
void setup()
{
  Serial.begin(9600);
  Serial.print("El dia és  "); // Escriu el dia és
   
  switch (sensorReading) {
  case 0:    
    Serial.println("Fosc"); // Si detecta 0 escriu fosc
    break;
  case 1:    
    Serial.println("Mig Fosc");  // Si detecta 1 escriu mig fosc
    break;
  case 2:    
    Serial.println("Clar ");  // Si detecta 2 escriu clar
    break;
  case 3:
    Serial.println("Brillant ");   // Si detecta 3 escriu brillant
    break;
  default:
    Serial.println("... No ho se!!!");  // Si detecta un altre valor escriu no ho se
  } 
}
void loop()
{
}

//  Quim Moreno
