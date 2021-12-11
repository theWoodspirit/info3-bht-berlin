//
// Created by marku on 29.11.2021.
//

#ifndef INFO3_CMAGAZINE_H
#define INFO3_CMAGAZINE_H
#include "CPrintedMedium.h"
#include "../cmedium.h"
#include "time.h"
class CMagazine : public CPrintedMedium
{
public:
    //CBook(string, string, CLocation, int, Status ,int , string );
    CMagazine* load(std::ifstream &);
    ~CMagazine();
    void print();
    CMagazine();
private:
    string Designer;
};
#endif //INFO3_CMAGAZINE_H
