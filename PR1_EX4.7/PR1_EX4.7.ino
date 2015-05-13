int comptar = 11;
void setup()                    // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a ");   // escriu ara comptare fins a
  Serial.println(comptar);   // escriu el nombre que es vol comptar i canvia de linea
  for (int i=0; i < comptar; i++)    //  /repatira aquest bucle fins arribar al un nombre abans del nombre desitjat.
  {
    Serial.print(i);   //Escriu el nombre sumat 
    Serial.print("-");   //Escriu un guio
  } 
  
  Serial.print(comptar); //escriu finalment l'ultim nombre i aixi no hi posa el guio.
}
void loop()     // we need this to be here even though its empty
{
}

//Quim Moreno
