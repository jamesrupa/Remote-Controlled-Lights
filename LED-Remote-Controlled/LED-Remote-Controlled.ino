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
int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;
int led7 = 8;
int led8 = 9;
int led9 = 10;


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
}
