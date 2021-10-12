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
    this->day = day;
    this->month = month;
    this->year = year;
}
CDate::CDate(int day, int month, int year)
{
    this->day = day;
    this->month = month;
    this->year = year;
}
int CDate::getDay()
{
    cout << "Doing something!" << endl;
}
int CDate::getMonth()
{
    cout << "Doing something!" << endl;
}

int CDate::getYear()
{
    cout << "Doing something!" << endl;
}

void CDate::printDate()
{
    cout << "Doing something!" << endl;
}

void CDate::setDate(int day, int month, int year)()
{
    cout << "Doing something!" << endl;
}
