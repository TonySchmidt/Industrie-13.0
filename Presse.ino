#include <FtduinoSimple.h>
#include "RICv2.h"
/*
 * I1=Taster Oben
 * I2=Lichtschranke direkt unter der Presse
 * I3=Lichtschranke am Ende des Förderbandes
 * I4= Taster unter der Presse
 * I5 taster schranke rein
 * I6 taster schranke raus
 * M2= Förderband
 * M3=Presse
   M1 Schranke
   07 licht annahme
   08 licht presse
 */
 RobotikInterConnect *ric;
void setup() { 
   ric = new RobotikInterConnect(8);
  ric->send(255,"Connected to Interconnect");
  ric->send(255,"Setup");
  while (!ftduino.input_get(Ftduino::I4)) { //I1= Taster oben Presse
    ftduino.motor_set(Ftduino::M3, Ftduino::RIGHT); //Presse nach oben
  } 
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF); //Presse nach oben
  while(!ftduino.input_get(Ftduino::I6)){
  ftduino.motor_set(Ftduino::M1, Ftduino::RIGHT); //schranke
  }
  ftduino.motor_set(Ftduino::M1, Ftduino::OFF); //schranke
  ric->send(255,"Setup completed");
}


void loop() {
  // put your main code here, to run repeatedly:
  ric->send(255,"READY");
  String msg = ric->recv();
  ftduino.motor_set(Ftduino::M2, Ftduino::RIGHT); //band
  ftduino.output_set(Ftduino::O7, Ftduino::HI);
  while(!ftduino.input_get(Ftduino::I6)){
  ftduino.motor_set(Ftduino::M1, Ftduino::RIGHT); //schranke
  }
  ftduino.motor_set(Ftduino::M1, Ftduino::OFF); //schranke

  ftduino.output_set(Ftduino::O7, Ftduino::LO);
  while(ftduino.input_get(Ftduino::I1)) { //Lichtschranke aktiviert
  }
  ftduino.motor_set(Ftduino::M2, Ftduino::OFF); //Band
  ftduino.output_set(Ftduino::O7, Ftduino::HI);
  msg = ric->recv();

  ftduino.output_set(Ftduino::O8, Ftduino::HI);
  while(ftduino.input_get(Ftduino::I5)){
  ftduino.motor_set(Ftduino::M1, Ftduino::LEFT); //schranke
  }
  ftduino.motor_set(Ftduino::M1, Ftduino::OFF); //schranke

  ftduino.output_set(Ftduino::O8, Ftduino::LO);
  ftduino.motor_set(Ftduino::M2, Ftduino::RIGHT); //band
  delay(1000);
  while(ftduino.input_get(Ftduino::I3)) { //Lichtschranke aktiviert
  }
  ftduino.motor_set(Ftduino::M2, Ftduino::OFF); //Band
  while(!ftduino.input_get(Ftduino::I6)){
  ftduino.motor_set(Ftduino::M1, Ftduino::RIGHT); //schranke
  }
  ftduino.motor_set(Ftduino::M1, Ftduino::OFF); //schranke
  ftduino.output_set(Ftduino::O8, Ftduino::HI);
  ftduino.motor_set(Ftduino::M3, Ftduino::LEFT); //pesse
  delay(800);
  while (!ftduino.input_get(Ftduino::I4)) { //I1= Taster oben Presse
    ftduino.motor_set(Ftduino::M3, Ftduino::RIGHT); //Presse nach oben
  } 
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF); //Presse nach oben
  ric->send(9, msg);//ausfzug
  ftduino.motor_set(Ftduino::M2, Ftduino::RIGHT); //Band
  delay(3500);
  ftduino.motor_set(Ftduino::M2, Ftduino::OFF); //Band

} 
