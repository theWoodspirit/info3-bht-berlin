#include "cperson.h"
#include "../helperClasses/caddress.h"
#include <string>
#include <iostream>
#include <fstream>
#include <cstring>
#include "../helperClasses/factory.h"
#include "CEmployee.h"
using namespace std;

CEmployee::CEmployee(string Name, CAddress Address, CDate birthday, int persoNr): CPerson(Name,Address,birthday)
{
    this->EmployeeNr = persoNr;

}
CEmployee::CEmployee()
{
}

CEmployee * CEmployee::load(std::ifstream& infile) {

    std::string line;
    /*
    while (std::getline(infile, line)) {
        if (factory::startTagInLine(line,"Name")) {
            this= factory::getContent(line,"Name");
        } else if (factory::startTagInLine(line,"Birthday")) {
            this->bday.load(infile);
        } else if(factory::startTagInLine(line,"Address")) {
            this->address.load(infile);
        } else if(factory::startTagInLine(line,"WorkNr")) {
            this->EmployeeNr.load(infile);
        } else if(factory::endTagInLine(line,"Person")) {
            break;
        }
    }
     */
    return this;

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