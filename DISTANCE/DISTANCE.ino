int LED1= 6;
int LED2= 7;
int LED3= 8;
int LED4= 9;
int LED5= 10;
int LED6= 11;
int BUZZ=5;
const int trigp=13;
const int echop=12;
long duration;
int distance;
void setup() 
{
pinMode(trigp,OUTPUT);
pinMode(echop,INPUT);
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
pinMode(LED3,OUTPUT);
pinMode(LED4,OUTPUT);
pinMode(LED5,OUTPUT);
pinMode(LED6,OUTPUT);
pinMode(BUZZ,OUTPUT);
Serial.begin(9600);
}

void loop() 
{
  digitalWrite(trigp,LOW);
  delay(2);
  digitalWrite(trigp,HIGH);
  delay(10);
  digitalWrite(trigp,LOW);
  duration = pulseIn(echop,HIGH);
  distance = duration*0.034/2;
  Serial.print("Distance : ");
  Serial.println(distance);
  if(distance<=40 and distance>=35)
  {
    digitalWrite(LED1,HIGH);
    digitalWrite(BUZZ,HIGH);
    delay(80);
    digitalWrite(BUZZ,LOW);
    delay(500);
    //continue;
  }
  else if(distance<=35 and distance >=30)
  {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(BUZZ,HIGH);
    delay(80);
    digitalWrite(BUZZ,LOW);    
    delay(500);
    //continue;
  }
  else if(distance<=30 and distance>=25)
  {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(BUZZ,HIGH);
    delay(80);
    digitalWrite(BUZZ,LOW);
    delay(500);
    //continue;
  }
  else if(distance<=25 and distance>=20)
  {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,HIGH);
    digitalWrite(BUZZ,HIGH);
    delay(80);
    digitalWrite(BUZZ,LOW);
    delay(500);
    //continue;  
  }
  else if(distance<=20 and distance>=15)
  {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,HIGH);
    digitalWrite(LED5,HIGH);
    digitalWrite(BUZZ,HIGH);
    delay(80);
    digitalWrite(BUZZ,LOW);
    delay(500);
    //continue;
  }
  else if(distance<=15 and distance>=10)
  {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,HIGH);
    digitalWrite(LED5,HIGH);
    digitalWrite(LED6,HIGH);
    digitalWrite(BUZZ,HIGH);
    delay(80);
    digitalWrite(BUZZ,LOW);
    delay(500);
    //continue;
  }
  else if(distance<=10 and distance>=0)
  {
      digitalWrite(LED1,HIGH);
      digitalWrite(LED2,HIGH);
      digitalWrite(LED3,HIGH);
      digitalWrite(LED4,HIGH);
      digitalWrite(LED5,HIGH);
      digitalWrite(LED6,HIGH);
      delay(100);
      digitalWrite(LED1,LOW);
      digitalWrite(LED2,LOW);
      digitalWrite(LED3,LOW);
      digitalWrite(LED4,LOW);
      digitalWrite(LED5,LOW);
      digitalWrite(LED6,LOW);    
      delay(100);
      digitalWrite(BUZZ,HIGH);
      delay(250);
      digitalWrite(BUZZ,LOW);      
  }
  else if(distance > 40)
  {
      digitalWrite(LED1,LOW);
      digitalWrite(LED2,LOW);
      digitalWrite(LED3,LOW);
      digitalWrite(LED4,LOW);
      digitalWrite(LED5,LOW);
      digitalWrite(LED6,LOW);
      digitalWrite(BUZZ,LOW);
  }
}
