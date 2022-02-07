int p1;
int p2;
int p3;
void setup() {
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);

  pinMode(6, INPUT);
  pinMode(5, INPUT);
  pinMode(4, INPUT);



}

void loop() {
  analogWrite(11, 0);
  analogWrite(10, 0);
  analogWrite(9, 0);


  p1 = digitalRead(6);
  p2 = digitalRead(5);
  p3 = digitalRead(4);

  if ((p1 == 1) && (p2 == 0) && (p3 == 0)) {
    Rojo();
  } else {
    if ((p1 == 0) && (p2 == 1) && (p3 == 0)) {
      verde();
    } else {
      if ((p1 == 0) && (p2 == 0) && (p3 == 1)) {
        azul();
      } else {
        if ((p1 == 1) && (p2 == 1) && (p3 == 0)) {
          amarillo();
        } else{
          if((p1==1) && (p2 == 0) && (p3 == 1)){
            rosa();
          }else{
            if((p1==0)&&(p2==1)&&(p3==1)){
              azulT();
            }else{
              if((p1==1)&&(p2==1)&&(p3==1)){
                blanco();
              }
            }
          }
        }
      }
    }
  }

}

void Rojo() {
  analogWrite(11, 255);
  analogWrite(10, 0);
  analogWrite(9, 0);
}
void verde() {
  analogWrite(11, 0);
  analogWrite(10, 170);
  analogWrite(9, 0);
}
void azul() {
  analogWrite(11, 0);
  analogWrite(10, 0);
  analogWrite(9, 127);
}
void amarillo() {
  analogWrite(11, 220);
  analogWrite(10, 220);
  analogWrite(9, 0);
}
void rosa() {
  analogWrite(11, 200);
  analogWrite(10, 0);
  analogWrite(9, 200);
}
void azulT() {
  analogWrite(11, 0);
  analogWrite(10, 180);
  analogWrite(9, 180);
}

void blanco() {
  analogWrite(11, 120);
  analogWrite(10, 150);
  analogWrite(9, 150);
}
