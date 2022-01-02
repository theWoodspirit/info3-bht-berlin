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
#include "../cMedium/CAudiobook.h"
#include "../cMedium/CPrintedMedium/CMagazine.h"



class CLibrary {
    string name;
    CAddress adr;
    CEmployee *manager;
    vector<CMedium *> pMediums;
    vector<CAudiobook*> pAudioBooks;

public:
    CLibrary(string, CAddress, CEmployee *);



    ~CLibrary();

    void add(CBook * book){this->pMediums.push_back(book);};
    void add(CDVD * dvd){this->pMediums.push_back(dvd);};
    void add(CMagazine * mag ){this->pMediums.push_back(mag);};
    void add(CCD * cd ){this->pMediums.push_back(cd);};
    void add(CAudiobook * cd ){this->pAudioBooks.push_back(cd);};
    void print();

    CLibrary *load(ifstream &infile);

    CLibrary();
}
;

#endif //INFO3_CLIBRARY_H
