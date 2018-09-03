const int temp=1;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
float voltage,degreeC,degreeF;
voltage = analogRead(temp);
degreeC = (voltage-0.5)*100.0;  
degreeF = degreeC * (9.0/5.0) + 32;
Serial.print("voltage : ");
Serial.print(voltage);
Serial.print("Degrees in Centigrade : ");
Serial.print(degreeC);
Serial.print("In Fahrenheit : ");
Serial.println(degreeF);
delay(1000);
}

