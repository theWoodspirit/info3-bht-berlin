#ifndef UEB02_CPERSON_H
#define UEB02_CPERSON_H

#include <string>
#include "caddress.h"
#include "cdate.h"

#include <fstream>

using std::string;
using namespace std;

class CPerson
{
    string name;                       // Eigenschaften
    CAddress address;
    CDate bday;

public:
    CPerson(string, CAddress , CDate); // Konstruktor
    CPerson(std::ifstream& infile);
    ~CPerson();
    void print();
};

#endif //UEB02_CPERSON_H
