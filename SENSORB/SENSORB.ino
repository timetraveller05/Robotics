
const int trigpin = 13;
const int echopin = 12;
long duration ;
int distance ;
void setup() 
{
pinMode(trigpin,OUTPUT);
pinMode(echopin,INPUT);
Serial.begin(9600);
}

void loop() 
{
  // put your main code here, to run repeatedly:
digitalWrite(trigpin,LOW);
delay(2);
digitalWrite(trigpin,HIGH);
delay(10);
digitalWrite(trigpin,LOW);
duration = pulseIn(echopin,HIGH);
distance = duration * 0.034/2;
Serial.print("Distance : ");
Serial.println(distance);
}
