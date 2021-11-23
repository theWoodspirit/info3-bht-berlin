#include "cdate.h" // header in local directory
#include <ctime>
#include <string>
#include <iostream>
#include <fstream>
#include "cstdlib"

using namespace std;

CDate::CDate()
{
    time_t t = std::time(0);   // get time now
    tm *now = std::localtime(&t);

    day = now->tm_mday; // day und this->day sind äquivalent
    month = now->tm_mon + 1;
    year = now->tm_year + 1900;
}
CDate::CDate(std::ifstream& infile){
    std::string line;
    int cnt = 0;

    while (std::getline(infile, line)) {
        if (cnt == 0) {
            cnt++;
        } else if (cnt == 1) {
            string s = line.substr(line.find_first_of('>')+1,2).c_str();
            this->day = atoi(line.substr(line.find_first_of('>')+1,2).c_str());
            cnt++;

        } else if (cnt == 2) {
            string s = line.substr(line.find_first_of('>')+1,2).c_str();
            this->month = atoi(line.substr(line.find_first_of('>')+1,2).c_str());
            cnt++;

        } else if(cnt == 3){
            string s = line.substr(line.find_first_of('>')+1,2).c_str();
            this->year = atoi(line.substr(line.find_first_of('>')+1,4).c_str());
            cnt++;
        }

        else if(line.substr(line.find_first_of('<')+1,9).compare("/Birthday") == 0) {
            line.replace(line.find(line), line.length(), "");
            break;
        }
        line.replace(line.find(line), line.length(), "");
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
