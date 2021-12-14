//
// Created by z00430rr on 14.12.2021.
//

#ifndef INFO3_CLOAN_H
#define INFO3_CLOAN_H


#include <string>
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

#include "../helperClasses/caddress.h"
#include "../cPerson/cperson.h"
#include "../cMedium/cmedium.h"
#include "../helperClasses/factory.h"
#include "../cPerson/CEmployee.h"
#include "../cPerson/CCustomer.h"
#include "../cMedium/CPrintedMedium/CBook.h"
#include "../cMedium/CDVD.h"
#include "../cMedium/CCD.h"
#include "../cMedium/CAudiobook.h"
#include "../cMedium/CPrintedMedium/CMagazine.h"



class CLoan{
   CPerson * loaner;
   CMedium * loanedMedium;
   CDate startDate;
   CDate expDate;

public:
    CLoan(CPerson *, CMedium*, CDate,CDate);
    ~CLoan();
    void print();
    CLoan();
}
;



#endif //INFO3_CLOAN_H
