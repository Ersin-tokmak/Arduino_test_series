#include <LiquidCrystal_I2C.h>
#include <Wire.h>
int sensorPin=A0;
int sensorDeger=0;
float gerilim=0;
float sicaklik=0;
int buzzer = 11;
int led=2;
LiquidCrystal_I2C lcd(0*27,16,2);
void setup() {
  lcd.init();
  lcd.backlight();
  pinMode(buzzer,OUTPUT);
  pinMode(led,OUTPUT);

}

void loop() {
  sensorDeger=analogRead(sensorPin);
  gerilim=(sensorDeger/1024.0)*5000.0;
  sicaklik=gerilim/10.0;
  lcd.setCursor(3,0);
  lcd.print("sicaklik");
  lcd.setCursor(3,1);
  lcd,print(sicaklik);
  if (sicaklik>24);
  {
    digitalWrite(buzzer,HIGH);
    digitalWrite(led,HIGH);
    
  }else
  {
    digitalWrite(buzzer,LOW);
    digitalWrite(led,LOW);
    
  }
  

}
