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
#include "../cPerson/CEmployee.h"
#include "../cPerson/CCustomer.h"
#include "../cMedium/CPrintedMedium/CBook.h"
#include "../cMedium/CDVD.h"
#include "../cMedium/CCD.h"
#include "../cMedium/CPrintedMedium/CMagazine.h"



class CLibrary {
    string name;
    CAddress adr;
    CEmployee *manager;
    vector<CBook *> pBooks;
    vector<CDVD *> pDVDs;
    //vector<a *> pCDs;
    vector<CMagazine *> pMagazine;


public:
    CLibrary(string, CAddress, CEmployee *);



    ~CLibrary();

    void add(CBook * book){this->pBooks.push_back(book);};
    void add(CDVD * dvd){this->pDVDs.push_back(dvd);};
    void add(CMagazine * mag ){this->pMagazine.push_back(mag);};

    void print();

    CLibrary * load(ifstream &infile);

    CLibrary();
}
;

#endif //INFO3_CLIBRARY_H