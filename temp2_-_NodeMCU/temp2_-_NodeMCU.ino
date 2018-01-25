

int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 12;
int f = 13;
int g = 15;

void setup() {

    pinMode(a, OUTPUT); //GPIO2 --> D4 ---> InBuilt-LED
    pinMode(b, OUTPUT); //GPIO3 --> D9
    pinMode(c, OUTPUT); //GPIO4 --> D2
    pinMode(d, OUTPUT); //GPIO5 --> D1
    pinMode(e, OUTPUT); //GPIO12 --> D6
    pinMode(f, OUTPUT); //GPIO13 --> D7
    pinMode(g, OUTPUT); //GPIO15 --> D8

}
void zero(){
  digitalWrite(b,0);
  digitalWrite(2,0);
  digitalWrite(e,0);
  digitalWrite(d,0);
  digitalWrite(c,0);
  digitalWrite(f,0);
  }
void one(){
  digitalWrite(b,0);
  digitalWrite(c,0);
}
   void two(){
    digitalWrite(2,0);
  digitalWrite(b,0);
  digitalWrite(g,0);
  digitalWrite(e,0);
  digitalWrite(d,0);
}
   void three(){
  digitalWrite(2,0);
  digitalWrite(b,0);
  digitalWrite(g,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
}
   void four(){
  digitalWrite(f,0);
  digitalWrite(g,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  
}
   void five(){
  digitalWrite(2,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
   }
   void six(){
  digitalWrite(2,0);
  digitalWrite(f,0);
  digitalWrite(e,0);
  digitalWrite(d,0);
  digitalWrite(c,0);
  digitalWrite(g,0);
   }
   void seven(){
  digitalWrite(2,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
   }
   void eight(){
  digitalWrite(2,0);
  digitalWrite(b,0);
  digitalWrite(f,0);
  digitalWrite(e,0);
  digitalWrite(d,0);
  digitalWrite(c,0);
  digitalWrite(g,0);
   }
   void nine(){
  digitalWrite(2,0);
  digitalWrite(b,0);
  digitalWrite(f,0);
  digitalWrite(c,0);
  digitalWrite(g,0);
  digitalWrite(d,0);
   }
void blackout(){
  digitalWrite(2,1);
  digitalWrite(b,1);
  digitalWrite(f,1);
  digitalWrite(e,1);
  digitalWrite(d,1);
  digitalWrite(c,1);
  digitalWrite(g,1);
  
  }
   void testToTen(){
    
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
    
void testBySegment(){
  
 digitalWrite(a,LOW);
  delay(1000);
 digitalWrite(a,HIGH);   
  delay(1000);
  digitalWrite(b,LOW);
  delay(1000);
 digitalWrite(b,HIGH);   
  delay(1000);
  digitalWrite(c,LOW);
  delay(1000);
 digitalWrite(c,HIGH);   
  delay(1000);
  digitalWrite(d,LOW);
  delay(1000);
 digitalWrite(d,HIGH);   
  delay(1000);
    digitalWrite(e,LOW);
  delay(1000);
 digitalWrite(e,HIGH);   
  delay(1000);
  digitalWrite(f,LOW);
  delay(1000);
 digitalWrite(f,HIGH);   
  delay(1000);
  digitalWrite(g,LOW);
  delay(1000);
 digitalWrite(g,HIGH);   
  delay(1000);
  }
   

      
void loop() {
  testToTen();
}
