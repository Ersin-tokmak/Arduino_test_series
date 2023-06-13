const int analogGiris=A0;
void setup() {
  pinMode(analogGiris,INPUT);
  Serial.begin(9600);

}

void loop() {
  int deger=analogRead(analogGiris);
  Serial.println("deger:");
  Serial.println(deger);
  delay(1000);

}
