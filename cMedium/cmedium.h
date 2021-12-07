#ifndef INFO3_CMEDIUM_H
#define INFO3_CMEDIUM_H

#include <string>

#include <vector>
#include <iostream>
#include <fstream>
using std::string;
using namespace std;
#include "../helperClasses/clocation.h"

class CMedium
{


public:
    enum Status { verfuegbar, ausgeliehen, bestellt, reserviert };
    string title;
    string signature;
    CLocation loc;
    int agerating;
    Status EnumOfIndex(int i) { return static_cast<CMedium::Status>(i); };
    Status status;
    CMedium();

    CMedium(string, string, CLocation, int, Status);
    CMedium * load(ifstream & infile);
    ~CMedium();
    //void setMedium(string, string, CLocation, int, Status);
    void getStatus();
    void print();

};

#endif //INFO3_CMEDIUM_H