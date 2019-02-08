/*
  Interrupt-driven sampling for real-time control.
  
  The file implements an interrupt-driven system for deploying
  digital control systems on AVR and ATSAMD-based Arduino 
  prototyping boards.
  
  This code is part of the AutomationShield hardware and software
  ecosystem. Visit http://www.automationshield.com for more
  details. This code is licensed under a Creative Commons
  Attribution-NonCommercial 4.0 International License.
  Created by Gergely Takács and Koplinger 2018-2019
  AVR Timer: 	 Richard Koplinger, 2018
  SAMD21G Timer: Gergely Takacs, 2019
  Last update: 07.02.2019.
*/

#ifndef SAMPLING_H_
#define SAMPLING_H_

#include "Arduino.h"

typedef void (*p_to_void_func)(); /*define a term p_to_void_func for pointer to function, which 
								  has a return type void and has no input parameters*/

class SamplingClass{

  public:

    SamplingClass();
    void period(unsigned long microseconds); 
    void interrupt(p_to_void_func interruptCallback);
    p_to_void_func getInterruptCallback ();
    float getSamplingPeriod();  
         
  private:
	
    static void defaultInterrupt();
    p_to_void_func interruptCallback;    

    #ifdef ARDUINO_ARCH_AVR
	 // Default: Timer1
   	const unsigned long timerResolution = 65536; 		// AVR Timer 1 is 16bit            
	const unsigned char cpuFrequency = 16; 		// CPU frequency in microseconds 
    #elif ARDUINO_ARCH_SAMD
	// Default TC5
	const unsigned long timerResolution = 65536; 		// AVR Timer 1 is 16bit  
	const unsigned char cpuFrequency = VARIANT_MCK/1000000; 		// CPU frequency in microseconds 
  	// Not developed yet.
    #else
   	#error "Architecture not supported."
    #endif

    float samplingPeriod;        		 	// Sampling period in seconds  
    bool setSamplingPeriod(unsigned long microseconds);
};
extern SamplingClass Sampling;  
#endif
