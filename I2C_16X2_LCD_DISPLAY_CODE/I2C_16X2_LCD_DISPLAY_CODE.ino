//I2C LIQUID CRYSTAL LIBRARY:-  https://github.com/johnrickman/LiquidCrystal_I2C

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F,16,2);//Default address is 0x27

void setup()
{
  lcd.init();
  lcd.backlight();
  
  lcd.setCursor(0,0); // 1st COLUMN(0) 1st ROW(0)
  lcd.print("WELCOME  TO");

  lcd.setCursor(0,1); // 1st COLUMN(0) 2nd ROW(1)
  lcd.print("MKINVENTIONS"); 
}

void loop()
{
}
