
//
// Created by marku on 29.11.2021.
//

#include "CPrintedMedium.h"

#include "../../helperClasses/factory.h"
#include <string>

#include <cstdlib>

CPrintedMedium::CPrintedMedium(string t, string s, CLocation l , int a, CMedium::Status st, int sites):CMedium(t,s,l,a, st) {
 this->sites = sites;
}

CPrintedMedium *CPrintedMedium::load(ifstream & infile) {
    std::string line;
    // wird nicht benutzt...
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
            this->status = EnumOfIndex(atoi(factory::getContent(line,"Status").c_str()));
        }else if(factory::startTagInLine(line,"FSK")) {
            this->setAge(atoi(factory::getContent(line,"FSK").c_str()));
        }else if (factory::startTagInLine(line,"Pages")) {
            this->sites = atoi(factory::getContent(line,"Pages").c_str());
        }
        else if(factory::endTagInLine(line,"CprintedMedium")) {
            break;
        }
    }
    return this;

}

CPrintedMedium::~CPrintedMedium() {
    cout << "Das PrintedMedium '" << getTitle() << "' mit der Signatur '" << getSig() << "' wird vernichtet!" << endl;
}

void CPrintedMedium::print() {
    CMedium::print();
    cout << "\nSeiten: " << this->sites;
}

CPrintedMedium::CPrintedMedium() {

}
