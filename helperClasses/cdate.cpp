#include "cdate.h" // header in local directory
#include <ctime>
#include <string>
#include <iostream>
#include <fstream>
#include "cstdlib"
#include "factory.h"

using namespace std;

CDate::CDate()
{
    time_t t = std::time(0);   // get time now
    tm *now = std::localtime(&t);

    day = now->tm_mday; // day und this->day sind äquivalent
    month = now->tm_mon + 1;
    year = now->tm_year + 1900;
}

void CDate::load(std::ifstream& infile){
    std::string line;
    while (std::getline(infile, line)) {
        if (factory::startTagInLine(line,"Day")) {
            this->day = atoi(factory::getContent(line,"Day").c_str());
        } else if (factory::startTagInLine(line,"Month")) {
            this->month = atoi(factory::getContent(line,"Month").c_str());
        } else if(factory::startTagInLine(line,"Year")) {
            this->year = atoi(factory::getContent(line,"Year").c_str());
        }
        else if(factory::endTagInLine(line,"Date")) {
            break;
        }
    }
}

CDate::CDate(int Day, int Month, int Year)
: day(Day), month(Month), year(Year)
{
}

void CDate::print()
{
    printf("* %02i.%02i.%4d", day, month, year);
}
