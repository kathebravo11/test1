#include <Servo.h>
 Servo servo_11;
 int i;
void setup() 
{
 pinMode (13, OUTPUT);
 pinMode (12, OUTPUT);
 pinMode (11, INPUT);
 pinMode (7, INPUT);
 servo_11.attach (10);
 
}

void loop() 
{
 //  int i;
if (digitalRead (11) == 1 && i==0)
 {
  servo_11.write (0);
  digitalWrite (13, HIGH);
  digitalWrite (12, LOW);
  i=0;
 }
if (digitalRead (11) == 1 && i!=0)
  {
  servo_11.write (0);
  digitalWrite (13, HIGH);
  digitalWrite (12, LOW);
  i=0;
   }

    
if (digitalRead (7) == 1  && i==0)
{
    i=180;
    servo_11.write (i);
    
    if ( i==180){
      digitalWrite (12, HIGH);
      digitalWrite (13, LOW);
      }
}
if (digitalRead (7) == 1  && i==180)
{
  digitalWrite (12, HIGH);
  }

if (digitalRead (7) == 0  && digitalRead (11) == 0 && i==180){
  digitalWrite (12, HIGH);
  digitalWrite (13, LOW);
  }
if (digitalRead (7) == 0  && digitalRead (11) == 0 && i==0){
  digitalWrite (13, HIGH);
  digitalWrite (12, LOW);
}
if (digitalRead (7) == 0  && digitalRead (11) == 0 && i!=0 && i!=180){
  digitalWrite (13, LOW);
  digitalWrite (12, LOW);
}
}
