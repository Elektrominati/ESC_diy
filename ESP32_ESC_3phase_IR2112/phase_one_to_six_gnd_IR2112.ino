void doPhaseShift(int t){
  ph1();
  delay(t);
  ph2();
  delay(t);
  ph3();
  delay(t);
  ph4();
  delay(t);
  ph5();
  delay(t);
  ph6();
  delay(t);
}
void gnd(){
  //Phase GND
      digitalWrite(AA1,LOW);
      digitalWrite(AA2,HIGH);
      digitalWrite(BB1,LOW);
      digitalWrite(BB2,HIGH);
      digitalWrite(CC1,LOW);
      digitalWrite(CC2,HIGH);
}
void ph1(){
  //Phase1 C-B
      digitalWrite(AA1,LOW);
      digitalWrite(AA2,LOW);
      digitalWrite(BB1,LOW);
      digitalWrite(BB2,HIGH);
      digitalWrite(CC1,HIGH);
      digitalWrite(CC2,LOW);
}
void ph2(){
   //Phase2 A-B
      digitalWrite(AA1,HIGH);
      digitalWrite(AA2,LOW);
      digitalWrite(BB1,LOW);
      digitalWrite(BB2,HIGH);
      digitalWrite(CC1,LOW);
      digitalWrite(CC2,LOW);
}
void ph3(){
  //Phase3 A-C
      digitalWrite(AA1,HIGH);
      digitalWrite(AA2,LOW);
      digitalWrite(BB1,LOW);
      digitalWrite(BB2,LOW);
      digitalWrite(CC1,LOW);
      digitalWrite(CC2,HIGH);
}
void ph4(){
  //Phase4 B-C
      digitalWrite(AA1,LOW);
      digitalWrite(AA2,LOW);
      digitalWrite(BB1,HIGH);
      digitalWrite(BB2,LOW);
      digitalWrite(CC1,LOW);
      digitalWrite(CC2,HIGH);
}
void ph5(){
  //Phase5 B-A
      digitalWrite(AA1,LOW);
      digitalWrite(AA2,HIGH);
      digitalWrite(BB1,HIGH);
      digitalWrite(BB2,LOW);
      digitalWrite(CC1,LOW);
      digitalWrite(CC2,LOW);
}
void ph6(){
  //Phase6 C-A
      digitalWrite(AA1,LOW);
      digitalWrite(AA2,HIGH);
      digitalWrite(BB1,LOW);
      digitalWrite(BB2,LOW);
      digitalWrite(CC1,HIGH);
      digitalWrite(CC2,LOW);
}
