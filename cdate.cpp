#include "cdate.h" // header in local directory
#include <ctime>
#include <string>
#include <iostream>

using namespace std;

CDate::CDate()
{
    time_t t = std::time(0);   // get time now
    tm *now = std::localtime(&t);

    day = now->tm_mday; // day und this->day sind äquivalent
    month = now->tm_mon + 1;
    year = now->tm_year + 1900;
}

CDate::CDate(int Day, int Month, int Year)
: day(Day), month(Month), year(Year)
{
}

void CDate::print()
{
    printf("* %02i.%02i.%4d", day, month, year);
}
