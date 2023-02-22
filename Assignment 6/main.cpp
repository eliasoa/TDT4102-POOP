#include "includes.h"

string userInput;
string fileNameString;




int main() {
    // cout << "Skriv inn det du vil filen skal hete: " << endl;
    // cin >> fileNameString;
    // cout << "Skriv inn noe du vil skrive til en fil:" << endl;
    // cin >> userInput;
    // std::filesystem::path fileName{fileNameString + ".txt"};
    // std::ofstream outputStream{fileName};
    // outputStream << userInput << std::endl;
    userWriteToFile();
    return 0;
}

