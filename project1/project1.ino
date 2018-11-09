  hours=0;
  minutes=0;
  seconds=0;
  motorpin=13;

void setup(){
  
  Serial.begin(9600);
  
}

void loop(){

  if(hours>=24)
  {
    if(minutes>=60)
    {
      minutes=0;
      if(seconds>=60)
      {
        seconds=0;
      }
      else
      {
        delay(1000);
        seconds=seconds+1;
      }
    }
    else
    {
      minutes=minutes+1;
    }
  }
  else
  {
    hours=hours+1;
  }

  Serial.print(hours);
  Serial.print(":");
  Serial.print(minutes);
  Serial.print(":");
  Serial.print(seconds);
  Serial.print(":");

  if(hours==5 && minutes==0){
    digitalWrite(motorpin,HIGH);
    Serial.print("Motor On");
    delay(5000);
    digitalWrite(motorpin,LOW);
  }
  else
  {
    digitalWrite(motorpin,LOW);
  }
}
