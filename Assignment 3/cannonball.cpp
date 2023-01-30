// #include "std_lib_facilities.h"
#include "cannonball.h"

double acclY ( void ){
    // g = -9.81 m/s^2
    return -9.81;   
}

double velY ( double initVelocityY, double time ){
    // FartY = StartFartY + AkselerasjonY * Tid
    return initVelocityY + acclY()*time;
}

double posX( double initPosition, double initVelocity, double time ){
    // Posisjon = StartPosisjon + StartFart · Tid + (Akselerasjon * Tid ^2)2
    // Alselerasjon i x-retning = 0 m/s^2
    return initPosition + initVelocity*time;
}

double posY( double initPosition, double initVelocity, double time ){
    // Posisjon = StartPosisjon + StartFart · Tid + (Akselerasjon * Tid ^2)2
    // Alselerasjon i x-retning = 0 m/s^2
    return initPosition + initVelocity*time + acclY()*time*time/2;
}

void printTime( double time ){
    // double seconds = time%60;
    // double total_minutes = time/60;
    // double hours = total_minutes/60;
    // double minutes = total_minutes%60;
    // cout << hours << " timer, " << minutes << " minutter og " << seconds << " sekunder \n";
}

double flightTime ( double initVelocityY ){
    //Tid = − 2 * StartFartY/AkselerasjonY
    return -2*initVelocityY/acclY();
}