//
// Created by Jakob on 19.10.2021.
//

#ifndef UEB02_CPERSON_H
#define UEB02_CPERSON_H

#include <string>
#include "caddress.h"
#include "cdate.h"
using std::string;

class CDate;
class CAddress;

class CPerson
{
public:
    CPerson(string, CAddress &, CDate &); // Konstruktor
    void print();

private:
    string Name;                                    // Eigenschaften
    int Day;
    int Month;
    int Year;
    string Street;
    string Number;
    string Zipcode;
    string Town;
};

#endif //UEB02_CPERSON_H
