//
// Created by marku on 29.11.2021.
//

#include "cperson.h"
#include "../helperClasses/caddress.h"
#include <string>
#include <iostream>
#include <fstream>
#include <cstring>
#include "../helperClasses/factory.h"
#include "CCustomer.h"
using namespace std;

CCustomer::CCustomer(string Name, CAddress Address, CDate birthday, string customerNr): CPerson(Name,Address,birthday)
{
    this->CustomerNr = customerNr;

}
CCustomer::CCustomer()
{
}

CCustomer * CCustomer::load(std::ifstream& infile) {
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
        } else if (factory::startTagInLine(line,"Name")) {
            setName(factory::getContent(line,"Name"));
        } else if (factory::startTagInLine(line,"CustomerNr")) {
            setCustomerNr(factory::getContent(line,"CustomerNr"));
        } else if(factory::endTagInLine(line,"Customer")) {
            break;
        }
    }
    return this;
}

CCustomer::~CCustomer()
{
    cout << "Die Person '" << this->getName() << "' wird vernichtet!" << endl;
}

void CCustomer::print()
{
    cout << this->getName() << endl;
    this->getAddress().print();
    cout << endl;
    this->getbday().print();
    cout << endl << CustomerNr;
}