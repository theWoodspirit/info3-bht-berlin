#ifndef INFO3_CDATE_H
#define INFO3_CDATE_H

#include <string>

using std::string;

class CDate
{
    public:
        CDate();                                    // Standardkonstruktor
        CDate(int day, int month, int year);        // Konstruktor
        int getDay();                               // Methoden zum Abfragen der Eigenschaften
        int getMonth();
        int getYear();
        void print();

    private:
        int day;                                    // Eigenschaften
        int month;
        int year;
};

#endif //INFO3_CDATE_H
