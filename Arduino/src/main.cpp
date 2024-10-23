#include "lib.h"

motor_step motor1;
motor_step motor2;
motor_step motor3;

void setup()
{
  motor1.setup(step_X, dir_X );
  motor2.setup(step_Y, dir_Y );
  motor3.setup(step_Z, dir_Z );

  pinMode(ena, OUTPUT);
  pinMode(Den,OUTPUT);
  pinMode(Coi,OUTPUT);
  pinMode(sensor,INPUT_PULLUP);

  digitalWrite(ena, LOW);
  Serial.begin(115200);
}

//gui xe
void guixevaovitri1(){
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaynguocchieu(step_Y,dir_Y,1000,500);//len
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor2.quaythuanchieu(step_Y,dir_Y,7080,500);//xuong
  motor3.quaynguocchieu(step_Z,dir_Z,160,1300);//theo chieu kim dong ho bac 1
  delay(2500);
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaythuanchieu(step_Y,dir_Y,1000,500);//xuong
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor3.quaythuanchieu(step_Z,dir_Z,160,1300);//tra ve ban dau
  delay(2500);
  motor2.quaynguocchieu(step_Y,dir_Y,7080,500);//ve vi tri cu
}
void guixevaovitri2(){
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaynguocchieu(step_Y,dir_Y,1000,500);//len
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor2.quaythuanchieu(step_Y,dir_Y,7080,500);//xuong
  motor3.quaynguocchieu(step_Z,dir_Z,510,1300);//theo chieu kim dong ho bac 1
  delay(2500);
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaythuanchieu(step_Y,dir_Y,1000,500);//xuong
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor3.quaythuanchieu(step_Z,dir_Z,510,1300);//tra ve ban dau
  delay(2500);
  motor2.quaynguocchieu(step_Y,dir_Y,7080,500);//ve vi tri cu
}
void guixevaovitri3(){
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaynguocchieu(step_Y,dir_Y,1000,500);//len
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor2.quaythuanchieu(step_Y,dir_Y,7080,500);//xuong
  motor3.quaynguocchieu(step_Z,dir_Z,840,1300);//theo chieu kim dong ho bac 1
  delay(2500);
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaythuanchieu(step_Y,dir_Y,1000,500);//xuong
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor3.quaythuanchieu(step_Z,dir_Z,840,1300);//tra ve ban dau
  delay(2500);
  motor2.quaynguocchieu(step_Y,dir_Y,7080,500);//ve vi tri cu
}
void guixevaovitri4(){
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaynguocchieu(step_Y,dir_Y,1000,500);//len
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor2.quaythuanchieu(step_Y,dir_Y,7080,500);//xuong
  motor3.quaythuanchieu(step_Z,dir_Z,160,1300);//theo chieu nguoc kim dong ho bac 1
  delay(2500);
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaythuanchieu(step_Y,dir_Y,1000,500);//xuong
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor3.quaynguocchieu(step_Z,dir_Z,160,1300);//tra ve ban dau
  delay(2500);
  motor2.quaynguocchieu(step_Y,dir_Y,7080,500);//ve vi tri cu
}
void guixevaovitri5(){
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaynguocchieu(step_Y,dir_Y,1000,500);//len
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor2.quaythuanchieu(step_Y,dir_Y,7080,500);//xuong
  motor3.quaythuanchieu(step_Z,dir_Z,480,1300);//theo nguoc chieu kim dong ho bac 1
  delay(2500);
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaythuanchieu(step_Y,dir_Y,1000,500);//xuong
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor3.quaynguocchieu(step_Z,dir_Z,480,1300);//tra ve ban dau
  delay(2500);
  motor2.quaynguocchieu(step_Y,dir_Y,7080,500);//ve vi tri cu
}
void guixevaovitri6(){
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaynguocchieu(step_Y,dir_Y,1000,500);//len
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor2.quaythuanchieu(step_Y,dir_Y,7080,500);//xuong
  motor3.quaythuanchieu(step_Z,dir_Z,830,1300);//theo nguoc chieu kim dong ho bac 1
  delay(2500);
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaythuanchieu(step_Y,dir_Y,1000,500);//xuong
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor3.quaynguocchieu(step_Z,dir_Z,830,1300);//tra ve ban dau
  delay(2500);
  motor2.quaynguocchieu(step_Y,dir_Y,7080,500);//ve vi tri cu
}
void guixevaovitri7(){
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaynguocchieu(step_Y,dir_Y,1000,500);//len
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor2.quaythuanchieu(step_Y,dir_Y,14900,500);//xuong
  motor3.quaynguocchieu(step_Z,dir_Z,160,1300);//theo chieu kim dong ho bac 1
  delay(2500);
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaythuanchieu(step_Y,dir_Y,1000,500);//xuong
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor3.quaythuanchieu(step_Z,dir_Z,160,1300);//tra ve ban dau
  delay(2500);
  motor2.quaynguocchieu(step_Y,dir_Y,14900,500);//ve vi tri cu
}
void guixevaovitri8(){
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaynguocchieu(step_Y,dir_Y,1000,500);//len
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor2.quaythuanchieu(step_Y,dir_Y,14900,500);//xuong
  motor3.quaynguocchieu(step_Z,dir_Z,480,1300);//theo chieu kim dong ho bac 1
  delay(2500);
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaythuanchieu(step_Y,dir_Y,1000,500);//xuong
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor3.quaythuanchieu(step_Z,dir_Z,480,1300);//tra ve ban dau
  delay(2500);
  motor2.quaynguocchieu(step_Y,dir_Y,14900,500);//ve vi tri cu
}
void guixevaovitri9(){
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaynguocchieu(step_Y,dir_Y,1000,500);//len
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor2.quaythuanchieu(step_Y,dir_Y,14900,500);//xuong
  motor3.quaynguocchieu(step_Z,dir_Z,840,1300);//theo chieu kim dong ho bac 1
  delay(2500);
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaythuanchieu(step_Y,dir_Y,1000,500);//xuong
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor3.quaythuanchieu(step_Z,dir_Z,840,1300);//tra ve ban dau
  delay(2500);
  motor2.quaynguocchieu(step_Y,dir_Y,14900,500);//ve vi tri cu
}
void guixevaovitri10(){
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaynguocchieu(step_Y,dir_Y,1000,500);//len
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor2.quaythuanchieu(step_Y,dir_Y,14900,500);//xuong
  motor3.quaythuanchieu(step_Z,dir_Z,170,1300);//theo nguoc chieu kim dong ho bac 1
  delay(2500);
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaythuanchieu(step_Y,dir_Y,1000,500);//xuong
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor3.quaynguocchieu(step_Z,dir_Z,170,1300);//tra ve ban dau
  delay(2500);
  motor2.quaynguocchieu(step_Y,dir_Y,14900,500);//ve vi tri cu
}
void guixevaovitri11(){
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaynguocchieu(step_Y,dir_Y,1000,500);//len
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor2.quaythuanchieu(step_Y,dir_Y,14900,500);//xuong
  motor3.quaythuanchieu(step_Z,dir_Z,500,1300);//theo nguoc chieu kim dong ho bac 1
  delay(2500);
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaythuanchieu(step_Y,dir_Y,1000,500);//xuong
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor3.quaynguocchieu(step_Z,dir_Z,500,1300);//tra ve ban dau
  delay(2500);
  motor2.quaynguocchieu(step_Y,dir_Y,14900,500);//ve vi tri cu
}
void guixevaovitri12(){
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaynguocchieu(step_Y,dir_Y,1000,500);//len
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor2.quaythuanchieu(step_Y,dir_Y,14900,500);//xuong
  motor3.quaythuanchieu(step_Z,dir_Z,850,1300);//theo nguoc chieu kim dong ho bac 1
  delay(2500);
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaythuanchieu(step_Y,dir_Y,1000,500);//xuong
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor3.quaynguocchieu(step_Z,dir_Z,850,1300);//tra ve ban dau
  delay(2500);
  motor2.quaynguocchieu(step_Y,dir_Y,14900,500);//ve vi tri cu
}





//layxe
void layxevitri1(){
  motor2.quaythuanchieu(step_Y,dir_Y,7080,500);//xuong
  motor3.quaynguocchieu(step_Z,dir_Z,160,1300);//theo chieu kim dong ho bac 1
  delay(2500);
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaynguocchieu(step_Y,dir_Y,1000,500);//len
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor3.quaythuanchieu(step_Z,dir_Z,160,1300);//tra ve ban dau
  delay(2500);
  motor2.quaynguocchieu(step_Y,dir_Y,7080,500);//ve vi tri cu
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaythuanchieu(step_Y,dir_Y,1000,500);//xuong
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
}

void layxevitri2(){
  motor2.quaythuanchieu(step_Y,dir_Y,7080,500);//xuong
  motor3.quaynguocchieu(step_Z,dir_Z,510,1300);//theo chieu kim dong ho bac 1
  delay(2500);
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaynguocchieu(step_Y,dir_Y,1000,500);//len
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor3.quaythuanchieu(step_Z,dir_Z,510,1300);//tra ve ban dau
  delay(2500);
  motor2.quaynguocchieu(step_Y,dir_Y,7080,500);//ve vi tri cu
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaythuanchieu(step_Y,dir_Y,1000,500);//xuong
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
}

void layxevitri3(){
  motor2.quaythuanchieu(step_Y,dir_Y,7080,500);//xuong
  motor3.quaynguocchieu(step_Z,dir_Z,835,1300);//theo chieu kim dong ho bac 1
  delay(2500);
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaynguocchieu(step_Y,dir_Y,1000,500);//len
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor3.quaythuanchieu(step_Z,dir_Z,835,1300);//tra ve ban dau
  delay(2500);
  motor2.quaynguocchieu(step_Y,dir_Y,7080,500);//ve vi tri cu
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaythuanchieu(step_Y,dir_Y,1000,500);//xuong
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
}

void layxevitri4(){
  motor2.quaythuanchieu(step_Y,dir_Y,7080,500);//xuong
  motor3.quaythuanchieu(step_Z,dir_Z,160,1300);//theo nguoc chieu kim dong ho bac 1
  delay(2500);
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaynguocchieu(step_Y,dir_Y,1000,500);//len
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor3.quaynguocchieu(step_Z,dir_Z,160,1300);//tra ve ban dau
  delay(2500);
  motor2.quaynguocchieu(step_Y,dir_Y,7080,500);//ve vi tri cu
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaythuanchieu(step_Y,dir_Y,1000,500);//xuong
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
}
void layxevitri5(){
  motor2.quaythuanchieu(step_Y,dir_Y,7080,500);//xuong
  motor3.quaythuanchieu(step_Z,dir_Z,480,1300);//theo nguoc chieu kim dong ho bac 1
  delay(2500);
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaynguocchieu(step_Y,dir_Y,1000,500);//len
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor3.quaynguocchieu(step_Z,dir_Z,480,1300);//tra ve ban dau
  delay(2500);
  motor2.quaynguocchieu(step_Y,dir_Y,7080,500);//ve vi tri cu
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaythuanchieu(step_Y,dir_Y,1000,500);//xuong
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
}
void layxevitri6(){
  motor2.quaythuanchieu(step_Y,dir_Y,7080,500);//xuong
  motor3.quaythuanchieu(step_Z,dir_Z,830,1300);//theo nguoc chieu kim dong ho bac 1
  delay(2500);
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaynguocchieu(step_Y,dir_Y,1000,500);//len
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor3.quaynguocchieu(step_Z,dir_Z,830,1300);//tra ve ban dau
  delay(2500);
  motor2.quaynguocchieu(step_Y,dir_Y,7080,500);//ve vi tri cu
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaythuanchieu(step_Y,dir_Y,1000,500);//xuong
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
}
void layxevitri7(){
  motor2.quaythuanchieu(step_Y,dir_Y,14900,500);//xuong
  motor3.quaynguocchieu(step_Z,dir_Z,170,1300);//theo chieu kim dong ho bac 1
  delay(2500);
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaynguocchieu(step_Y,dir_Y,1000,500);//len
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor3.quaythuanchieu(step_Z,dir_Z,170,1300);//tra ve ban dau
  delay(2500);
  motor2.quaynguocchieu(step_Y,dir_Y,14900,500);//ve vi tri cu
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaythuanchieu(step_Y,dir_Y,1000,500);//xuong
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
}
void layxevitri8(){
  motor2.quaythuanchieu(step_Y,dir_Y,14900,500);//xuong
  motor3.quaynguocchieu(step_Z,dir_Z,480,1300);//theo chieu kim dong ho bac 1
  delay(2500);
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaynguocchieu(step_Y,dir_Y,1000,500);//len
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor3.quaythuanchieu(step_Z,dir_Z,480,1300);//tra ve ban dau
  delay(2500);
  motor2.quaynguocchieu(step_Y,dir_Y,14900,500);//ve vi tri cu 
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaythuanchieu(step_Y,dir_Y,1000,500);//xuong
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
}
void layxevitri9(){
  motor2.quaythuanchieu(step_Y,dir_Y,14900,500);//xuong
  motor3.quaynguocchieu(step_Z,dir_Z,840,1300);//theo nguoc chieu kim dong ho bac 1
  delay(2500);
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaynguocchieu(step_Y,dir_Y,1000,500);//len
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor3.quaythuanchieu(step_Z,dir_Z,840,1300);//tra ve ban dau
  delay(2500);
  motor2.quaynguocchieu(step_Y,dir_Y,14900,500);//ve vi tri cu
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaythuanchieu(step_Y,dir_Y,1000,500);//xuong
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
}
void layxevitri10(){
  motor2.quaythuanchieu(step_Y,dir_Y,14900,500);//xuong
  motor3.quaythuanchieu(step_Z,dir_Z,170,1300);//theo nguoc chieu kim dong ho bac 1
  delay(2500);
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaynguocchieu(step_Y,dir_Y,1000,500);//len
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor3.quaynguocchieu(step_Z,dir_Z,170,1300);//tra ve ban dau
  delay(2500);
  motor2.quaynguocchieu(step_Y,dir_Y,14900,500);//ve vi tri cu
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaythuanchieu(step_Y,dir_Y,1000,500);//xuong
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
}
void layxevitri11(){
  motor2.quaythuanchieu(step_Y,dir_Y,14900,500);//xuong
  motor3.quaythuanchieu(step_Z,dir_Z,475,1300);//theo nguoc chieu kim dong ho bac 1
  delay(2500);
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaynguocchieu(step_Y,dir_Y,1000,500);//len
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor3.quaynguocchieu(step_Z,dir_Z,475,1300);//tra ve ban dau
  delay(2500);
  motor2.quaynguocchieu(step_Y,dir_Y,14900,500);//ve vi tri cu
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaythuanchieu(step_Y,dir_Y,1000,500);//xuong
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
}
void layxevitri12(){
  motor2.quaythuanchieu(step_Y,dir_Y,14900,500);//xuong
  motor3.quaythuanchieu(step_Z,dir_Z,835,1300);//theo nguoc chieu kim dong ho bac 1
  delay(2500);
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaynguocchieu(step_Y,dir_Y,1000,500);//len
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
  motor3.quaynguocchieu(step_Z,dir_Z,835,1300);//tra ve ban dau
  delay(2500);
  motor2.quaynguocchieu(step_Y,dir_Y,14900,500);//ve vi tri cu
  motor1.quaythuanchieu(step_X,dir_X,310,1300);//ra
  motor2.quaythuanchieu(step_Y,dir_Y,1000,500);//xuong
  motor1.quaynguocchieu(step_X,dir_X,310,1300);//vao
}


void Nofitication(){
  digitalWrite(Den,HIGH);
  digitalWrite(Coi,HIGH);
  delay(50);
  digitalWrite(Den,LOW);
  digitalWrite(Coi,LOW);
}

void loop()
{
  if (Serial.available() > 0)
  {
    String data = Serial.readString();
    data.trim();

    //data gui xe
    if(data == Rfid[0] && digitalRead(sensor) == 0)
    {
      Serial.println(Send[0]);
      Nofitication();
      guixevaovitri1();
    }
    else if (data == Rfid[1] && digitalRead(sensor) == 0)
    { 
      Serial.println(Send[1]);
      Nofitication();
      guixevaovitri2();
    }
    else if (data == Rfid[2] && digitalRead(sensor) == 0)
    {
      Serial.println(Send[2]);
      Nofitication();
      guixevaovitri3();
    }
    else if (data == Rfid[3] && digitalRead(sensor) == 0)
    {
      Serial.println(Send[3]);
      Nofitication();
      guixevaovitri4();
    }
    else if (data == Rfid[4] && digitalRead(sensor) == 0)
    {
      Serial.println(Send[4]);
      Nofitication();
      guixevaovitri5();
    }
    else if (data == Rfid[5] && digitalRead(sensor) == 0)
    {
      Serial.println(Send[5]);
      Nofitication();
      guixevaovitri6();
    }
    else if (data == Rfid[6] && digitalRead(sensor) == 0)
    {
      Serial.println(Send[6]);
      Nofitication();
      guixevaovitri7();
    }
    else if (data == Rfid[7] && digitalRead(sensor) == 0)
    {
      Serial.println(Send[7]);
      Nofitication();
      guixevaovitri8();
    }
    else if (data == Rfid[8] && digitalRead(sensor) == 0)
    {
      Serial.println(Send[8]);
      Nofitication();
      guixevaovitri9();
    }
    else if (data == Rfid[9] && digitalRead(sensor) == 0)
    {
      Serial.println(Send[9]);
      Nofitication();
      guixevaovitri10();
    }
    else if (data == Rfid[10] && digitalRead(sensor) == 0)
    {
      Serial.println(Send[10]); 
      Nofitication();
      guixevaovitri11();
    }
    else if (data == Rfid[11] && digitalRead(sensor) == 0)
    {
      Serial.println(Send[11]);
      Nofitication();
      guixevaovitri12();
    }

    //data lay xe
    else if(data == Rfid[0] && digitalRead(sensor) == 1)
    {
      Serial.println(Receive[0]);
      Nofitication();
      layxevitri1();
    }
    else if (data == Rfid[1] && digitalRead(sensor) == 1)
    {
      Serial.println(Receive[1]);
      Nofitication();
      layxevitri2(); 
    }
    else if (data == Rfid[2] && digitalRead(sensor) == 1)
    {
      Serial.println(Receive[2]);
      Nofitication();
      layxevitri3(); 
    }
    else if (data == Rfid[3] && digitalRead(sensor) == 1)
    {
      Serial.println(Receive[3]);
      Nofitication();
      layxevitri4(); 
    }
    else if (data == Rfid[4] && digitalRead(sensor) == 1)
    {
      Serial.println(Receive[4]);
      Nofitication();
      layxevitri5();
    }
    else if (data == Rfid[5] && digitalRead(sensor) == 1)
    {
      Serial.println(Receive[5]);
      Nofitication();
      layxevitri6();
    }
    else if (data == Rfid[6] && digitalRead(sensor) == 1)
    {
      Serial.println(Receive[6]);
      Nofitication();
      layxevitri7();
    }
    else if (data == Rfid[7] && digitalRead(sensor) == 1)
    {
      Serial.println(Receive[7]);
      Nofitication();
      layxevitri8();
    }
    else if (data == Rfid[8] && digitalRead(sensor) == 1)
    {
      Serial.println(Receive[8]);
      Nofitication();
      layxevitri9();
    }
    else if (data == Rfid[9] && digitalRead(sensor) == 1)
    {
      Serial.println(Receive[9]);
      Nofitication();
      layxevitri10();
    }
    else if (data == Rfid[10] && digitalRead(sensor) == 1)
    {
      Serial.println(Receive[10]);
      Nofitication();
      layxevitri11();
    }
    else if (data == Rfid[11] && digitalRead(sensor) == 1)
    {
      Serial.println(Receive[11]);
      Nofitication();
      layxevitri12();
    }  
 }
 delay(50);
}
