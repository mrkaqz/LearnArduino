void setup() {
  // put your setup code here, to run once:
  pinMode(8,INPUT);
  Serial.begin(9600);

  for(int i=2;i<=5;i++){
  pinMode(i,OUTPUT);
  }

}



void loop() {
  // put your main code here, to run repeatedly:
  int data = digitalRead(8);
  
  if(data==0){
  Serial.print("SW Pressed");
  Serial.print("\n");
  }else{
  Serial.print("SW Released");
  Serial.print("\n");  
  }
  
  
  digitalWrite(2,!data);
  digitalWrite(3,!data);
  digitalWrite(4,!data);
  digitalWrite(5,!data);
  
  delay(200);

}
