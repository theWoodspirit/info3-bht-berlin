#ifndef INFO3_CDATE_H
#define INFO3_CDATE_H

#include <string>

using std::string;

class CDate
{
    int day;                                    // Eigenschaften
    int month;
    int year;

    public:
        CDate();                                    // Standardkonstruktor
        CDate(int, int, int);        // Konstruktor
        void print();
};

#endif //INFO3_CDATE_H
