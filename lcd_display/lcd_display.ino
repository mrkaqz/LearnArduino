#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  
  lcd.begin(16,2); 
  // ------- Quick 3 blinks of backlight  -------------
  for(int i = 0; i< 3; i++)
  {
    lcd.backlight();
    delay(250);
    lcd.noBacklight();
    delay(250);
  }
  lcd.backlight(); // finish with backlight on 

//-------- Write characters on the display ------------------
// NOTE: Cursor Position: (CHAR, LINE) start at 0  
  lcd.setCursor(0,0); //Start at character 4 on line 0
  lcd.print("Hello, world!");
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print("HI!Arduino");
  delay(1000);  
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int data = analogRead(A0);
  float volt = data*5.0/1024;
  
  Serial.print("A2D=");
  Serial.print(data);
  Serial.print("    Voltage=");
  Serial.println(volt,4);
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Volt = ");
  lcd.print(volt,4);
  lcd.print(" v");  
  delay(500);
}
