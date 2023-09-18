#include <POP32.h>
void setup() {
oled.textSize(1);

}

void loop() {
 oled.text(0,0,"FL = %d   ",analog(1));
 oled.text(1,0,"FR = %d   ",analog(2));
 oled.text(2,0,"SL = %d   ",analog(3));
 oled.text(3,0,"SR = %d   ",analog(4));
// oled.text(4,0,"BL = %d   ",analog(5));
// oled.text(5,0,"BR = %d   ",analog(6));
 oled.show();

}
