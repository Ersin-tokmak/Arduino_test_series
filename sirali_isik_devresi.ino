const int sure = 1000;
void setup() {
 for(int ledPin=2;ledPin<12; ledPin++)
 {
  pinMode(ledPin,OUTPUT);
  }
}

void loop() {
  for (int ledPin=2; ledPin<12; ledPin++)
  {
    digitalWrite(ledPin,HIGH);
    delay(sure);
    digitalWrite(ledPin,LOW);
    }
   for (int ledPin=11; ledPin>1; ledPin--)
  {digitalWrite(ledPin,HIGH);
   delay(sure);
   digitalWrite(ledPin,LOW);
    
    }
}
