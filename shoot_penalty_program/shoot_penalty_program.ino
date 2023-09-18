#include <POP32.h>
#define limPin PA0
#define reloadSpd 70

void shoot(){
  motor(4,reloadSpd);delay(150);
  motor(4,0);delay(50);
}
void reload(){
  motor(4,reloadSpd);
  for(int i=0;i<2000;i++){
    if(in(limPin))break;
    delay(1);
  }
  motor(4,0);
}
void setup() {
}

void loop() {
  oled.mode(2);
  oled.clear();
  oled.text(4, 0, "Press SW_B Shoot Right");
  oled.text(6, 0, "Press SW_A Shoot Left");
  oled.show();
  if (SW_B())
  {
    beep();
    delay(300);
    wheel(-30, -30, -30); delay(170);//ยิงมุมขวา
    ao();
    delay(100);
    wheel(25, 25, -50); delay(200);
    ao();
    delay(100);
    shoot();
    reload();
  }
  if (SW_A())
  {
    wheel(30, 30, 30); delay(170);//ยิงมุมซ้าย
    ao();
    delay(100);
    wheel(-25, -25, 50); delay(200);
    ao();
    delay(100);
    shoot();
    reload();
    
  }
  
}

void wheel(int s1, int s2, int s3) {
  motor(1, s1);
  motor(2, s2);
  motor(3, s3);
}
