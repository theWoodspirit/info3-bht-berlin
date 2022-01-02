//
// Created by marku on 29.11.2021.
//

#ifndef INFO3_CEMPLOYEE_H
#define INFO3_CEMPLOYEE_H
#include <string>
#include "../helperClasses/caddress.h"
#include "../helperClasses/cdate.h"
#include "cperson.h"
#include <fstream>

using std::string;
using namespace std;

<<<<<<< HEAD
class CEmployee : virtual public CPerson, virtual public CCustomer
        {
    private:
        string EmployeeNr;
    public:
        CEmployee(string, CAddress , CDate, string, string); // Konstruktor
        ~CEmployee();
        void print();
        CEmployee * load(ifstream &infile);
        CEmployee();
        void setEmployeeNr(int Nr){this->EmployeeNr = Nr;};
=======
class CEmployee : public CPerson
{
private:
    string EmployeeNr;
public:
    CEmployee(string, CAddress , CDate, string); // Konstruktor
    ~CEmployee();
    void print();
    CEmployee * load(ifstream &infile);
    CEmployee();
    void setEmployeeNr(int Nr){this->EmployeeNr = Nr;};
>>>>>>> parent of 4ca5bf4 (markus abagbe)
};



#endif //INFO3_CEMPLOYEE_H
