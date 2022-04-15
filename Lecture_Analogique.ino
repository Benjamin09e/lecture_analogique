int mot1=3;
int mot2=11;
void setup() {
  pinMode(mot1,OUTPUT);
  pinMode(mot2,OUTPUT);
}

void loop() {
  for(int i=0; i<255; i=i+50)
{
 analogWrite(mot1,i);
 analogWrite(mot2,0);
 delay(1000);
}
  for(int i=0; i<255; i=i+50)
{
 analogWrite(mot1,0);
 analogWrite(mot2,i);
 delay(1000);
 }
}
