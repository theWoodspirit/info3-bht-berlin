#ifndef INFO3_CLIBRARY_H
#define INFO3_CLIBRARY_H

#include <string>
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

#include "../helperClasses/caddress.h"
#include "../cPerson/cperson.h"
#include "../cMedium/cmedium.h"
#include "../helperClasses/factory.h"

class CLibrary {
    string name;
    CAddress adr;
    CPerson *manager;
    vector<CMedium *> pMedium;

public:
    CLibrary(string, CAddress, CPerson *);



    ~CLibrary();

    void add(CMedium *);

    void print();

    CLibrary * load(ifstream &infile);

    CLibrary();
}
;

#endif //INFO3_CLIBRARY_H