#ifndef UEB02_CPERSON_H
#define UEB02_CPERSON_H

#include <string>
#include "caddress.h"
#include "cdate.h"

using std::string;

class CPerson
{
    public:
        CPerson(string, CAddress , CDate); // Konstruktor
        void print();

    private:
        string Name;                       // Eigenschaften
        CAddress address;
        CDate bday;
};

#endif //UEB02_CPERSON_H
