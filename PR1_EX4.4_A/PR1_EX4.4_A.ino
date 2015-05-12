int  KgCO2m2  = 3;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( KgCO2m2 < 3,5 )
  {
    Serial.print("Qualificació Energetica Tipus A");     // Si el valor de KgCO2/m2 és inferior a 3,5 escriurà "Qualificació Energetica Tipus A"
  } 

 else if ( KgCO2m2 < 6,5 )
  {
    Serial.print("Qualificació Energetica Tipus B");     // Si el valor de KgCO2/m2 és inferior a 6,5 escriurà "Qualificació Energetica Tipus B"
  } 
  
  else if ( KgCO2m2 < 11,1 )
  {
    Serial.print("Qualificació Energetica Tipus C");     // Si el valor de KgCO2/m2 és inferior a 11,1 escriurà "Qualificació Energetica Tipus C"
  } 
  
 else if ( KgCO2m2 < 17,7 )
  {
    Serial.print("Qualificació Energetica Tipus D");     // Si el valor de KgCO2/m2 és inferior a 17,7 escriurà "Qualificació Energetica Tipus D"
  } 

 else if ( KgCO2m2 < 38,2 )
  {
    Serial.print("Qualificació Energetica Tipus E");     // Si el valor de KgCO2/m2 és inferior a 38,2 escriurà "Qualificació Energetica Tipus E"
  } 

else if ( KgCO2m2 < 43,2 )
  {
    Serial.print("Qualificació Energetica Tipus F");     // Si el valor de KgCO2/m2 és inferior a 38,2 escriurà "Qualificació Energetica Tipus F"
  } 
else if ( KgCO2m2 >= 38,2 )
  {
    Serial.print("Qualificació Energetica Tipus G");     // Si el valor de KgCO2/m2 és inferior a 38,2 escriurà "Qualificació Energetica Tipus G"
  } 

}
void loop()   // we need this to be here even though its empty
{
}                // No fa res


//Quim Moreno
