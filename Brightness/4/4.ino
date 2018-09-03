int LED=9;
int brightness= 0;
int fadeamount= 5;
void setup() {
  // put your setup code here, to run once:
pinMode(LED,OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
analogWrite(LED,fadeamount);
brightness=brightness+fadeamount;
if(brightness<=0 || brightness>=255)
  {
  brightness= +brightness;
  }

delay(1000);

}

