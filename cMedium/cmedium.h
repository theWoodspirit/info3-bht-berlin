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
private:
    string title;
    string signature;
    CLocation loc;
    int agerating;

public:
    enum Status { verfuegbar, ausgeliehen, bestellt, reserviert };


    CMedium();
    virtual ~CMedium();
    CMedium(string, string, CLocation, int, Status);
    CMedium * load(ifstream & infile);

    Status status;
    Status EnumOfIndex(int i) { return static_cast<CMedium::Status>(i); };
    void getStatus();

    void print();

    //####################################################
    // setter / getter
    //####################################################
    void setTitle(string title){this->title = title;};
    void setSig(string sig){this->signature = sig;};
    void setLoc(CLocation loc){this->loc = loc;};
    void setAge(int a){this->agerating = a;};

    string getTitle(){return title;};
    string getSig(){return signature;};
    CLocation getLoc(){return loc;};
    int getAge(){return agerating;};

};

#endif //INFO3_CMEDIUM_H