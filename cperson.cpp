//
// Created by Jakob on 19.10.2021.
//

#include "cperson.h"
#include "caddress.h"
#include "cdate.h"
#include <string>
#include <iostream> // header in standard library
using namespace std;

CPerson::CPerson(string name, CAddress addr, CDate bday)
{
    this->Name = name;

    this->Day = bday.getDay();
    this->Month = bday.getMonth();
    this->Year = bday.year;

    this->Street = addr.Street;
    this->Number = addr.Number;
    Zipcode = addr.Zipcode;
    Town = addr.Town;
}

void CPerson::print()
{
    cout << Name << endl;

    cout << Street << ' ' << Number << endl;
    cout << Zipcode << ' ' << Town; << endl;

    printf("* %02i.%02i.%4d", Day, Month, Year);
}