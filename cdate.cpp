//
// Created by marku on 12.10.2021.
//
#include "cdate.h" // header in local directory
#include <iostream> // header in standard library
#include <chrono>
#include <ctime>

using namespace std;

CDate::CDate()
{
    time_t t = std::time(0);   // get time now
    tm* now = std::localtime(&t);
    this->day = now->tm_mday;
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
    cout << this->day << '.' << this->month << '.' << this->year;
}

void CDate::setDate(int day, int month, int year)
{
    this->day = day;
    this->month = month;
    this->year = year;
}
