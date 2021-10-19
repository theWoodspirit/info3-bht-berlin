//
// Created by Jakob on 19.10.2021.
//

#include "caddress.h"
#include <string>
#include <iostream> // header in standard library

using namespace std;

CAddress::CAddress(string street, string number, string zipcode, string town)
{
    this->Street = street;
    this->Number = number;
    this->Zipcode = zipcode;
    this->Town = town;
}

void CAddress::print()
{
    cout << Street << ' ' << Number << endl;
    cout << Zipcode << ' ' << Town;
}



