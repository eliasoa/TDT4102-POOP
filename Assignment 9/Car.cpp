#include"includes.hpp"

Car::Car(int numberOfSeats):freeSeats{numberOfSeats}{}

Car::~Car()
{

}

bool Car::hasFreeSeats() const{
    if (freeSeats)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Car::reserveFreeSeat(){
    freeSeats -= 1;
}