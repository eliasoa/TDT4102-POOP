#pragma once

class Car
{
private:
    int freeSeats{0};

public:
    /// @brief Constructor
    Car(int numberOfSeats);
    
    /// @brief Destructor
    ~Car();

    /// @brief Function that checks if freeSeats is 0 or not
    /// @return true/false
    bool hasFreeSeats() const;
    
    /// @brief Function that reserves a seat by subtracting one from freeSeats
    void reserveFreeSeat();
};

