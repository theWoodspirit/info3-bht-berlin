//
// Created by marku on 29.11.2021.
//

#ifndef INFO3_CDVD_H
#define INFO3_CDVD_H
#include <string>

using std::string;


#include "cmedium.h"
#include "time.h"

class CDVD : public CMedium
{
public:
    CDVD();
    CDVD(string, string, CLocation, int, Status, string, time_t);
    CDVD* load(std::ifstream &);
    ~CDVD();
    void print();

private:
    string actor;
    time_t length;

};
#endif //INFO3_CDVD_H
