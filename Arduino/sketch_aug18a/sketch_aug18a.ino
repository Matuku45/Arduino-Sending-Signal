int index = 6;
   int main(){
    return 0;
   }
  void setup(){
  pinMode(index ,OUTPUT);

  }
     
  void loop(){
   digitalWrite(index,HIGH); 
   delay(2000);
   digitalWrite(index,LOW);

  }