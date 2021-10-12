//
// Created by marku on 12.10.2021.
//

#ifndef INFO3_CTIME_H
#define INFO3_CTIME_H
class CTime
{
public:
    CTime();
    CTime(int h, int m, int s);
    CTime(int h, int m);
    void setTime(int h, int m, int s = 0);
    int geth();
    int getm();
    int gets();
    void print();
private:
    int h;
    int m;
    int s;
};
#endif //INFO3_CTIME_H
