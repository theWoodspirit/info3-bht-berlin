#include "CTime.h" // header in local directory
#include <iostream> // header in standard library
#include <ctime>

using namespace std;

CTime::CTime()
{
    time_t t = std::time(0);   // get time now
    tm* now = std::localtime(&t);

    this->h = now->tm_hour;
    this->m = now->tm_min;
    this->s = now->tm_sec;
}

CTime::CTime(int h, int m, int s)
{
    this->h = h;
    this->m = m;
    this->s = s;
}
int CTime::geth()
{
    return this->h;
}
int CTime::getm()
{
    return this->m;
}

int CTime::gets()
{
    return this->s;
}

void CTime::print()
{
    printf("%02i:%02i:%02i", geth(), getm(), gets());
}

void CTime::setTime(int h, int m, int s)
{
    this->h = h;
    this->m = m;
    this->s = s;
}
