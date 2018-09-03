const int temp=0;

void setup() 
{
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
float voltage,degreeC,degreeF;
voltage = getVoltage(temp);
degreeC = (voltage-0.5)*100.0;  
degreeF = degreeC * (9.0/5.0) + 32;
Serial.print("voltage : ");
Serial.print(voltage);
Serial.print("Degrees in Centigrade : ");
Serial.print(degreeC);
Serial.print("In Fahrenheit : ");
Serial.println(degreeF);
}
float getVoltage(int pin)
{
  return (analogRead(pin) * 0.004882814);
}

