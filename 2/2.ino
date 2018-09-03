int LED1 =13;
int LED2 =12;
int LED3 =11;
int LED4 =10;
int LED5 =9;
int LED6 =8;
//int LED7 = 8;
//int LED8 = 8;


void setup() 
{
        // put your setup code here, to run once:
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
    pinMode(LED4, OUTPUT);
    pinMode(LED5, OUTPUT);
    pinMode(LED6, OUTPUT);



}

void loop() 
{
       
       // put your main code here, to run repeatedly:
    digitalWrite(LED1, HIGH);
     delay(175);
    digitalWrite(LED1,LOW); 
    
    digitalWrite(LED2, HIGH);
     delay(175);
    digitalWrite(LED2,LOW); 
    
    digitalWrite(LED3, HIGH);
     delay(175);
    digitalWrite(LED3,LOW); 
    
    digitalWrite(LED4, HIGH);
     delay(175);
    digitalWrite(LED4,LOW); 
    
    digitalWrite(LED5, HIGH);
     delay(175);
    digitalWrite(LED5,LOW); 
    
    digitalWrite(LED6, HIGH);
     delay(175);
    digitalWrite(LED6,LOW); 
    
    /*digitalWrite(LED7, HIGH);
     delay(1000);
    digitalWrite(LED2.LOW); 
    
    digitalWrite(LED1, HIGH);
     delay(1000);
    digitalWrite(LED2.LOW);*/ 
}

