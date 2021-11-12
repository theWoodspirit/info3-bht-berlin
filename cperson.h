#ifndef UEB02_CPERSON_H
#define UEB02_CPERSON_H

#include <string>
#include "caddress.h"
#include "cdate.h"
#include <iostream>

using std::string;
using namespace std;

class CPerson
{
    public:
        CPerson(string, CAddress , CDate); // Konstruktor
        ~CPerson();
        void print();
        ~CPerson(){cout << "Instanz mit Titel:"<< this->name<< "wurde vernichtet. \n"; }


private:
        string name;                       // Eigenschaften
        CAddress address;
        CDate bday;
};

#endif //UEB02_CPERSON_H
