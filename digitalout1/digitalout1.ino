int push = 0;

void setup() {
  // put your setup code here, to run once:
  
  for(int i=2;i<=5;i++){
  pinMode(i,OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  /*
  for(int j=2;j<=5;j++){
  digitalWrite(j,HIGH);
  delay(1000);
  digitalWrite(j,LOW);
  delay(1000);
  }
  */
  
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  delay(500);
  digitalWrite(5,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  delay(500);
}
