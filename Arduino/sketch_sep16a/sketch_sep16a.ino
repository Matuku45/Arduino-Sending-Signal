void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  

}

void loop() {
  

 
if (Serial.available()) {
   char infor = (char)Serial.read() ;
  if(infor == 'a'){
   digitalWrite(13,HIGH);
   digitalWrite(3,HIGH);

  }
}


delay(1000);

}
