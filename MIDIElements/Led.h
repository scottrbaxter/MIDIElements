// MIDI Elements LED class
// Library to simplifly handling of compontents for MIDI controllers
// Created by Tomash Ghz
// www.tomashg.com
// ghz.tomash@gmail.com

#ifndef Led_H
#define Led_H

//-----------------------------------------------------------------------------------
#include "WProgram.h" //It is very important to remember this! note that if you are using Arduino 1.0 IDE, change "WProgram.h" to "Arduino.h"

class Led {
private:
	byte pin; // pin on teensy
	byte channel; // midi channel
	byte number; // midi number
	bool pwm;
	bool state;
public:
	Led(byte p); // constructors
	Led(byte p, byte c, byte n);
	Led(byte p, byte c, byte n, bool a);
	~Led(); // destructor
	void setOn(byte c, byte n, byte v); // read the values for note on and cc
	void setOff(byte c, byte n, byte v); // read the values for note off
	void setOnSilent(byte c, byte n, byte v); // read the values for note on and cc
	void setOffSilent(byte c, byte n, byte v); // read the values for note off
	void set(bool s); // set led to state
	void set();
};
//-----------------------------------------------------------------------------------

#endif