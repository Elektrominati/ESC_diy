#include <ESP32Encoder.h>
ESP32Encoder encoder;
int AA1 = 32; //Braun
int AA2 = 33; //Rot
int BB1 = 27; //Orange
int BB2 = 4; //Gelb
int CC1 = 16; //Grün
int CC2 = 17; //Blau
//bei protzuordung!
int btn = 23;
int t = 0;
unsigned long previousMillis = 0;
void setup() {
Serial.begin(9600);
  pinMode(AA1,OUTPUT);
  pinMode(AA2,OUTPUT);
  pinMode(BB1,OUTPUT);
  pinMode(BB2,OUTPUT);
  pinMode(CC1,OUTPUT);
  pinMode(CC2,OUTPUT);
  pinMode(btn, INPUT_PULLUP);
  encoder.attachHalfQuad(19, 18);
  for(int i = 10; i>=3; i-- ){
    previousMillis = millis();
    while(millis() < 2000 + previousMillis){
      ph1();
      delay(i);
      ph2();
      delay(i);
      ph3();
      delay(i);
      ph4();
      delay(i);
      ph5();
      delay(i);
      ph6();
      delay(i);
    }
    Serial.println(i);
  }
  encoder.setCount(3);

}

void loop() {
int encval = encoder.getCount();
if(encval <= 0){
  t = 0;
}else{
  t = encval;
}
Serial.println("count: " + String(t));
//t = map(encval, 0,4095,2,20);
  while (digitalRead(btn) == 0)
  {
    gnd();
  }
  doPhaseShift(t);
}
