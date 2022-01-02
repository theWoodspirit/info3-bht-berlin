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
<<<<<<< HEAD
    vector<CMedium *> pMediums;
=======
    vector<CBook *> pBooks;
    vector<CDVD *> pDVDs;
    //vector<a *> pCDs;
    vector<CMagazine *> pMagazine;

>>>>>>> parent of 4ca5bf4 (markus abagbe)

public:
    CLibrary(string, CAddress, CEmployee *);



    ~CLibrary();

<<<<<<< HEAD
    void add(CBook * book){this->pMediums.push_back(book);};
    void add(CDVD * dvd){this->pMediums.push_back(dvd);};
    void add(CMagazine * mag ){this->pMediums.push_back(mag);};
    void add(CCD * cd ){this->pMediums.push_back(cd);};
    void add(CAudiobook * cd ){this->pMediums.push_back(static_cast<CCD*>(cd));};
=======
    void add(CBook * book){this->pBooks.push_back(book);};
    void add(CDVD * dvd){this->pDVDs.push_back(dvd);};
    void add(CMagazine * mag ){this->pMagazine.push_back(mag);};

>>>>>>> parent of 4ca5bf4 (markus abagbe)
    void print();

    CLibrary * load(ifstream &infile);
    vector<CMedium *> getMedia(){return this->pMediums;};
    CLibrary();
}
;

#endif //INFO3_CLIBRARY_H