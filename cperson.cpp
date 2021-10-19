//
// Created by Jakob on 19.10.2021.
//

#include "cperson.h"
#include "caddress.h"
#include "cdate.h"
#include <string>
#include <iostream> // header in standard library
using namespace std;

CPerson::CPerson(string name, CAddress address, CDate birthday)
{
    this->Name = name;
    this->Address = address;
    this->Birthday = birthday;
}

void CPerson::print()
{
    cout << Name << endl;
    CAddress::print();
    CDate::print();
}