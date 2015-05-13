int drive_gb = 100;
long drive_mb;
long drive_kb;
long real_drive_mb;
long real_drive_kb;
long kb_perduts;

void setup()               //run once, when the sketch starts
{
  Serial.begin(9600);       //set up Serial library at 9600 bps

  Serial.print("Your HD is "); //Escriure frase
  Serial.print(drive_gb);   //Escriu el valor dels GB
  Serial.println(" GB large.");  //Escriure frase i saltar de linea

  drive_mb = drive_gb;   //passar el valor de GB a MB
  drive_mb = drive_mb * 1024;   //multiplicar el valor de les GB per 1024 i axi sabrem el valor real de MB

  Serial.print("In theory, It can store "); //Escriure frase 
  Serial.print(drive_mb);  //Es criure el valor real de MB
  Serial.print(" Megabytes,");  //Escriure frase 
  
  drive_kb = drive_mb;   //Passar les MB a KB
  drive_kb = drive_kb * 1024;  // fer l'operacio per convertir les MB a KB

  Serial.print(drive_kb);  //escriure el valor de KB reals
  Serial.println("Kilobytes.");   //Escriure frase i saltar de linea
  
  Serial.print("But it really only stores");  //Escriure frase 
  
  real_drive_mb = drive_gb;             // passar les GB a MB
  real_drive_mb = real_drive_mb * 1000;    // Fer l'oparació  multilicant les GB per 1000 
  
  Serial.print(real_drive_mb); //Escriure el valor
  Serial.print(" Megabytes,"); //Escriure frase 
  
  real_drive_kb = real_drive_mb;   //Passar les MB a KB
  real_drive_kb = real_drive_kb * 1000;     // fer l'operacio per convertir les MB a KB
  
  Serial.print(real_drive_kb);  //Escriure el valor
  Serial.println(" Kilobytes.");   //Escriure frase
  
  kb_perduts = drive_kb ;   //passar el valor de KB 
  kb_perduts = drive_kb - real_drive_kb;   // restar els KB reals menys els kb totals

  Serial.print("You are missing ");   //Escriure frase
  Serial.print(kb_perduts);           //Escriure el valor de KB perduts
  Serial.println(" Kilobytes!");   //Escriure frase
  
}

void loop()      //NO FER RES
{
}

//Quim Moreno
