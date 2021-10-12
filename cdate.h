//
// Created by marku on 12.10.2021.
//

#ifndef INFO3_CDATE_H
#define INFO3_CDATE_H
class CDate
{
public:
    CDate();
    CDate(int day, int month, int year);
    void setDate(int day, int month, int year);
    int getDay();
    int getMonth();
    int getYear();
    void printDate();
private:
    int day;
    int month;
    int year;
};
#endif //INFO3_CDATE_H
