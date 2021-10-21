#include "cperson.h"
#include <string>
#include <iostream>

using namespace std;

CPerson::CPerson(string name, CAddress Address, CDate birthday)
: address(Address), bday(birthday)
{
    Name = name;
}

void CPerson::print()
{
    cout << Name << endl;
    address.print();
    cout << endl;
    bday.print();
}