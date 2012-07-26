//
// myIR.h - last update 24 July 2012 by CAJ
//

//
//  PIN definitions
//  ----------------
#define IRrxPIN   	2     // the pin that's connected to the IR LED
#define PULSE_PIN 	4	// connect an oscilloscope to this pin to measure loop timings
#define IRtxPIN		9	// must be 9 or 10 to work with Timer1 PWM (ardutag)
#define STATUS_LED	13

//
// CONSTANTS
//
#define IR_PERIOD	26	// inverse of frequency, in ųs.  e.g.: 26ųs for 38kHz, 18ųs for 56kHz, etc...
#define SERIAL_SPEED    9600
