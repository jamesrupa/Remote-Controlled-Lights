#include <ir_Lego_PF_BitStreamEncoder.h>
#include <boarddefs.h>
#include <IRremoteInt.h>
#include <IRremote.h>

// VARIABLES

// IR VAR.
int rcv = 13;
IRrecv irrecv(rcv);
decode_results results;

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

void setup() {
  
  irrecv.enableIRIn();
  irrecv.blink13(true);
  
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

    // LED 1
    switch(results.value) {
      case 0xFF30CF:
      if (itsONled[1] == 1) {
        digitalWrite(led1, LOW);
        itsONled[1] = 0;
      } else {
        digitalWrite(led1, HIGH);
        itsONled[1] = 1;
      }
        break;
      } 
        irrecv.resume(); 
    }
}
