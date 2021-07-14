/*
 * This is the header file that is being used to store the global variables,
 * configuration variables, kinematic chain map object and EEPROM logger object.
 * These objects and variables are used by almost all the other files and hence
 * are stored here.
 */
#ifndef _FUNCTION_H
#define _FUNCTION_H

#include <XBOXONE.h>
// Including the libraries for the IMU - acclerometer
#include <Adafruit_Sensor.h>
#include <Adafruit_BNO055.h>
#include <utility/imumaths.h>

// Including library for the matrix elements in the code
#include <BasicLinearAlgebra.h>

// declaring global variables as extern. They are declared
// in the source file for this header.

// BNO IMU object
extern Adafruit_BNO055 bno;

// Hardware Serial object for comms with API
extern HardwareSerial *SerialTerminal;

// XBOX and USB objects
extern USB Usb;
extern XBOXONE Xbox;

// String array containing the state names.
extern String stateNames[12];

// Declare Servo Pins - check wiring diagram if you have any questions
extern int xLPin;
extern int zLPin;
extern int xRPin;
extern int zRPin;

// Declaring neck servo pins
extern int NSPin;

// state machine enumeration.
enum StateMachineState {
  MenuMode = 0,               
  ServoCalibration = 1,       
  Auto = 2,                   
  StepperHome = 3,            
  StepperManual = 4,          
  FindCoordinates = 5,        
  SetCoordinates = 6,         
  ServoManual = 7,            
  NeckCalibration = 8,        
  MoveToCalibrationState = 9, 
  Neck = 10,                  
  SpinnyBoi = 11,             
};

#endif
