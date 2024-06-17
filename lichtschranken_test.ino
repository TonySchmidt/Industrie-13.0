#include <FtduinoSimple.h>
//M1 Lampe
//I1 licht deteckot
//I3 taster


void setup() {
  Serial.begin(9600);
  Serial.println("Setup");
  ftduino.output_set(Ftduino::O7, Ftduino::HI); 
  Serial.println("ok");
  delay(1500);
}
void loop() {
  // put your main code here, to run repeatedly:

  while(ftduino.input_get(Ftduino::I2)){
    Serial.println("1");
  }
  
  Serial.println("deteced");
  delay(700);



}
