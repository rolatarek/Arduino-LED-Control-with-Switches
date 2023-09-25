int led1 = 7 ;
int led2 = 6 ;
int led3 = 4 ;
int led4 = 2 ;
int slideswitch1 = 11 ;
int slideswitch2 = 10 ;
int reading1 = 0 ;
int reading2 = 0 ;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(slideswitch1 , INPUT);
  pinMode(slideswitch2 , INPUT);
}

void loop()
{
  reading1 = digitalRead(slideswitch1);
  reading2 = digitalRead(slideswitch2);
 
 if (reading1 == HIGH && reading2 == LOW)
  {
   digitalWrite(led1 , HIGH);
   digitalWrite(led2 , HIGH);
   digitalWrite(led3 , LOW);
   digitalWrite(led4 , LOW);
   
  }
  else if (reading2 == HIGH && reading1 == LOW)
  {
   digitalWrite(led3 , HIGH);
   digitalWrite(led4 , HIGH);
   digitalWrite(led1 , LOW);
   digitalWrite(led2 , LOW);
  }
  else if (reading1 == HIGH && reading2 == HIGH)
  {
   
   digitalWrite(led1 , HIGH);
   digitalWrite(led2 , HIGH);
   digitalWrite(led3 , HIGH);
   digitalWrite(led4 , HIGH);
  }
  else
  {
   digitalWrite(led1 , LOW);
   digitalWrite(led2 , LOW);
   digitalWrite(led3 , LOW);
   digitalWrite(led4 , LOW);
  }
}