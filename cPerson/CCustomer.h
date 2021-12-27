//
// Created by marku on 29.11.2021.
//

#ifndef INFO3_CCUSTOMER_H
#define INFO3_CCUSTOMER_H
#include <string>
#include "../helperClasses/caddress.h"
#include "../helperClasses/cdate.h"
#include "cperson.h"
#include "../library/CLoan.h"
#include <fstream>
using std::string;
using namespace std;

class CCustomer : virtual public CPerson {
private:
    string CustomerNr;
    vector<CLoan *> myLoans;
public:
    CCustomer(string, CAddress, CDate, string); // Konstruktor
    virtual ~CCustomer();

    void print();

    CCustomer *load(ifstream &infile);

    void add(CLoan * loan){myLoans.push_back(loan);};
    CCustomer();
    string getCstNr(){return this->CustomerNr;};
    void setCustomerNr(string Nr) { this->CustomerNr = Nr; };
};
#endif //INFO3_CCUSTOMER_H
