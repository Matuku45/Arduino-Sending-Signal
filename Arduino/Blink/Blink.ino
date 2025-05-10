
int index = 1;
int index2 = 2;
int index3 = 3;

void setup(){
  
 pinMode(index , OUTPUT); 
 pinMode(index2 , OUTPUT);
   pinMode(index3 , OUTPUT);
}
void loop(){
  
 digitalWrite(index ,HIGH); 
 delay(4000);
  digitalWrite(index ,LOW);
  delay(1000);
  
    
 digitalWrite(index2 ,HIGH); 
 delay(4000);
  digitalWrite(index2 ,LOW);
  delay(1000);
  
   digitalWrite(index3 ,HIGH); 
 delay(4000);
  digitalWrite(index3 ,LOW);
  delay(1000);
  
}