const int LED1=11;
const int LED2=10;
const int LED3=9;

void setup(){
  
  //Declaration of pins
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);

}

void loop(){
  
  //Declaration of first loop
  for (int i=0;i<=100;i++){
    
    digitalWrite(11,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(9,HIGH);
    delay(i);
    
    digitalWrite(11,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(9,LOW);
    delay(i);
  }
  
  //Declaration of second loop
  for (int j=0;j<=100;j++){
    
    digitalWrite(11,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(9,LOW);
    delay(j);
    
    digitalWrite(11,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(9,HIGH);
    delay(j);
  }
}
