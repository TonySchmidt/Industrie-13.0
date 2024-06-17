#include <FtduinoSimple.h>

void armsetup();
void ausgeben();
void fach0_auslagern();
void fach1_auslagern();
void fach2_auslagern();
void fach3_auslagern();
void fach4_auslagern();
void fach5_auslagern();
void fach6_auslagern();
void fach7_auslagern();


void setup() {
  Serial.begin(9600);
  Serial.println("start");
  armsetup();
}

void ausgeben(){
  while(!ftduino.input_get(Ftduino::I4)){
  ftduino.motor_set(Ftduino::M3, Ftduino::LEFT);//arm runter
  }
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);
  while(!ftduino.input_get(Ftduino::I3)){
  ftduino.motor_set(Ftduino::M2, Ftduino::RIGHT);//zur ausgabe
  }
  ftduino.motor_set(Ftduino::M2, Ftduino::OFF);
  ftduino.motor_set(Ftduino::M3, Ftduino::RIGHT);
  delay(6000);
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);
  while(!ftduino.input_get(Ftduino::I8)){
  ftduino.motor_set(Ftduino::M4, Ftduino::LEFT);//arm vorne
  }
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);
  while(!ftduino.input_get(Ftduino::I4)){
  ftduino.motor_set(Ftduino::M3, Ftduino::LEFT);//arm runter
  }
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);
  ftduino.motor_set(Ftduino::M4, Ftduino::RIGHT);//arm hinten
  delay(2500);
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);
  ftduino.motor_set(Ftduino::M3, Ftduino::RIGHT);//arm hoch
  delay(6500);
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);
  ftduino.motor_set(Ftduino::M4, Ftduino::LEFT);//arm vorne
  
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);
  armsetup();
}

void Annehmen(){

  
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

 void fach0_auslagern(){
  while(!ftduino.input_get(Ftduino::I5)){
  ftduino.motor_set(Ftduino::M3, Ftduino::RIGHT);//arm hoch
  }
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I8)){
  ftduino.motor_set(Ftduino::M4, Ftduino::LEFT);//arm vorne
  }
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);

  ftduino.motor_set(Ftduino::M3, Ftduino::RIGHT);// arm etwas hoch(auslagern)
  delay(1500);
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I6)){
  ftduino.motor_set(Ftduino::M4, Ftduino::RIGHT);//arm vorne hinten
  }
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);
  ausgeben();
  armsetup();
  //ausgelagert senden
 }
void fach1_auslagern(){
  while(!ftduino.input_get(Ftduino::I7)){
  ftduino.motor_set(Ftduino::M3, Ftduino::RIGHT);//arm hoch
  }
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);
  ftduino.motor_set(Ftduino::M3, Ftduino::LEFT);//arm etwas runter
  delay(1500);
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);
  

  while(!ftduino.input_get(Ftduino::I8)){
  ftduino.motor_set(Ftduino::M4, Ftduino::LEFT);//arm vorne
  }
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);

  ftduino.motor_set(Ftduino::M3, Ftduino::RIGHT);// arm etwas hoch(auslagern)
  delay(2000);
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I6)){
  ftduino.motor_set(Ftduino::M4, Ftduino::RIGHT);//arm  hinten
  }
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);
  ausgeben();
  armsetup();
  //ausgelagert senden
 }

 void fach2_auslagern(){
  while(!ftduino.input_get(Ftduino::I2)){
  ftduino.motor_set(Ftduino::M2, Ftduino::RIGHT);//arm  zur mitte
  }
  ftduino.motor_set(Ftduino::M2, Ftduino::OFF);

  ftduino.motor_set(Ftduino::M3, Ftduino::RIGHT);//arm hoch
  delay(3000);
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I8)){
  ftduino.motor_set(Ftduino::M4, Ftduino::LEFT);//arm vorne
  }
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);

  ftduino.motor_set(Ftduino::M3, Ftduino::RIGHT);// arm etwas hoch(auslagern)
  delay(2000);
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I6)){
  ftduino.motor_set(Ftduino::M4, Ftduino::RIGHT);//arm  hinten
  }
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);
  ausgeben();
  armsetup();
  //ausgelagert senden
 }

 void fach3_auslagern(){
  while(!ftduino.input_get(Ftduino::I2)){
  ftduino.motor_set(Ftduino::M2, Ftduino::RIGHT);//arm  zur mitte
  }
  ftduino.motor_set(Ftduino::M2, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I5)){
  ftduino.motor_set(Ftduino::M3, Ftduino::RIGHT);//arm  hoch zur mitte
  }
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I8)){
  ftduino.motor_set(Ftduino::M4, Ftduino::LEFT);//arm vorne
  }
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);

  ftduino.motor_set(Ftduino::M3, Ftduino::RIGHT);// arm etwas hoch(auslagern)
  delay(2000);
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I6)){
  ftduino.motor_set(Ftduino::M4, Ftduino::RIGHT);//arm  hinten
  }
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);
  ausgeben();
  armsetup();
  //ausgelagert senden
 }

 void fach4_auslagern(){
  while(!ftduino.input_get(Ftduino::I2)){
  ftduino.motor_set(Ftduino::M2, Ftduino::RIGHT);//arm  zur mitte
  }
  ftduino.motor_set(Ftduino::M2, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I7)){
  ftduino.motor_set(Ftduino::M3, Ftduino::RIGHT);//arm  hoch
  }

  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);
  ftduino.motor_set(Ftduino::M3, Ftduino::LEFT);//arm  hoch
  delay(2000);
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I8)){
  ftduino.motor_set(Ftduino::M4, Ftduino::LEFT);//arm vorne
  }

  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);
  

  ftduino.motor_set(Ftduino::M3, Ftduino::RIGHT);// arm etwas hoch(auslagern)
  delay(2000);
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I6)){
  ftduino.motor_set(Ftduino::M4, Ftduino::RIGHT);//arm  hinten
  }
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);
  ausgeben();
  armsetup();
  //ausgelagert senden
 }

  void fach5_auslagern(){
  while(!ftduino.input_get(Ftduino::I3)){
  ftduino.motor_set(Ftduino::M2, Ftduino::RIGHT);//arm  zur seite
  }
  
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);
 Serial.println(2);
  while(!ftduino.input_get(Ftduino::I8)){
  ftduino.motor_set(Ftduino::M4, Ftduino::LEFT);//arm vorne
  }
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);
  Serial.println(3);
  ftduino.motor_set(Ftduino::M3, Ftduino::RIGHT);// arm etwas hoch(auslagern)
  delay(2000);
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I6)){
  ftduino.motor_set(Ftduino::M4, Ftduino::RIGHT);//arm  hinten
  }
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);
  ausgeben();
  armsetup();
  //ausgelagert senden
 }

  void fach6_auslagern(){
  while(!ftduino.input_get(Ftduino::I3)){
  ftduino.motor_set(Ftduino::M2, Ftduino::RIGHT);//arm  zur seite
  }
  ftduino.motor_set(Ftduino::M2, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I5)){
  ftduino.motor_set(Ftduino::M3, Ftduino::RIGHT);//arm  hoch
  }
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I8)){
  ftduino.motor_set(Ftduino::M4, Ftduino::LEFT);//arm vorne
  }
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);

  ftduino.motor_set(Ftduino::M3, Ftduino::RIGHT);// arm etwas hoch(auslagern)
  delay(2000);
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I6)){
  ftduino.motor_set(Ftduino::M4, Ftduino::RIGHT);//arm  hinten
  }
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);
  ausgeben();
  armsetup();
  
  //ausgelagert senden
 }

  void fach7_auslagern(){
  while(!ftduino.input_get(Ftduino::I3)){
  ftduino.motor_set(Ftduino::M2, Ftduino::RIGHT);//arm  zur seite
  }
  ftduino.motor_set(Ftduino::M2, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I7)){
  ftduino.motor_set(Ftduino::M3, Ftduino::RIGHT);//arm  hoch
  }
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);
  ftduino.motor_set(Ftduino::M3, Ftduino::LEFT);//arm  hoch
  delay(2000);
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I8)){
  ftduino.motor_set(Ftduino::M4, Ftduino::LEFT);//arm vorne
  }
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);

  ftduino.motor_set(Ftduino::M3, Ftduino::RIGHT);// arm etwas hoch(auslagern)
  delay(2000);
  ftduino.motor_set(Ftduino::M3, Ftduino::OFF);

  while(!ftduino.input_get(Ftduino::I6)){
  ftduino.motor_set(Ftduino::M4, Ftduino::RIGHT);//arm  hinten
  }
  ftduino.motor_set(Ftduino::M4, Ftduino::OFF);
  armsetup();
  ausgeben();
  //ausgelagert senden
  }

void loop() {
  armsetup();
  Serial.println("Fach 0");
  fach0_auslagern();

  Serial.println("Fach 1");
  fach1_auslagern();
  Serial.println("Fach 2");
  fach2_auslagern();
  Serial.println("Fach 3");
  fach3_auslagern();
  Serial.println("Fach 4");
  fach4_auslagern();
  Serial.println("Fach 5");
  fach5_auslagern();
  Serial.println("Fach 6");
  fach6_auslagern();
  Serial.println("Fach 7");
}
