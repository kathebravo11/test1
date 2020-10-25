void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{
  if (digitalRead (2)== 0)
  {
    digitalWrite (5, HIGH);
    delay(1000);
    digitalWrite (6, HIGH);
    digitalWrite (5, LOW);
    digitalWrite (11, HIGH);
    delay(1000);
    digitalWrite (7, HIGH);
    digitalWrite (6, LOW);    
    delay(1000);
    digitalWrite (7, LOW);
    delay(1000);
    digitalWrite (12, HIGH);
    digitalWrite (11, LOW);
    digitalWrite (5, HIGH);
    delay(1000);
    digitalWrite (13, HIGH);
    digitalWrite (12, LOW);
    delay(1000);
    digitalWrite (13, LOW);
    //delay(1000);
  }
  else
  {
    digitalWrite (11, LOW);
    digitalWrite (12, LOW);    
    digitalWrite (13, LOW);
    digitalWrite (5, HIGH);
    delay(1000);
    digitalWrite (6, HIGH);
    digitalWrite (5, LOW);
    delay(1000);
    digitalWrite (7, HIGH);
    digitalWrite (6, LOW);
    delay(1000);
    digitalWrite (7, LOW);
    
  }
  
}
