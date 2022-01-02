//
// Created by marku on 29.11.2021.
//

#ifndef INFO3_CEMPLOYEE_H
#define INFO3_CEMPLOYEE_H
#include <string>
#include "../helperClasses/caddress.h"
#include "../helperClasses/cdate.h"
<<<<<<< HEAD
=======
#include "CCustomer.h"
>>>>>>> parent of 899812a (asd)
#include "cperson.h"
#include <fstream>

using std::string;
using namespace std;

<<<<<<< HEAD
<<<<<<< HEAD
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
<<<<<<< HEAD
<<<<<<< HEAD
   private:
       string EmployeeNr;

   public:
       CEmployee(string, CAddress , CDate, string, string); // Konstruktor
       ~CEmployee();
       void print();
       CEmployee * load(ifstream &infile);
       CEmployee();
       void setEmployeeNr(int Nr){this->EmployeeNr = Nr;}
=======
=======
=======
>>>>>>> parent of 899812a (asd)
class CEmployee : virtual public CPerson,virtual public CCustomer
{
>>>>>>> parent of 93e58ea (ausleihen fast fertig)
private:
    string EmployeeNr;
public:
    CEmployee(string, CAddress , CDate, string, string); // Konstruktor
<<<<<<< HEAD
=======
private:
    string EmployeeNr;
public:
    CEmployee(string, CAddress , CDate, string); // Konstruktor
>>>>>>> parent of 8bc1cc9 (Übung 5)
=======
>>>>>>> parent of 93e58ea (ausleihen fast fertig)
    ~CEmployee();
    void print();
    CEmployee * load(ifstream &infile);
    CEmployee();
    void setEmployeeNr(int Nr){this->EmployeeNr = Nr;};
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> parent of 93e58ea (ausleihen fast fertig)
=======
>>>>>>> parent of 4ca5bf4 (markus abagbe)
>>>>>>> parent of 8bc1cc9 (Übung 5)
=======
>>>>>>> parent of 93e58ea (ausleihen fast fertig)
};



#endif //INFO3_CEMPLOYEE_H
