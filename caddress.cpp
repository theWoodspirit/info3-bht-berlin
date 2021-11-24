#include "caddress.h"
#include <string>
#include <iostream> // header in standard library
#include <fstream>
#include <cstdlib>
#include <cstring>
#include "factory.h"
using namespace std;

CAddress::CAddress(string street, string number, string zipcode, string town)
: Street(street), Number(number), Zipcode(zipcode), Town(town)
{
}

void CAddress::print()
{
    cout << Street << ' ' << Number << endl;
    cout << Zipcode << ' ' << Town;
}

void CAddress::load(ifstream& infile) {
    std::string line;
    while (std::getline(infile, line)) {
        if (factory::startTagInLine(line,"Street")) {
            this->Street = factory::getContent(line,"Street");
        } else if (factory::startTagInLine(line,"Number")) {
            this->Number = factory::getContent(line,"Number");
        } else if(factory::startTagInLine(line,"Zipcode")) {
            this->Zipcode = factory::getContent(line,"Zipcode");
        }else if(factory::startTagInLine(line,"Town")) {
            this->Town = factory::getContent(line,"Town");
        }else if(factory::endTagInLine(line,"Address")) {
            break;
        }
    }
}

CAddress::CAddress() {}



