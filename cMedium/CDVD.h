//
// Created by marku on 29.11.2021.
//

#ifndef INFO3_CDVD_H
#define INFO3_CDVD_H
#include <string>

using std::string;

#include "CDVD.h"

class CDVD : public CMedium
{
public:
    CDVD();
    CDVD(string, string, CLocation, int, Status, string, CTime);
    CDVD* load(std::ifstream &);
    ~CDVD();
    void print();

private:
    string actor;
    CTime length;

};
#endif //INFO3_CDVD_H
