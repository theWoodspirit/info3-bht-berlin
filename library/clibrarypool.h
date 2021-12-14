#ifndef INFO3_CLIBRARYPOOL_H
#define INFO3_CLIBRARYPOOL_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "../cPerson/cperson.h"
#include "clibrary.h"
#include "CLoan.h"

class CLibraryPool
{

protected:
    string name;
    CEmployee *manager;
    vector<CLibrary *> branch;
    vector<CCustomer*> customer;
    vector<CLoan*> loans;

public:
    CLibraryPool(string Name, CEmployee *Manager);
    CLibraryPool(string path);
    void add(CLibrary *);
    void add(CCustomer *);
    void print();
    ~CLibraryPool();

    void add(CLoan * loan){loans.push_back(loan);};

    void readLoan(ifstream &infile);
};

#endif //INFO3_CLIBRARYPOOL_H