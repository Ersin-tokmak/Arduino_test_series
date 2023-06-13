int ledPin=9;
int sensorPin=8;

void setup() {
  pinMode(sensorPin,INPUT);
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  int deger=digitalRead(sensorPin);
  if(deger>0)
  {
    digitalWrite(ledPin,LOW);
    delay(200);
    
  }
  else
  {
    digitalWrite(ledPin,HIGH);
    delay(200);
  }
}
