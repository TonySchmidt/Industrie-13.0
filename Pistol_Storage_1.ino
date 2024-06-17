//Lager 1 Sensor - I1
//Lager 2 Sensor - I2
//Lager 1 Motor - M1
//Lager 2 Motor - M2
//Förderband unten - M3
//Förderband oben - M4
//Start Sensor - I3
#include <FtduinoSimple.h>
#include "RICv2.h"

RobotikInterConnect *ric;

void setup() {
  ric = new RobotikInterConnect(1);
  // put your setup code here, to run once:
  ric->send(255,"Connected to Interconnect");
  ric->send(255,"Setup");
  while(!ftduino.input_get(Ftduino::I2)){
    ftduino.motor_set(Ftduino::M2, Ftduino::LEFT);
  }
  ftduino.motor_set(Ftduino::M2, Ftduino::OFF);
  //Lager 2 Schieber nach hinten
  while(!ftduino.input_get(Ftduino::I1)) {
    ftduino.motor_set(Ftduino::M1, Ftduino::LEFT);  
  }
  ftduino.motor_set(Ftduino::M1, Ftduino::OFF);
  //Förderband leeren
  ftduino.motor_set(Ftduino::M3, Ftduino::RIGHT);
  ftduino.motor_set(Ftduino::M4, Ftduino::RIGHT);
  delay(5000);
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);
  //setup complete
}

void loop() {
  ric->send(255, "READY");
  String msg = ric->recv();  
  while(!ftduino.input_get(Ftduino::I3)){
    ftduino.motor_set(Ftduino::M3, Ftduino::LEFT);
  }
  ric->send(7, "GO");
  delay(6000);
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);

  
  ftduino.motor_set(Ftduino::M1, Ftduino::RIGHT);//schieber 1
  delay(2200);
  while(!ftduino.input_get(Ftduino::I1)){
    ftduino.motor_set(Ftduino::M1, Ftduino::LEFT);
  }
  ftduino.motor_set(Ftduino::M1, Ftduino::OFF);
  ftduino.motor_set(Ftduino::M4, Ftduino::LEFT);
  ric->send(7, "GO");  
  delay(2000);
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);
  delay(15000);
  ftduino.motor_set(Ftduino::M2, Ftduino::RIGHT);//schieber 2
  delay(1500);
  while(!ftduino.input_get(Ftduino::I2)){
    ftduino.motor_set(Ftduino::M2, Ftduino::LEFT);
  }
  ftduino.motor_set(Ftduino::M2, Ftduino::OFF);
  ftduino.motor_set(Ftduino::M4, Ftduino::LEFT);
  delay(3000);
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);
  delay(6000);
}
