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
private:
    string name;               // Eigenschaften
    CAddress address;
    CDate bday;

public:
    CPerson(string, CAddress , CDate); // Konstruktor
    virtual ~CPerson();
    void print();
    CPerson * load(ifstream &infile);
    CPerson();



    //####################################################
    // setter / getter
    //####################################################
    string getName(){return name;};
    CAddress getAddress(){return address;};
    CDate getbday(){return bday;};
    void setName(string nme){name = nme;};
    void setAdress(CAddress adr){this->address = adr;};
    void setBday(CDate birthday){bday = birthday;};
};

#endif //UEB02_CPERSON_H
