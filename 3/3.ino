int led[8] = {13, 12, 11, 10, 9, 8, 7, 6};


void setup() 
{
    // put your setup code here, to run once:
    for(int i = 0; i < 8; i++)
    {
      pinMode(led[i], OUTPUT);
    }



}

void loop() 
{
       
    // put your main code here, to run repeatedly:
    for(int i = 0; i < 8; i++)
    {
      digitalWrite(led[i], HIGH);
      delay(250);
      digitalWrite(led[i], LOW);
      delay(250);
      digitalWrite(led[i], HIGH);
      delay(250);
      digitalWrite(led[i], LOW);
      delay(250);
    }
}
