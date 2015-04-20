#include <Servo.h>  
Servo myservo1; 
Servo myservo2;
Servo myservo3;
Servo myservo4; 
Servo myservo5;
Servo myservo6;
Servo myservo7; 
Servo myservo8;
Servo myservo9;
Servo myservo10; 
Servo myservo11;
Servo myservo12;

int pos1 = 60;
int pos2 = 90;
int pos3 = 120;
int i;
int j;
int k;
int z;
int h;
int buttonState1;
int buttonState2;

const int buttonPin53 = 53;
const int buttonPin51 = 51;
void setup() 
{ 
  myservo1.attach(11);
  myservo2.attach(12);
  myservo3.attach(13);
  
  myservo4.attach(8);
  myservo5.attach(9);
  myservo6.attach(10);
  
  myservo7.attach(5);
  myservo8.attach(6);
  myservo9.attach(7);
  
  myservo10.attach(2);
  myservo11.attach(3);
  myservo12.attach(4);
  
  pinMode(buttonPin53, INPUT);
  pinMode(buttonPin51, INPUT);  
} 

void loop() 
{
  //Giro
  buttonState1 = digitalRead(buttonPin53);
  buttonState2 = digitalRead(buttonPin51);
  if (buttonState2 == HIGH)
 {
   myservo7.write(90);
  myservo1.write(60);
  myservo4.write(80);
  myservo10.write(100); 
  myservo2.write(150);
  myservo5.write(150);
  myservo8.write(150);
  myservo11.write(150);
  
  myservo3.write(120);
  myservo6.write(120);
  myservo9.write(110);
  myservo12.write(120);
  
for(j=0; j<=50; j+=2) 
  {                                  
    myservo10.write(100+j);
    myservo11.write(150-j);
    myservo12.write(120-j); 
    myservo1.write(60);
    delay(15);                        
  }
for(i=0; i<= 50; i+=5) 
  {                                  
    myservo11.write(100+i);
    myservo12.write(70+i); 
    delay(15);                        
  }
for(k=0; k<= 50; k+=2) 
  {                                  
    myservo1.write(60+k);
    myservo2.write(150-k);
    myservo3.write(120-k);
    myservo10.write(150-k);
    myservo4.write(80+k);
    delay(15);        
  }
for(i=0; i<= 50; i+=5) 
  {                                  
    myservo2.write(100+i);
    myservo3.write(70+i);
    delay(15);                        
  }
for(z=0; z<= 50; z+=2) 
  {                                  
    myservo7.write(90-z);
    myservo8.write(150-z);
    myservo9.write(120-z); 
    delay(15);                        
  }
  for(i=0; i<= 50; i+=5) 
  {                                  
    myservo8.write(100+z);
    myservo9.write(70+z); 
    delay(15);                        
  }
   for(h=0; h<= 50; h+=2) 
  {                                  
    myservo4.write(130-h);
    myservo5.write(150-h);
    myservo6.write(120-h);
    myservo1.write(110-h);
    myservo7.write(40+h);  
    delay(15);                        
  }
  for(i=0; i<= 50; i+=5) 
  {                                  
    myservo5.write(100+z);
    myservo6.write(70+z); 
    delay(15);                        
  }
 } 
  if (buttonState1 == HIGH) 
  {     
     for(pos1=60; pos1 <= 150; pos1+=2) 
  {                                  
    myservo1.write(pos1);
    myservo4.write(pos1-20);
    myservo7.write(pos1);
    myservo10.write(pos1);
    delay(15);                        
  }
   for(pos2=150; pos2 >=60 ; pos2-=10) 
  {                                  
    myservo2.write(pos2);
    myservo5.write(pos2);
    myservo8.write(pos2);
    myservo11.write(pos2);
    delay(15);                        
  }
  for(pos3=120; pos3 >=30 ; pos3-=10) 
  {                                  
    myservo3.write(pos3);
    myservo6.write(pos3);
    myservo9.write(pos3);
    myservo12.write(pos3);
    delay(15);                        
  }
    for(pos1=150; pos1 >=60; pos1-=2) 
  {                                  
    myservo1.write(pos1);
    myservo4.write(pos1-20);
    myservo7.write(pos1);
    myservo10.write(pos1);   
    delay(15);                        
  }
   for(pos3=30; pos3 <=120 ; pos3+=10) 
  {                                  
    myservo3.write(pos3);
    myservo6.write(pos3);
    myservo9.write(pos3);
    myservo12.write(pos3);
    delay(15);                        
  }
    for(pos2=60; pos2 <=150 ; pos2+=10) 
  {                                  
    myservo2.write(pos2);
    myservo5.write(pos2);
    myservo8.write(pos2);
    myservo11.write(pos2);
    delay(15);                        
  }
  delay(100);
  }
  
  
  else{
    //Pata 1
    myservo1.write(110);
                        myservo2.write(150);
                                           myservo3.write(120);
    //Pata 2
    myservo4.write(80);
                       myservo5.write(150);
                                           myservo6.write(120);
    //Pata 3
    myservo7.write(90);
                       myservo8.write(150);
                                           myservo9.write(110);
    //Pata 4
    
    myservo10.write(110);
                       myservo11.write(150);
                                            myservo12.write(120);
  }
  }
  

