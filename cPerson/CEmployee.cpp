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

CEmployee::CEmployee(string Name, CAddress Address, CDate birthday, string persoNr, string customerNr): CPerson(Name,Address,birthday)
{
    this->EmployeeNr = persoNr;
    this->setCustomerNr(customerNr);

}
CEmployee::CEmployee()
{
}

CEmployee * CEmployee::load(std::ifstream& infile) {
    std::string line;

    while (std::getline(infile, line)) {
        if (factory::startTagInLine(line,"Name")) {
            CCustomer::setName(factory::getContent(line,"Name"));
        } else if (factory::startTagInLine(line,"Birthday")) {
            CDate date;
            date.load(infile);
            CCustomer::setBday(date);
        } else if(factory::startTagInLine(line,"Address")) {
            CAddress adr;
            adr.load(infile);
            CCustomer::setAdress(adr);
        } else if (factory::startTagInLine(line,"EmployeeNr")) {
            this->EmployeeNr = factory::getContent(line,"EmployeeNr").c_str();
        }else if (factory::startTagInLine(line,"CustomerNr")) {
             CCustomer::setCustomerNr(factory::getContent(line,"CustomerNr").c_str());
        } else if(factory::endTagInLine(line,"Employee")) {
            break;
        }
    }
    return this;
}

CEmployee::~CEmployee()
{
    cout << "Der Angestellte: " << getName() << " wurde vernichtet. " << endl;
}

void CEmployee::print()
{
    CCustomer::print();
    cout << endl << "PersonalNr.: "<<  this->EmployeeNr << endl;

}