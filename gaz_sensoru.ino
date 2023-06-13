int kirmizi=9;
int mavi=10;
int yesil=11;
int sensorPin=A0;



void setup() {
  pinMode(kirmizi,OUTPUT);
  pinMode(mavi,OUTPUT);
  pinMode(yesil,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  int deger=analogRead(sensorPin);
  Serial.println(deger);
  if(deger>700)
  {
    digitalWrite(kirmizi,HIGH);
    digitalWrite(mavi,LOW);
    digitalWrite(yesil,LOW);
  }
  else if(400<deger<700)
  {
    digitalWrite(kirmizi,LOW);
    digitalWrite(mavi,HIGH);
    digitalWrite(yesil,LOW);
  }
  else
  {
    digitalWrite(kirmizi,LOW);
    digitalWrite(mavi,LOW);
    digitalWrite(yesil,HIGH);
  }

    
    }
