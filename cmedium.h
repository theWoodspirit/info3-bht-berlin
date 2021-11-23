#ifndef INFO3_CMEDIUM_H
#define INFO3_CMEDIUM_H

#include <string>

using std::string;

#include "clocation.h"

class CMedium
{
public:
    enum Status { verfuegbar, ausgeliehen, bestellt, reserviert };
    CMedium(string, string, CLocation, int, Status);
    CMedium(std::ifstream& infile);
    ~CMedium();
    //void setMedium(string, string, CLocation, int, Status);
    void getStatus();
    void print();

private:
    string title;
    string signature;
    CLocation loc;
    int agerating;
    Status EnumOfIndex(int i) { return static_cast<CMedium::Status>(i); }
    Status status;
};

#endif //INFO3_CMEDIUM_H