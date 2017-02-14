void setup(){
  pinMode(10, OUTPUT);  //clk output
  pinMode(11, OUTPUT);  //#enable
  pinMode(12, INPUT);  //ready
  pinMode(13, OUTPUT); //reflects ready on led
  
  tone(10, 60000);
}


void loop(){
  if(digitalRead(12)==LOW){
    digitalWrite(13, HIGH);
  }else{
    digitalWrite(13, LOW);
  }
  digitalWrite(11, LOW);
  delay(300);
  //we're having so much fun, why turn it off
  digitalWrite(11, LOW);
  delay(300);
}
