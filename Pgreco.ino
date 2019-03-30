#include <LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);
int B1 = 10;
int B2 = 9;
int B3 = 8;
int B4 = 7;
byte Cuore[8] = {
        B00000,
        B01010,
        B11111,
        B11111,
        B11111,
        B01110,
        B00100,
        B00000
};
byte PiGreco[8] = {
        B00000,
        B11111,
        B01010,
        B01010,
        B01010,
        B01010,
        B10010,
        B00000
}
void setup() {
  // put your setup code here, to run once:
lcd.createChar(0, Cuore);
lcd.createChar(1, PiGreco);
lcd.begin(16,2);
pinMode(B1, INPUT);
pinMode(B2, INPUT);
pinMode(B3, INPUT);
pinMode(B4, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.print(byte(0));
delay(1000);
lcd.clear();
lcd.print(byte(1));
delay(1000);
lcd.clear();
}
