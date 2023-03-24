#include"includes.hpp"




int main() {

    Car Ford(4);
    std::cout << Ford.hasFreeSeats() << std::endl;
    for (int i = 0; i < 4; i++)
    {
        Ford.reserveFreeSeat();
    }
    std::cout << Ford.hasFreeSeats() << std::endl;
    
    return 0;
}