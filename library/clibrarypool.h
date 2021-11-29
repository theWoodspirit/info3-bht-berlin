#ifndef INFO3_CLIBRARYPOOL_H
#define INFO3_CLIBRARYPOOL_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "../cPerson/cperson.h"
#include "clibrary.h"

class CLibraryPool
{
    string name;
    CPerson *manager;
    vector<CLibrary *> branch;
    vector<CPerson *> customer;

public:
    CLibraryPool(string, CPerson *);
    CLibraryPool(string path);
    void add(CLibrary *);
    void add(CPerson *);
    void print();
};

#endif //INFO3_CLIBRARYPOOL_H