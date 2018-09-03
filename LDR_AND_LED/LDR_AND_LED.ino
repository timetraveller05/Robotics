
const int analogInPin = A0;
int sensorValue = 0;
int outputValue = 0;
int led = 5;
void setup() 
{
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led,OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
sensorValue=analogRead(analogInPin);
outputValue = map(sensorValue,0,1023,0,255);
Serial.print("Reading is =");
Serial.print(sensorValue);
Serial.print("\t\tOutput Value is =");
Serial.println(outputValue);
analogWrite(led,outputValue);
}
