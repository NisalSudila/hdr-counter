
void setup() {
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);

    int count1 =0;
    pinMode(9, INPUT);

    
    
digitalWrite(2,1);
digitalWrite(3,1);
digitalWrite(4,1);
digitalWrite(5,1);

digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(8,1);


}
void zero(){
  digitalWrite(3,0);
  digitalWrite(2,0);
  digitalWrite(6,0);
  digitalWrite(5,0);
  digitalWrite(4,0);
  digitalWrite(7,0);
  }
void one(){
  digitalWrite(3,0);
  digitalWrite(4,0);
}
   void two(){
    digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(8,0);
  digitalWrite(6,0);
  digitalWrite(5,0);
}
   void three(){
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(8,0);
  digitalWrite(4,0);
  digitalWrite(5,0);
}
   void four(){
  digitalWrite(7,0);
  digitalWrite(8,0);
  digitalWrite(3,0);
  digitalWrite(4,0);
  
}
   void five(){
  digitalWrite(2,0);
  digitalWrite(7,0);
  digitalWrite(8,0);
  digitalWrite(4,0);
  digitalWrite(5,0);
   }
   void six(){
  digitalWrite(2,0);
  digitalWrite(7,0);
  digitalWrite(6,0);
  digitalWrite(5,0);
  digitalWrite(4,0);
  digitalWrite(8,0);
   }
   void seven(){
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,0);
   }
   void eight(){
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(7,0);
  digitalWrite(6,0);
  digitalWrite(5,0);
  digitalWrite(4,0);
  digitalWrite(8,0);
   }
   void nine(){
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(7,0);
  digitalWrite(4,0);
  digitalWrite(8,0);
   }
void blackout(){
  digitalWrite(2,1);
  digitalWrite(3,1);
  digitalWrite(7,1);
  digitalWrite(6,1);
  digitalWrite(5,1);
  digitalWrite(4,1);
  digitalWrite(8,1);
  
  }
   void testToTen(){
    for(int i=0; i<3; i++){
    zero();
    delay(1000);
    blackout();
//    delay(1000);
    
    one();
    delay(1000);
    blackout();
//    delay(1000);
    
    two();
    delay(1000);
    blackout();
//    delay(1000);
    
    three();
    delay(1000);
    blackout();
//    delay(1000);
    
    four();
    delay(1000);
    blackout();
//    delay(1000);
    
    five();
    delay(1000);
    blackout();
//    delay(1000);
    
    six();
    delay(1000);
    blackout();
//    delay(1000);
    
    seven();
    delay(1000);
    blackout();
//    delay(1000);
    
    eight();
    delay(1000);
    blackout();
//    delay(1000);
    
    nine();
    delay(1000);
    blackout();
//    delay(1000);
      }
    }

   

      
void loop() {
  
 testToTen();
  
    
  
    
}
