#pragma once

// Function that returns accelearation upwards (y-axis)
double acclY( void );

// Function that returns the speed upward (y-axis) 
// and takes the initial velocity and time
double velY ( double initVelocityY, double time );

// Function that returns position in x direction 
// and takes initial position, initial velocity and time
double posX ( double initPosition, double initVelocity, double time );

// Function that returns position in y direction 
// and takes initial position, initial velocity and time
double posY ( double initPosition, double initVelocity, double time );

// Function that prints time and takes time in seconds
void printTime ( double time );

// Function that returns time of flight in seconds
// and takes initial velocity i y-direction
double flightTime ( double initVelocityY );