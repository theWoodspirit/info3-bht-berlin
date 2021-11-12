#include "cperson.h"
#include <string>
#include <iostream>

using namespace std;

CPerson::CPerson(string Name, CAddress Address, CDate birthday)
: name(Name), address(Address), bday(birthday)
{
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