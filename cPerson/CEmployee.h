//
// Created by marku on 29.11.2021.
//

#ifndef INFO3_CEMPLOYEE_H
#define INFO3_CEMPLOYEE_H
#include <string>
#include "../helperClasses/caddress.h"
#include "../helperClasses/cdate.h"
#include "CCustomer.h"
#include "cperson.h"
#include <fstream>

using std::string;
using namespace std;

class CEmployee : virtual public CPerson,virtual public CCustomer
{
   private:
       string EmployeeNr;

   public:
       CEmployee(string, CAddress , CDate, string, string); // Konstruktor
       ~CEmployee();
       void print();
       CEmployee * load(ifstream &infile);
       CEmployee();
       void setEmployeeNr(int Nr){this->EmployeeNr = Nr;}
};



#endif //INFO3_CEMPLOYEE_H
