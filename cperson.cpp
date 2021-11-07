#include "cperson.h"
#include <string>
#include <iostream>

using namespace std;

CPerson::CPerson(string name, CAddress Address, CDate birthday)
: Name(name), address(Address), bday(birthday)
{
}

CPerson::~CPerson()
{
    cout << "Die Person '" << Name << "' wird vernichtet!" << endl;
}

void CPerson::print()
{
    cout << Name << endl;
    address.print();
    cout << endl;
    bday.print();
}