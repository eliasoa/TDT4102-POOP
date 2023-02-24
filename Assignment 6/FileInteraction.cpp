#include "includes.h"

void userWriteToFile(){
    cout << "Skriv inn filnavnet du ønsker å skrive til" << endl;
    string nameOfFile;
    cin >> nameOfFile;

    cout << "Skriv inn et eller flere ord og trykk så enter.\nHvis du vil avslutte, skriv 'quit'" << endl;
    vector<string> lineOfString;
    string userInput;
    while (true)
    {
        cin >> userInput;
        if (userInput == "quit")
        {
            break;
        }
        lineOfString.push_back(userInput);
    }
    std::filesystem::path fileName{nameOfFile + ".txt"};
    std::ofstream outputStream{fileName};
    for (int i = 0; i < lineOfString.size(); i++)
    {
        outputStream << lineOfString[i] << "\n";
    }   
}

void readFromFileAndCreatNewOneWithLineNumbers(const string& fileToCopy){
    // std::filesystem::path fileName(fileToCopy);
    std::ifstream ist {fileToCopy};
    std::filesystem::path fileName("copy" + fileToCopy);
    std::ofstream ost{fileName};

    if(!ist)error("Can't open input file ",fileToCopy);

    string line{""};
    int counter = 1;
    while(std::getline(ist,line))
    {
        ost << counter;
        ost << " " << line << endl; 
        counter ++;
    }
}