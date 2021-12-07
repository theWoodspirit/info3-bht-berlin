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
    CEmployee *manager;
    vector<CLibrary *> branch;
    vector<CCustomer*> customer;


public:
    CLibraryPool(string Name, CEmployee *Manager);
    CLibraryPool(string path);
    void add(CLibrary *);
    void add(CCustomer *);
    void print();
};

#endif //INFO3_CLIBRARYPOOL_H