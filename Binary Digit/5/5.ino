int LED1 = 8;
int LED2 = 9;
int LED3 = 10;
int LED4 = 11;
int a[15][4];
int x=0;
void setup() 
{
  // put your setup code here, to run once:
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
pinMode(LED3,OUTPUT);
pinMode(LED4,OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
int i=1;
while(i<16)
  {
    x=i;
    int g=0;
    while(g<15)
      {
        int k=0;
        while(k<5)
          {
            a[g][k]=x%2;
            x=x/2;
            k++;
          }
        g++;
      }   
    i++;
  }
int n=0;
for(n=0;n<15;n++)
  {
    if(a[n][0]==1)
      {
        digitalWrite(LED1,HIGH);
      }
    else
      {
        digitalWrite(LED1,LOW);
      }
  
    if(a[n][1]==1)
      {
        digitalWrite(LED1,HIGH);
      }
    else
      {
        digitalWrite(LED1,LOW);
      } 
    if(a[n][2]==1)
      {
        digitalWrite(LED1,HIGH);
      }
    else
      {
        digitalWrite(LED1,LOW);
      }  
      if(a[n][3]==1)
      {
        digitalWrite(LED1,HIGH);
      }
    else
      {
        digitalWrite(LED1,LOW);
      }
  
  
  
  
  }
  

}
