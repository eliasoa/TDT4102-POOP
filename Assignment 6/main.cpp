#include "includes.h"


int main() {
    // CourseCatalog c;
    // c.addCourse("TDT4110","Informasjonsteknologi grunnkurs");
    // c.addCourse("TDT4102","Prosedyre- og objektorientert programmering");
    // c.addCourse("TMA4100", "Matematikk 1");
    // cout << c << endl;
    // c.exportCourseCatalog("c");
    // c.loadCourseCatalog("courseCatalog.csv");
    // cout << c << endl;

    // std::filesystem::path temperatureFile{"temperatures.txt"};
    // std::ifstream temp_file{temperatureFile};
    // Temps t;
    // temp_file >> t; 
    // cout << t.max << t.min << endl;

    vector<Temps> nils = readTemps("temperatures.txt");

    return 0;
}


/* Teorioppgaver
2b) 
const map<string, string> capitalsMap {
    {"Norway", "Oslo"},
    {"Sweden", "Stockholm"},
    {"Denmark", "Copenhagen"}
};
string getCapital(const string& country) {
    return capitalsMap.at(country);
}
int main(){ 
    std::cout << "Capitals:" << std::endl;
    for (pair<const string, const string> elem : capitalsMap) {
    cout << getCapital(elem.first) << std::endl;
    }
}

Feilen skjer fordi ved å bruke [] operatoren forsøker kompilatoren å endre
map-et, men siden det er definert som constatn, vil ikke dette gå. Ved
å bruke .at() kan man få hentet ut verdien som ligger der.

*/