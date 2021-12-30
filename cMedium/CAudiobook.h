//
// Created by marku on 07.12.2021.
//

#ifndef INFO3_CAUDIOBOOK_H
#define INFO3_CAUDIOBOOK_H
//
// Created by marku on 29.11.2021.
//

#ifndef INFO3_CAudiobook_H
#define INFO3_CAudiobook_H
#include <string>

using std::string;


#include "cmedium.h"
#include "time.h"
#include "CPrintedMedium/CBook.h"
#include "CCD.h"

class CAudiobook : public CBook,public CCD
{
public:
    CAudiobook();


    //CAudiobook(string t, string s, CLocation l, int a, Status st, );

    CAudiobook* load(std::ifstream &);
    ~CAudiobook();
    void print();

private:
    int anzahlCDs;
};
#endif //INFO3_CAudiobook_H

#endif //INFO3_CAUDIOBOOK_H
