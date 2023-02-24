#include "includes.h"

string userInput;
string fileNameString;


const map<string, string> capitalsMap {
    {"Norway", "Oslo"},
    {"Sweden", "Stockholm"},
    {"Denmark", "Copenhagen"}
};
string getCapital(const string& country) {
    return capitalsMap.at(country);
}



int main() {

    std::cout << "Capitals:" << std::endl;
    for (pair<const string, const string> elem : capitalsMap) {
    cout << getCapital(elem.first) << std::endl;
    }

    return 0;
}

/* Teorioppgaver
2b) 
Det er kodebiten return capitalsMap[country]; som gjør at kompileringen feiler


*/