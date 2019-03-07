#include <ir_Lego_PF_BitStreamEncoder.h>
#include <boarddefs.h>
#include <IRremoteInt.h>
#include <IRremote.h>

/*
CODES
---
PWR       FF629D     
CH          FFE21D        
|<<          FF22DD  
>|            FFC23D              
>>|          FF02FD               
-              FFE01F 
Plus        FFA857         
EQ          FF906F          
0             FF6897            
100         FF9867           
200         FFB04F           
1             FF30CF                 
2             FF18E7                 
3             FF7A85                  
4             FF10EF                   
5             FF38C7                    
6             FF5AA5                  
7             FF42BD                  
8             FF48B5             
9             FF52AD 
*/

// VARIABLES

// IR VAR.
int rcv = 13;

#define code1 0xFF30CF
#define code2 0xFF18E7
#define code3 0xFF7A85 
#define code4 0xFF10EF 
#define code5 0xFF38C7
#define code6 0xFF5AA5
#define code7 0xFF42BD
#define code8 0xFF4AB5
#define code9 0xFF52AD
#define code0 0xFF6897
#define codePWR 0xFFA25D

// LED VAR.
int led1 = 10;
int led2 = 9;
int led3 = 8;
int led4 = 7;
int led5 = 6;
int led6 = 5;
int led7 = 4;
int led8 = 3;
int led9 = 2;
int itsONled[] = {0,0,0,0,0,0,0,0,0};

IRrecv irrecv(rcv);
decode_results results;

void setup() {

  Serial.begin(9600);
  irrecv.enableIRIn();
  //irrecv.blink13(true);
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  
}

void loop() {
  
  if (irrecv.decode(&results)) {

    Serial.println(results.value, HEX);

    // LED 1
    
    switch(results.value) {
      case code1:
        if (itsONled[0] == 1) {
          digitalWrite(led1, LOW);
          itsONled[0] = 0;
      } else {
        digitalWrite(led1, HIGH);
        itsONled[0] = 1;
      }
        break;
      }

    // LED 2
    
    switch(results.value) {
      case code2:
        if (itsONled[1] == 1) {
          digitalWrite(led2, LOW);
          itsONled[1] = 0;
      } else {
        digitalWrite(led2, HIGH);
        itsONled[1] = 1;
      }
        break;
      } 

    // LED 3
    
    switch(results.value) {
      case code3:
        if (itsONled[2] == 1) {
          digitalWrite(led3, LOW);
          itsONled[2] = 0;
      } else {
        digitalWrite(led3, HIGH);
        itsONled[2] = 1;
      }
        break;
      } 

    // LED 4
    
    switch(results.value) {
      case code4:
        if (itsONled[3] == 1) {
          digitalWrite(led4, LOW);
          itsONled[3] = 0;
      } else {
        digitalWrite(led4, HIGH);
        itsONled[3] = 1;
      }
        break;
      }

    // LED 5
    
    switch(results.value) {
      case code5:
        if (itsONled[4] == 1) {
          digitalWrite(led5, LOW);
          itsONled[4] = 0;
      } else {
        digitalWrite(led5, HIGH);
        itsONled[4] = 1;
      }
        break;
      } 

    // LED 6
    
    switch(results.value) {
      case code6:
        if (itsONled[5] == 1) {
          digitalWrite(led6, LOW);
          itsONled[5] = 0;
      } else {
        digitalWrite(led6, HIGH);
        itsONled[5] = 1;
      }
        break;
      } 

      // LED 7
    
    switch(results.value) {
      case code7:
        if (itsONled[6] == 1) {
          digitalWrite(led7, LOW);
          itsONled[6] = 0;
      } else {
        digitalWrite(led7, HIGH);
        itsONled[6] = 1;
      }
        break;
      }

    // LED 8
    
    switch(results.value) {
      case code8:
        if (itsONled[7] == 1) {
          digitalWrite(led8, LOW);
          itsONled[7] = 0;
      } else {
        digitalWrite(led8, HIGH);
        itsONled[7] = 1;
      }
        break;
      } 

    // LED 9
    
    switch(results.value) {
      case code9:
        if (itsONled[8] == 1) {
          digitalWrite(led9, LOW);
          itsONled[8] = 0;
      } else {
        digitalWrite(led9, HIGH);
        itsONled[8] = 1;
      }
        break;
      } 

    // SEQUENCE

    switch(results.value) {
      case code0:
      digitalWrite(led1, HIGH);     
      delay(50);                  
      digitalWrite(led2, HIGH);    
      delay(50);                         
      digitalWrite(led3, HIGH);     
      delay(50);                  
      digitalWrite(led4, HIGH);
      delay(50);
      digitalWrite(led5, HIGH);
      delay(50);
      digitalWrite(led6, HIGH);     
      delay(50);                  
      digitalWrite(led7, HIGH);    
      delay(50);                  
      digitalWrite(led8, HIGH);    
      delay(50);                  
      digitalWrite(led9, HIGH);
      delay(50);
      digitalWrite(led1, LOW);     
      delay(50);                  
      digitalWrite(led2, LOW);     
      delay(50);                  
      digitalWrite(led3, LOW);     
      delay(50);                  
      digitalWrite(led4, LOW);
      delay(50);
      digitalWrite(led5, LOW);     
      delay(50);                  
      digitalWrite(led6, LOW);     
      delay(50);                  
      digitalWrite(led7, LOW);     
      delay(50);                  
      digitalWrite(led8, LOW);
      delay(50);
      digitalWrite(led8, HIGH);    
      delay(50);                                        
      digitalWrite(led7, HIGH);
      delay(50);
      digitalWrite(led6, HIGH);
      delay(50);
      digitalWrite(led5, HIGH);    
      delay(50);                  
      digitalWrite(led4, HIGH);    
      delay(50);                  
      digitalWrite(led3, HIGH);
      delay(50);
      digitalWrite(led2, HIGH);
      delay(50);
      digitalWrite(led1, HIGH);
      delay(50);                
      digitalWrite(led9, LOW);     
      delay(50);                  
      digitalWrite(led8, LOW);     
      delay(50);                  
      digitalWrite(led7, LOW);
      delay(50);
      digitalWrite(led6, LOW);     
      delay(50);                  
      digitalWrite(led5, LOW);     
      delay(50);                  
      digitalWrite(led4, LOW);     
      delay(50);                  
      digitalWrite(led3, LOW);
      delay(50);
      digitalWrite(led2, LOW);
      delay(50);
      digitalWrite(led1, LOW);
      delay(50);
    }
      
    irrecv.resume(); 
    }
}
