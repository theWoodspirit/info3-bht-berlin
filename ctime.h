#ifndef INFO3_CTIME_H
#define INFO3_CTIME_H
class CTime
{
public:
    CTime();
    CTime(int h, int m, int s = 0);
    void setTime(int h, int m, int s);
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
