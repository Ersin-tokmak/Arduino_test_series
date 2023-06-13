void setup() {
  Serial.begin(9600);
  

}

void loop() {
  int LDRDeger=analogRead(A0);
  Serial.println("Işık Şiddeti:");
  Serial.print(LDRDeger);

}
