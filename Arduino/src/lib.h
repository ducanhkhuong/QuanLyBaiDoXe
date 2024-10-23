#include <Arduino.h>
class motor_step
{
public:
  void setup(int step, int dir)
  {
    pinMode(step, OUTPUT);
    pinMode(dir, OUTPUT);
  }

  void quaythuanchieu(int step, int dir, int step_of_motor, int timer)
  {
    digitalWrite(dir, LOW);
    for (int x = 0; x < step_of_motor; x++)
    {
      digitalWrite(step, HIGH);
      delayMicroseconds(timer);
      digitalWrite(step, LOW);
      delayMicroseconds(timer);
    }
    delay(500);
  }

  void quaynguocchieu(int step, int dir, int step_of_motor, int timer)
  {
    digitalWrite(dir, HIGH);
    for (int x = 0; x < step_of_motor; x++)
    {
      digitalWrite(step, HIGH);
      delayMicroseconds(timer);
      digitalWrite(step, LOW);
      delayMicroseconds(timer);
    }
    delay(500);
  }

  void stop(int step, int dir)
  {
    digitalWrite(step, LOW);
    digitalWrite(dir, LOW);
  }
};

#define step_X 2
#define dir_X 5

#define step_Y 3
#define dir_Y 6

#define step_Z 4
#define dir_Z 7

#define ena 8

#define sensor A0

#define Coi A3
#define Den A4

unsigned long lastTime = 0;
unsigned long timerDelay = 1000;


String Rfid[]   ={"732a151a", "8398eb1a", "7346431a","2aff43b3" ,
                  "93d28596", "1251691b", "299cc1b" , "95ef13ad",
                  "6595bad" ,"f2aad31a" ,"732f851a" ,"95449fac"};

String Send[]   ={"vitri1:guixe", "vitri2:guixe", "vitri3:guixe",
                  "vitri4:guixe", "vitri5:guixe", "vitri6:guixe", 
                  "vitri7:guixe", "vitri8:guixe" ,"vitri9:guixe", 
                  "vitri10:guixe" , "vitri11:guixe" , "vitri12:guixe"};

String Receive[]={"vitri1:layxe", "vitri2:layxe", "vitri3:layxe",
                  "vitri4:layxe", "vitri5:layxe", "vitri6:layxe",
                  "vitri7:layxe", "vitri8:layxe" ,"vitri9:layxe",
                  "vitri10:layxe" , "vitri11:layxe" , "vitri12:layxe"};


