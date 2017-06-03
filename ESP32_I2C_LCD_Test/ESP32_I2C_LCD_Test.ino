#include <Wire.h>
#include "LiquidCrystal_I2C.h"

//LiquidCrystal_I2C lcd(0x27);  // Set the LCD I2C address
LiquidCrystal_I2C  lcd(0x27,2,1,0,4,5,6,7); // 0x27 is the I2C bus address for an unmodified backpack

void setup()
{
  Serial.begin(115200);

  // activate LCD module
  lcd.begin (16,2); // for 16 x 2 LCD module
  lcd.setBacklightPin(3,POSITIVE);
  lcd.setBacklight(HIGH);
}

void loop()
{  
  lcd.home ();                   // go home
  lcd.print("Hello, ESP32");  
  lcd.setCursor ( 0, 1 );        // go to the next line
  lcd.print (" FORUM - fm   ");
  delay ( 1000 );
}
