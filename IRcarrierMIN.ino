//
// IRcarrierMIN
// 
// Generate a 38 MHz PWM signal 


#include <TimerOne.h>
#include <myIR.h>

const byte IRtransmitPin = 9;  // Primary fire mode IR transmitter pin
const byte period = 26;        // 1/freq : e.g: for 38000Hz, period = 26

void setup() 
{
  Serial.begin(SERIAL_SPEED);
  pinMode(IRtxPIN, OUTPUT);      
  Timer1.initialize();              
  //   Set the IR transmit pin to generate the IR carrier signal (%50 duty cycle)
  Timer1.pwm(IRtxPIN, 512, period);
}
 
void loop()
{
}
 
