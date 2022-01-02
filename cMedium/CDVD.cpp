#include "CDVD.h"
#include <iostream>
#include <iomanip>
#include "../cPerson/cperson.h"
#include "../helperClasses/caddress.h"
#include "../helperClasses/factory.h"
#include <string>
#include <fstream>
#include <cstring>
#include <cstdlib>

using namespace std;

CDVD::CDVD(string t, string s, CLocation l, int a, Status st, string actor, tm length)
: CMedium(t, s, l, a, st), actor(actor), length(length)
{}

CDVD* CDVD::load(std::ifstream& infile) {

    std::string line;
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
            this->status = CDVD::EnumOfIndex(atoi(factory::getContent(line,"Status").c_str()));
        }else if(factory::startTagInLine(line,"FSK")) {
            this->setAge(atoi(factory::getContent(line,"FSK").c_str()));
        }else if (factory::startTagInLine(line,"Actors")) {
            this->actor = (factory::getContent(line,"Actors"));
        }else if (factory::startTagInLine(line,"Hour")) {
            this->length.tm_hour = atoi(factory::getContent(line,"Hour").c_str());
        }
        else if (factory::startTagInLine(line,"Minute")) {
            this->length.tm_min = atoi(factory::getContent(line,"Minute").c_str());
        }
        else if(factory::endTagInLine(line,"DVD")) {
            break;
        }
    }
    return this;
}

CDVD::~CDVD()
{
    cout << "Die DVD '" << getTitle() << "' mit der Signatur '" << getSig() << "' wird vernichtet!" << endl;
}

void CDVD::print()
{
    cout << "Schauspieler: " << actor;
    cout << "\nSpieldauer:   " << setw(2) << setfill('0') << length.tm_hour << ":"
    << setw(2) << length.tm_min << ":00" << endl << setfill(' ');
    CMedium::print();
}

CDVD::CDVD() {

}




