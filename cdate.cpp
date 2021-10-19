#include "cdate.h" // header in local directory
#include <iostream> // header in standard library
#include <ctime>
#include <string>

using namespace std;

CDate::CDate()
{
    time_t t = std::time(0);   // get time now
    tm *now = std::localtime(&t);

    day = now->tm_mday; // day und this->day sind äquivalent
    this->month = now->tm_mon + 1;
    this->year = now->tm_year + 1900;
}

CDate::CDate(int day, int month, int year)
{
    this->day = day;
    this->month = month;
    this->year = year;
}

int CDate::getDay()
{
    return this->day;
}

int CDate::getMonth()
{
    return this->month;
}

int CDate::getYear()
{
    return this->year;
}

void CDate::print()
{
    printf("* %02i.%02i.%4d", getDay(), getMonth(), getYear());
}
