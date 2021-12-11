//
// Created by marku on 29.11.2021.
//

#ifndef INFO3_CCD_H
#define INFO3_CCD_H
#include <string>

using namespace std;


#include "cmedium.h"

class CCD : virtual public CMedium
{

public:
    CCD();
    CCD(string, string, CLocation, int, Status, string, int);
    CCD* load(std::ifstream &);
    virtual ~CCD();


    void print();

protected:
    string interpret;
    int tracksSize;
};
#endif //INFO3_CCD_H
