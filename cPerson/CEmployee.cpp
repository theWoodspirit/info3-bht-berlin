#include "cperson.h"
#include "../helperClasses/caddress.h"
#include <string>
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include "../helperClasses/factory.h"
#include "CEmployee.h"
using namespace std;

CEmployee::CEmployee(string Name, CAddress Address, CDate birthday, string persoNr): CPerson(Name,Address,birthday)
{
    this->EmployeeNr = persoNr;

}
CEmployee::CEmployee()
{
}

CEmployee * CEmployee::load(std::ifstream& infile) {
    std::string line;

    while (std::getline(infile, line)) {
        if (factory::startTagInLine(line,"Name")) {
            setName(factory::getContent(line,"Name"));
        } else if (factory::startTagInLine(line,"Birthday")) {
            CDate date;
            date.load(infile);
            setBday(date);
        } else if(factory::startTagInLine(line,"Address")) {
            CAddress adr;
            adr.load(infile);
            setAdress(adr);
        } else if (factory::startTagInLine(line,"EmployeeNr")) {
            this->EmployeeNr = factory::getContent(line,"EmployeeNr").c_str();
        } else if(factory::endTagInLine(line,"Employee")) {
            break;
        }
    }
    return this;
}

CEmployee::~CEmployee()
{
    cout << "Die Person '" << this->getName() << "' wird vernichtet!" << endl;
}

void CEmployee::print()
{
    cout << this->getName() << endl;
    this->getAddress().print();
    cout << endl;
    this->getbday().print();
    cout << endl << EmployeeNr;
}