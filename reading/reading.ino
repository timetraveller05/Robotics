int led=13;
int inputpin=7;
void setup() 
{
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(inputpin,INPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
//digitalWrite(led,);
int read;
read = digitalRead(7);
if(read==1)
  {
    digitalWrite(led,HIGH);
  }
else
  {
    digitalWrite(led,LOW);
  }
}
