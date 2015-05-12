int a = 5;
int b = 10;
int c = 20;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  Serial.println("Here is some math: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("c = ");
  Serial.println(c);

  Serial.print("a + b = ");       // SUMA
  Serial.println(a + b);

  Serial.print("a * c = ");       // MULTIPLICACIO
  Serial.println(a * c);
  
  Serial.print("c / b = ");       // DIVISIO
  Serial.println(c / b);

  Serial.print("c % b = ");       // %
  Serial.println(c % b);
  
  Serial.print("b - c = ");       // RESTA
  Serial.println(b - c);
}

void loop()  //NO FER RES
{
}
 //Quim Moreno
