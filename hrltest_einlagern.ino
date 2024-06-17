#include <FtduinoSimple.h>

 void fach0_einlagern(){
  while(!ftduino.input_get(Ftduino::I5)){
  ftduino.motor_set(Ftduino::M3, Ftduino::RIGHT);//arm hoch
  }
  delay(3000);
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I8)){
  ftduino.motor_set(Ftduino::M4, Ftduino::LEFT);//arm vorne
  }
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);

  ftduino.motor_set(Ftduino::M3, Ftduino::LEFT);//arm etwas runter 
  delay(2000);
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I6)){
  ftduino.motor_set(Ftduino::M4, Ftduino::RIGHT);//arm vorne hinten
  }
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);
  setup();
  //eingelagert senden
 }
void fach1_einlagern(){
  while(!ftduino.input_get(Ftduino::I7)){
  ftduino.motor_set(Ftduino::M3, Ftduino::RIGHT);//arm hoch
  }
  delay(500);
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I8)){
  ftduino.motor_set(Ftduino::M4, Ftduino::LEFT);//arm hinten
  }
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);

  ftduino.motor_set(Ftduino::M3, Ftduino::LEFT);// arm etwas hoch(auslagern)
  delay(2000);
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I6)){
  ftduino.motor_set(Ftduino::M4, Ftduino::RIGHT);//arm  hinten
  }
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);
  setup();
  //eingelagert senden
 }
void fach2_einlagern(){
  while(!ftduino.input_get(Ftduino::I2)){
  ftduino.motor_set(Ftduino::M2, Ftduino::RIGHT);//arm  zur mitte
  }
  ftduino.motor_set(Ftduino::M2, Ftduino::OFF);

  ftduino.motor_set(Ftduino::M3, Ftduino::RIGHT);//arm hoch
  delay(6000);
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I8)){
  ftduino.motor_set(Ftduino::M4, Ftduino::LEFT);//arm vorne
  }
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);

  ftduino.motor_set(Ftduino::M3, Ftduino::LEFT);// arm etwas hoch(auslagern)
  delay(3000);
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I6)){
  ftduino.motor_set(Ftduino::M4, Ftduino::RIGHT);//arm  hinten
  }
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);
  setup();
  //eingelagert senden
}
void fach3_einlagern(){
  while(!ftduino.input_get(Ftduino::I2)){
  ftduino.motor_set(Ftduino::M2, Ftduino::RIGHT);//arm  zur mitte
  }

  ftduino.motor_set(Ftduino::M2, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I5)){
  ftduino.motor_set(Ftduino::M3, Ftduino::RIGHT);//arm  hoch zur mitte
  }
  delay(2500);
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I8)){
  ftduino.motor_set(Ftduino::M4, Ftduino::LEFT);//arm vorne
  }
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);

  ftduino.motor_set(Ftduino::M3, Ftduino::LEFT);// arm etwas hoch(auslagern)
  delay(2000);
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I6)){
  ftduino.motor_set(Ftduino::M4, Ftduino::RIGHT);//arm  hinten
  }
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);
  setup();
  //eingelagert senden
 }
void fach4_einlagern(){
  while(!ftduino.input_get(Ftduino::I2)){
  ftduino.motor_set(Ftduino::M2, Ftduino::RIGHT);//arm  zur mitte
  }
  ftduino.motor_set(Ftduino::M2, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I7)){
  ftduino.motor_set(Ftduino::M3, Ftduino::RIGHT);//arm  hoch
  }

  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);


  while(!ftduino.input_get(Ftduino::I8)){
  ftduino.motor_set(Ftduino::M4, Ftduino::LEFT);//arm vorne
  }
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);
  

  ftduino.motor_set(Ftduino::M3, Ftduino::LEFT);// arm etwas hoch(auslagern)
  delay(2500);
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I6)){
  ftduino.motor_set(Ftduino::M4, Ftduino::RIGHT);//arm  hinten
  }
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);
  setup();
  //eingelagert senden
 }
void fach5_einlagern(){
  while(!ftduino.input_get(Ftduino::I3)){
  ftduino.motor_set(Ftduino::M2, Ftduino::RIGHT);//arm  zur seite
  }
 ftduino.motor_set(Ftduino::M2, Ftduino::OFF);//arm  zur seite

 while(!ftduino.input_get(Ftduino::I5)){
  ftduino.motor_set(Ftduino::M3, Ftduino::RIGHT);//arm  hoch
  }
  delay(2000);
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I8)){
  ftduino.motor_set(Ftduino::M4, Ftduino::LEFT);//arm vorne
  }
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);
  Serial.println(3);
  ftduino.motor_set(Ftduino::M3, Ftduino::LEFT);// arm etwas hoch(auslagern)
  delay(2000);
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I6)){
  ftduino.motor_set(Ftduino::M4, Ftduino::RIGHT);//arm  hinten
  }
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);
  setup();
  //eingelagert senden
 }
void fach6_einlagern(){
  while(!ftduino.input_get(Ftduino::I3)){
  ftduino.motor_set(Ftduino::M2, Ftduino::RIGHT);//arm  zur seite
  }
  ftduino.motor_set(Ftduino::M2, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I5)){
  ftduino.motor_set(Ftduino::M3, Ftduino::RIGHT);//arm  hoch
  }
  delay(5000);
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I8)){
  ftduino.motor_set(Ftduino::M4, Ftduino::LEFT);//arm vorne
  }
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);

  ftduino.motor_set(Ftduino::M3, Ftduino::LEFT);// arm etwas hoch(auslagern)
  delay(2000);
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I6)){
  ftduino.motor_set(Ftduino::M4, Ftduino::RIGHT);//arm  hinten
  }
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);
  setup();
  //eingelagert senden
 }
void fach7_einlagern(){
  while(!ftduino.input_get(Ftduino::I3)){
  ftduino.motor_set(Ftduino::M2, Ftduino::RIGHT);//arm  zur seite
  }
  ftduino.motor_set(Ftduino::M2, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I7)){
  ftduino.motor_set(Ftduino::M3, Ftduino::RIGHT);//arm  hoch
  }
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);
  ftduino.motor_set(Ftduino::M3, Ftduino::RIGHT);//arm  hoch
  delay(2000);
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I8)){
  ftduino.motor_set(Ftduino::M4, Ftduino::LEFT);//arm vorne
  }
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);

  ftduino.motor_set(Ftduino::M3, Ftduino::LEFT);// arm etwas hoch(auslagern)
  delay(3000);
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I6)){
  ftduino.motor_set(Ftduino::M4, Ftduino::RIGHT);//arm  hinten
  }
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);
  setup();
  //eingelagert senden
 }
void armsetup(){
  while(!ftduino.input_get(Ftduino::I6)){
    ftduino.motor_set(Ftduino::M4, Ftduino::RIGHT);//arm hinten
    }
    ftduino.motor_set(Ftduino::M4, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I4)){
    ftduino.motor_set(Ftduino::M3, Ftduino::LEFT);//arm hoch
    }
    ftduino.motor_set(Ftduino::M3, Ftduino::OFF);
    
  while(!ftduino.input_get(Ftduino::I1)){
    ftduino.motor_set(Ftduino::M2, Ftduino::LEFT);//arm anfang
    }
    ftduino.motor_set(Ftduino::M2, Ftduino::OFF);
}

void setup() {
  Serial.begin(9600);
  Serial.println("start");
  armsetup();
}
void loop() {
  armsetup();
  fach7_einlagern();
  fach5_einlagern();
  fach1_einlagern();
  Serial.println("Fach 0");
  fach0_einlagern();
  Serial.println("Fach 1");
  fach1_einlagern();
  Serial.println("Fach 2");
  fach2_einlagern();
  Serial.println("Fach 3");
  fach3_einlagern();
  Serial.println("Fach 4");
  fach4_einlagern();
  Serial.println("Fach 5");
  fach5_einlagern();
  Serial.println("Fach 6");
  fach6_einlagern();
  Serial.println("Fach 7");
}