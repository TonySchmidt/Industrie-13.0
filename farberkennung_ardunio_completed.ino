#include <FtduinoSimple.h>

/*
I1 Lichtschranke innen
I2 Lichtschranke oben
I3 Lichtschranke unten
I4 Octo1(Ft.M1)
I5 Octo2(Ft.M2)


M1 send octo3 (FT.I1)
M2 Förderband unten
M3 Förderband Oben
07 Lochtschranke oben förderband und unten
08 Lichtschranke innen
*/
#include "RICv2.h"

RobotikInterConnect *ric;

int farbe = 0;//rot = 1; blau = 2; grün = 3;

int checkcolor();


void setup() {
  ric = new RobotikInterConnect(7);
  // put your setup code here, to run once:
  ric->send(255,"Connected to Interconnect");
  ric->send(255,"Setup");
  ftduino.motor_set(Ftduino::M2, Ftduino::RIGHT);//check belts
  ftduino.motor_set(Ftduino::M3, Ftduino::RIGHT);
  delay(2000);
  ftduino.motor_set(Ftduino::M2, Ftduino::LEFT);
  ftduino.motor_set(Ftduino::M3, Ftduino::LEFT);
  delay(2000);
  ftduino.motor_set(Ftduino::M2, Ftduino::OFF);
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);
  //Setup complete
}

void loop() {
  ric->send(255, "READY"); // PRESSE
  String msg = ric->recv();
  if(msg == "GO"){
    ftduino.motor_set(Ftduino::M2, Ftduino::RIGHT);
    ftduino.output_set(Ftduino::O7, Ftduino::HI);
    ric->send(8, "GO"); // PRESSE
    delay(5000);
    ftduino.motor_set(Ftduino::M2, Ftduino::OFF); 
    ftduino.output_set(Ftduino::O7, Ftduino::LO);
    String msg = ric->recv();
    ftduino.motor_set(Ftduino::M3, Ftduino::RIGHT);
    ftduino.output_set(Ftduino::O8, Ftduino::HI);
    delay(1000);
    while (ftduino.input_get(Ftduino::I1)){//Lichtschranke Oben
      
    }
    ftduino.motor_set(Ftduino::M3, Ftduino::OFF);//farbe in Dunkelraum
    ftduino.output_set(Ftduino::O8, Ftduino::LO);
    delay(500);
    ric->send(255, "Farbscan"); // control
    ftduino.motor_set(Ftduino::M1, Ftduino::LEFT);//TXT START BEFEHL
    delay(2000);
    ftduino.motor_set(Ftduino::M1, Ftduino::OFF);
    delay(1000);

    int color = checkcolor();
    String newMsg = "GO0";
    newMsg[2] += color; 
    farbe = 0;
    ftduino.output_set(Ftduino::O7, Ftduino::HI);//schranke an
    ftduino.motor_set(Ftduino::M3, Ftduino::RIGHT);
    ftduino.output_set(Ftduino::O8, Ftduino::HI);
    delay(4000);
    while (ftduino.input_get(Ftduino::I1)){//Lichtschranke Oben
      if(ftduino.input_get(Ftduino::I2)){
        break;
      }
    }
    delay(4000);
    ftduino.motor_set(Ftduino::M3, Ftduino::OFF);
    ftduino.output_set(Ftduino::O8, Ftduino::LO);//schranke aus
    ric->send(8, newMsg);
  }


}

int checkcolor(){
while(farbe == 0){
    if(ftduino.input_get(Ftduino::I2)){
      farbe = 1;
    }
    if(ftduino.input_get(Ftduino::I3)){
      farbe = 2;
    }
    if(ftduino.input_get(Ftduino::I6)){
      farbe = 3;
    }    
    if(ftduino.input_get(Ftduino::I4)){//ftm1 grün oder rot
      if(ftduino.input_get(Ftduino::I5)){// rot
        farbe = 1;
        //send rot(1) (4 + 5)
        ric->send(255, "rot");
      } else{//grün
        farbe = 2;
        ric->send(255, "grun");
        //send Grün(2) (nur 4)
      }
    } else if(ftduino.input_get(Ftduino::I5)){//ftm2 rot oder blau
      farbe = 3; 
      ric->send(255, "blau");
      //send Blau(3) (nur 5)
    }
}
return farbe;
}
