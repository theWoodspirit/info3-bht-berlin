#ifndef INFO3_CCUSTOMER_H
#define INFO3_CCUSTOMER_H
#include <string>
#include "../helperClasses/caddress.h"
#include "../helperClasses/cdate.h"
#include "cperson.h"
#include <fstream>

using std::string;
using namespace std;

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
public:
    CCustomer(string, CAddress, CDate, string); // Konstruktor
    virtual ~CCustomer();

    void print();

    CCustomer *load(ifstream &infile);
>>>>>>> parent of 93e58ea (ausleihen fast fertig)

   public:
       CCustomer(string, CAddress, CDate, string); // Konstruktor
       virtual ~CCustomer();
       void print();
       CCustomer *load(ifstream &infile);
       CCustomer();
       void setCustomerNr(string Nr) { this->CustomerNr = Nr; }
};
#endif //INFO3_CCUSTOMER_H
