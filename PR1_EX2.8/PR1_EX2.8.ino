int drive_gb = 100;
long drive_mb;
long drive_kb;
long real_drive_mb;
long real_drive_kb;
long kb_perduts;

void setup()               //run once, when the sketch starts
{
  Serial.begin(9600);       //set up Serial library at 9600 bps

  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = drive_gb;
  drive_mb = drive_mb * 1024;

  Serial.print("In theory, It can store ");
  Serial.print(drive_mb);
  Serial.print(" Megabytes,");
  
  drive_kb = drive_mb;
  drive_kb = drive_kb * 1024;

  Serial.print(drive_kb);
  Serial.println("Kilobytes.");
  
  Serial.print("But it really only stores");
  
  real_drive_mb = drive_gb;
  real_drive_mb = real_drive_mb * 1000;
  
  Serial.print(real_drive_mb);
  Serial.print(" Megabytes,");
  
  real_drive_kb = real_drive_mb;
  real_drive_kb = real_drive_kb * 1000;
  
  Serial.print(real_drive_kb);
  Serial.println(" Kilobytes.");
  
  kb_perduts = drive_kb ; 
  kb_perduts = drive_kb - real_drive_kb;

  Serial.print("You are missing ");
  Serial.print(kb_perduts);
  Serial.println(" Kilobytes!");
  
}

void loop()      //we need this to be here even though its empty
{
}

//Quim Moreno
