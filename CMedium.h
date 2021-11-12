//
// Created by marku on 28.10.2021.
//

#ifndef UEB02_CMEDIUM_H
#define UEB02_CMEDIUM_H

#include "clocation.h"
#include <iostream>
#include <string>

using namespace std;
using std::string;


enum Status {verfuegbar, ausgeliehen, bestellt, reserviert};

class CMedium
{
public:
    CMedium();                                    // Standardkonstruktor
    CMedium(string title,string signature,CLocation location,int fsk,Status status);        // Konstruktor

    ~CMedium(){cout << "Instanz mit Titel:"<< this->title << "wurde vernichtet. \n"; }

    void setTitle(string title){this->title = title;};
    string getTitle(){return this->title;};

    void setSignature(string signature){this->signature = signature;};
    string getSignature(){return this->signature;};

    void setLocation(CLocation location){this->location = location;};
    CLocation getLocation(){return this->location;};

    void print();

private:
    string title;
    string signature;
    CLocation location;
    int fsk;
    Status status;
};


#endif //UEB02_CMEDIUM_H
