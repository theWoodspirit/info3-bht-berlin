//
// Created by marku on 29.11.2021.
//

#include "CCD.h"

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

#include "../helperClasses/factory.h"

CCD::CCD() {
}

CCD::CCD(string t, string s, CLocation l, int a, Status st, string inter, int titleNr) : CMedium(t,s,l,a, st){
    this->interpret = inter;
    this->tracksSize = titleNr;
}

CCD *CCD::load(ifstream & infile) {
    std::string line;
    int minute;
    while (std::getline(infile, line)) {
        if (factory::startTagInLine(line,"Title")) {
            this->setTitle(factory::getContent(line,"Title"));
        } else if (factory::startTagInLine(line,"Signatur")) {
            this->setSig(factory::getContent(line,"Signatur"));
        } else if(factory::startTagInLine(line,"Location")) {
            CLocation loc;
            loc.load(infile);
            this->setLoc(loc);
        }else if(factory::startTagInLine(line,"Status")) {
            this->status = CCD::EnumOfIndex(atoi(factory::getContent(line,"Status").c_str()));
        }else if(factory::startTagInLine(line,"FSK")) {
            this->setAge(atoi(factory::getContent(line,"FSK").c_str()));
        }else if (factory::startTagInLine(line,"Interpret")) {
            this->interpret = factory::getContent(line,"Interpret");
        }else if (factory::startTagInLine(line,"Tracks")) {
            this->tracksSize = atoi(factory::getContent(line,"Tracks").c_str());
        }
        else if(factory::endTagInLine(line,"CD")) {
            if(getAge() <= 0){
                setAge(0);
            }
            break;
        }
    }
    return this;
}

CCD::~CCD() {
    cout << "Die CCD '" << getTitle() << "' mit der Signatur '" << getSig() << "' wird vernichtet!" << endl;
}

void CCD::print() {
    CMedium::print();
    cout << "\nInterpret: " << interpret;
    cout << "\nAnzahl Tracks: " << tracksSize << endl;
}
