#ifndef UEB02_CPERSON_H
#define UEB02_CPERSON_H

#include <string>
#include "../helperClasses/caddress.h"
#include "../helperClasses/cdate.h"

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
    ~CPerson();
    void print();
    CPerson * load(ifstream &infile);

    CPerson();
};

#endif //UEB02_CPERSON_H
