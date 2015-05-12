int tempAigua = 100;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( tempAigua <= 90)
  {
    Serial.print("Aigua encara no bull");     // Si la temperatura de l'aigua és inferior a 90 graus escriu: Aigua encara no bull
  } 

  else if ( tempAigua <= 99)
  {
    Serial.print("Aigua apunt de bullir!");   //Si la temperatura de l'aigua  esta entre 90 i 99 graus escriu:  Aigua apunt de bullir!
  }
    else if ( tempAigua <= 100)
  {
    Serial.print("Aigua a 100 Graus C ");     //Si la temperatura de l'aigua  esta a 100 graus escriu:Aigua a 100 Graus C
  }
  
    else if ( tempAigua < 100)
  {
    Serial.print("Aigua Bullint");            // Si la temperatura de l'aigua és superior a 100 graus escriu: Aigua Bull
  }
  

}
void loop()   // we need this to be here even though its empty
{
}                // No fa res


//Quim Moreno
