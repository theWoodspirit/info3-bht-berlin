#include <iostream>

using namespace std;

#include "cdate.h"
#include "ctime.h"


int main()
{
    CDate D1, D2(31, 12, 2021);
    CTime T1, T2(6, 32, 27), T3(14, 15);

    cout << "\nKlasse CDate:" << endl;
    cout << "Standardkonstruktor Heutiges Datum (D1):     ";   D1.print();   cout << endl;
    cout << "Konstruktor         Silvester (D2):          ";   D2.print();   cout << endl;

    cout << "\nKlasse CTime:" << endl;
    cout << "Standardkonstruktor Aktuelle Uhrzeit (T1):   ";   T1.print();   cout << endl;
    cout << "Konstruktor         Zeit zum Aufstehen (T2): ";   T2.print();   cout << endl;
    cout << "Konstruktor         Vorlesungsbeginn (T3):   ";   T3.print();   cout << endl;

    return 0;
}