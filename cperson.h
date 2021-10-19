//
// Created by Jakob on 19.10.2021.
//

#ifndef UEB02_CPERSON_H
#define UEB02_CPERSON_H

#include <string>
#include "caddress.h"
#include "cdate.h"
using std::string;

class CPerson
{
public:
    CPerson(string name, CAddress address, CDate birthday); // Konstruktor
    void print();

private:
    string Name;                                    // Eigenschaften
    CAddress Address;
    CDate Birthday;
};

#endif //UEB02_CPERSON_H
