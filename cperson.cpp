#include "cperson.h"
#include "caddress.h"
#include <string>
#include <iostream>
#include <fstream>
#include <cstring>
#include "factory.h"
using namespace std;

CPerson::CPerson(string Name, CAddress Address, CDate birthday)
: name(Name), address(Address), bday(birthday)
{
}

CPerson::CPerson(std::ifstream& infile) {

    std::string line;

    while (std::getline(infile, line)) {
        if (factory::startTagInLine(line,"Name")) {
            this->name = factory::getContent(line,"Name");
        } else if (factory::startTagInLine(line,"Birthday")) {
            this->bday = CDate(infile);
        } else if(factory::startTagInLine(line,"Address")) {
            this->address = CAddress(infile);
        } else if(factory::endTagInLine(line,"Person")) {
            line.replace(line.find(line), line.length(), "");
            this->print();
            cout << '\n';
            break;
        }
        line.replace(line.find(line), line.length(), "");
    }
}

CPerson::~CPerson()
{
    cout << "Die Person '" << name << "' wird vernichtet!" << endl;
}

void CPerson::print()
{
    cout << name << endl;
    address.print();
    cout << endl;
    bday.print();
}