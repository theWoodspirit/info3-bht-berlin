
#ifndef INFO3_CAudiobook_H
#define INFO3_CAudiobook_H
#include <string>

using std::string;


#include "cmedium.h"
#include "time.h"
#include "CPrintedMedium/CBook.h"
#include "CCD.h"

class CAudiobook : virtual public CCD,virtual public CBook
{
public:
    CAudiobook();


    //CAudiobook(string t, string s, CLocation l, int a, Status st, string inter, int titleNr, string autor);

    CAudiobook* load(std::ifstream &);
    ~CAudiobook();
    void print();

private:
    int anzahlCDs;
};
#endif //INFO3_CAudiobook_H


