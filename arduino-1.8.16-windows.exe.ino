//Student Name= Hridaya Bhattarai
//Code for Smart Dustbin
#include <Servo.h>   //servo library
Servo servo;     
int trigPin = 9; //assigning trigpin in 9    
int echoPin = 8;   //assigning echoPin in 8
int servoPin = 13; //assigning servo in 13
int led= 10; 
long duration, dist, average; //declaring variables   
long aver[3];   //array for average


void setup() {       
    Serial.begin(9600); //passes 9600 to the speed parameter
    servo.attach(servoPin);  
    pinMode(trigPin, OUTPUT);  //taking trigpin as output
    pinMode(echoPin, INPUT);  //taking echo pin as output
    servo.write(0);         //close cap on power on
    delay(100);// wait for 100 ms
    servo.detach(); //detaching servo
} 

void measure() {  
 digitalWrite(10,HIGH); //taking high value as output
digitalWrite(trigPin, LOW); //taking low value as output
delayMicroseconds(5);//wait for 5 ms
digitalWrite(trigPin, HIGH); //taking high value as output
delayMicroseconds(15); //wait for 15 ms
digitalWrite(trigPin, LOW); //taking low value as output
pinMode(echoPin, INPUT); //taking echopin as input
duration = pulseIn(echoPin, HIGH); //assigning duration to echopin
dist = (duration/2) / 29.1;    //obtain distance
}
void loop() { 
  for (int i=0;i<=2;i++) {   //average distance using loop
    measure();               
   aver[i]=dist;            
    delay(10);              //delay between measurements
  }
 dist=(aver[0]+aver[1]+aver[2])/3;    

if ( dist<50 ) {
//Change distance as per your need
 servo.attach(servoPin);
  delay(1);
 servo.write(0);  
 delay(3000);       
 servo.write(180);    //move servo by 180 degrees
 delay(1000); //wait for 1000ms
 servo.detach();      
}
Serial.print(dist);
}
//Student Name= Hridaya Bhattarai
Student ID=2065693
//Code for Smart Dustbin
//Date: January 22nd 20222
#include <Servo.h>   //servo library
Servo servo;     
int trigPin = 9; //assigning trigpin in 9    
int echoPin = 8;   //assigning echoPin in 8
int servoPin = 13; //assigning servo in 13
int led= 10; 
long duration, dist, average; //declaring variables   
long aver[3];   //array for average


void setup() {       
    Serial.begin(9600); //passes 9600 to the speed parameter
    servo.attach(servoPin);  
    pinMode(trigPin, OUTPUT);  //taking trigpin as output
    pinMode(echoPin, INPUT);  //taking echo pin as output
    servo.write(0);         //close cap on power on
    delay(100);// wait for 100 ms
    servo.detach(); //detaching servo
} 

void measure() {  
 digitalWrite(10,HIGH); //taking high value as output
digitalWrite(trigPin, LOW); //taking low value as output
delayMicroseconds(5);//wait for 5 ms
digitalWrite(trigPin, HIGH); //taking high value as output
delayMicroseconds(15); //wait for 15 ms
digitalWrite(trigPin, LOW); //taking low value as output
pinMode(echoPin, INPUT); //taking echopin as input
duration = pulseIn(echoPin, HIGH); //assigning duration to echopin
dist = (duration/2) / 29.1;    //obtain distance
}
void loop() { 
  for (int i=0;i<=2;i++) {   //average distance using loop
    measure();               
   aver[i]=dist;            
    delay(10);              //delay between measurements
  }
 dist=(aver[0]+aver[1]+aver[2])/3;    

if ( dist<50 ) {
//Change distance as per your need
 servo.attach(servoPin);
  delay(1);
 servo.write(0);  
 delay(3000);       
 servo.write(180);    //move servo by 180 degrees
 delay(1000); //wait for 1000ms
 servo.detach();      
}
Serial.print(dist);
}
