void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(2,OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  int data = analogRead(A0);
  float volt = data*5.0/1024;
  
  Serial.print("A2D=");
  Serial.print(data);
  Serial.print("    Voltage=");
  Serial.println(volt,4);
  
  if(data > 511){
    digitalWrite(2,HIGH);
  }else{
    digitalWrite(2,LOW);
  }
  
  delay(500);
  
  
}
