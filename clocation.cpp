#include "clocation.h"
#include <string>
#include <iostream>
#include "caddress.h"
#include <string>
#include <iostream>
#include <fstream>
#include <cstring>
#include "factory.h"
using namespace std;

CLocation::CLocation()
{
    Section = "Buero";
    Rack = "Fach zum Einsortieren";
}

CLocation::CLocation(string section, string rack)
{
    Section = section;
    Rack = rack;
}

void CLocation::print()
{
    cout << "Abt.: " << Section << "; Regal: " << Rack;
}

CLocation::CLocation(std::ifstream &infile) {
    std::string line;
    while (std::getline(infile, line)) {
        if (factory::startTagInLine(line,"Section")) {
            this->Section = factory::getContent(line,"Section");
        } else if (factory::startTagInLine(line,"Rack")) {
            this->Rack = factory::getContent(line,"Rack");
        } else if(factory::endTagInLine(line,"Location")) {
            line.replace(line.find(line), line.length(), "");
            break;
        }
        line.replace(line.find(line), line.length(), "");
    }
}
