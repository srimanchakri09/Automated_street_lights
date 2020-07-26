void setup() {
int trig1=2;
int echo1=4;
int trig2=5;
int echo2=6;
int trig3=7;
int echo3=8;
int led1=9;
int led2=10;
int led3=11;
int led4=3;
int duration1,duration2,duration3,cm1,cm2,cm3;
void setup() {
  pinMode(trig1,OUTPUT);
  pinMode(echo1,INPUT);
  pinMode(trig2,OUTPUT);
  pinMode(echo2,INPUT);
  pinMode(trig3,OUTPUT);
  pinMode(echo3,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  Serial.begin(9600);


}

void loop() {
  check1();
  check2();
  check3();
  if(cm1<15)
  {
    digitalWrite(led1,HIGH);
  }
  else
  {
    digitalWrite(led1,LOW);
  }
  if (cm1<15||cm2<15)
  {
    digitalWrite(led2,HIGH);
  }
  else
  {
    digitalWrite(led2,LOW);
  }
  if (cm2<15||cm3<15)
  {
    digitalWrite(led3,HIGH);
  }
  else 
  {
    digitalWrite(led3,LOW);
  }
  if (cm3<15)
  {
    digitalWrite(led4,HIGH);
  }
  else
  {
    digitalWrite(led4,LOW);
  }

}
void check1()
{
  digitalWrite(trig1,LOW);
  delay(2);
  digitalWrite(trig1,HIGH);
  delay(10);
  duration1=pulseIn(echo1,HIGH);
  cm1=(duration*0.034)/2;
  Serial.print("distance=");
  Serial.println(cm1); 
}
void check2()
{
  
  digitalWrite(trig2,LOW);
  delay(2);
  digitalWrite(trig2,HIGH);
  delay(10);
  duration2=pulseIn(echo2,HIGH);
  cm2=(duration*0.034)/2;
  Serial.print("distance=");
  Serial.println(cm2); 
}
void check3()
{
  digitalWrite(trig3,LOW);
  delay(2);
  digitalWrite(trig3,HIGH);
  delay(10);
  duration3=pulseIn(echo3,HIGH);
  cm3=(duration*0.034)/2;
  Serial.print("distance=");
  Serial.println(cm3); 
}
