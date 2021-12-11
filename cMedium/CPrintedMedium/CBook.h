//
// Created by marku on 29.11.2021.
//

#ifndef INFO3_CBOOK_H
#define INFO3_CBOOK_H
#include "CPrintedMedium.h"
#include "../cmedium.h"
#include "time.h"
class CBook : virtual public CPrintedMedium
{
public:
    //CBook(string, string, CLocation, int, Status ,int , string );
    CBook* load(std::ifstream &);
    virtual ~CBook();
    void print();
    CBook();

protected:
    string autor;
};
#endif //INFO3_CBOOK_H
