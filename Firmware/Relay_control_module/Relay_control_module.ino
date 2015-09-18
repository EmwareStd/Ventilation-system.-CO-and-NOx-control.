#define SensorNum1  A0
#define SensorNum2  A1
#define RelayOutput1 8
#define RelayOutput2 9
#define RelayOutput3 10
#define RelayOutput4 11
#define RelayOutput5 12

void setup()
{
  pinMode(RelayOutput1, OUTPUT);
  pinMode(RelayOutput2, OUTPUT);
  pinMode(RelayOutput3, OUTPUT);
  pinMode(RelayOutput4, OUTPUT);
  pinMode(RelayOutput5, OUTPUT);
}

void loop()
{
  int Sens1, Sens2;
  Sens1 = analogRead(SensorNum1);
  Sens2 = analogRead(SensorNum2);

  if ((Sens1 > 512) || (Sens2 > 512))
  {
    digitalWrite(RelayOutput1, 1); digitalWrite(RelayOutput2, 1); digitalWrite(RelayOutput3, 1);
    digitalWrite(RelayOutput4, 1); digitalWrite(RelayOutput5, 1);
  }
  else
  {
    digitalWrite(RelayOutput1, 0); digitalWrite(RelayOutput2, 0); digitalWrite(RelayOutput3, 0);
    digitalWrite(RelayOutput4, 0); digitalWrite(RelayOutput5, 0);
  }
  delay(100);
}
