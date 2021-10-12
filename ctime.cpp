//
// Created by marku on 12.10.2021.
//
#include "CTime.h" // header in local directory
#include <iostream> // header in standard library
#include <chrono>
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
CTime::CTime(int h, int m)
{
    this->h = h;
    this->m = m;
    this->s = 0;
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
    cout << this->h << ':' << this->m << ':' << this->s;
}

void CTime::setTime(int h, int m, int s)
{
    this->h = h;
    this->m = m;
    this->m = m;
}
