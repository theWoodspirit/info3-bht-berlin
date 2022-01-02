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

<<<<<<< HEAD
<<<<<<< HEAD
class CCustomer : virtual public CPerson
{
   protected:
       string CustomerNr;
=======
class CCustomer : virtual public CPerson {
private:
    string CustomerNr;
    vector<CLoan *> myLoans;
<<<<<<< HEAD
public:
    CCustomer(string, CAddress, CDate, string); // Konstruktor
    virtual ~CCustomer();
=======
class CCustomer : public CPerson {
private:
    string CustomerNr;
    vector<CLoan*> myLoans;
public:
    CCustomer(string, CAddress, CDate, string); // Konstruktor
    ~CCustomer();
>>>>>>> parent of 8bc1cc9 (Übung 5)
=======
public:
    CCustomer(string, CAddress, CDate, string); // Konstruktor
    virtual ~CCustomer();
>>>>>>> parent of 899812a (asd)

    void print();

    CCustomer *load(ifstream &infile);
<<<<<<< HEAD
>>>>>>> parent of 93e58ea (ausleihen fast fertig)
=======
>>>>>>> parent of 8bc1cc9 (Übung 5)

    void add(CLoan * loan){myLoans.push_back(loan);};
    CCustomer();
    string getCstNr(){return this->CustomerNr;};
    void setCustomerNr(string Nr) { this->CustomerNr = Nr; };
};
#endif //INFO3_CCUSTOMER_H
