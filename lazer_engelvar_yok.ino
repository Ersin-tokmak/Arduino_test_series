int lazerPin=7;
int sensorPin=A0;
int deger=0;

void setup() {
  pinMode(lazerPin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  deger=analogRead(sensorPin);
  if(deger<950)
  {
    Serial.println("Engel var");
  }
  else
  {
    Serial.println("Engel yok");
  }

}
