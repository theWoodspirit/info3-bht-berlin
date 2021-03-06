#include <iostream>
#include "../cPerson/cperson.h"
#include "../helperClasses/caddress.h"
#include <string>
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

using namespace std;

#include "cmedium.h"
#include "../helperClasses/factory.h"

CMedium::CMedium(string t, string s, CLocation l, int a, Status st)
: title(t), signature(s), loc(l), agerating(a), status(st)
{
}
CMedium* CMedium::load(std::ifstream& infile) {

    std::string line;

    while (std::getline(infile, line)) {
        if (factory::startTagInLine(line,"Title")) {
            this->title = factory::getContent(line,"Title");
        } else if (factory::startTagInLine(line,"Signatur")) {
            this->signature = factory::getContent(line,"Signatur");
        } else if(factory::startTagInLine(line,"Location")) {
            this->loc.load(infile);
        }else if(factory::startTagInLine(line,"FSK")) {
            this->agerating = atoi(factory::getContent(line,"FSK").c_str());
        }else if(factory::endTagInLine(line,"Medium")) {
            this->status = EnumOfIndex(0);
            break;
        }
    }
    return this;
}

CMedium::~CMedium()
{
    cout << "Das Medium '" << title << "' mit der Signatur '" << signature << "' wird vernichtet!" << endl;
}

void CMedium::getStatus()
{
    switch (status)
    {
        case verfuegbar:
            cout << "verfuegbar";
            break;

        case ausgeliehen:
            cout << "ausgeliehen";
            break;

        case bestellt:
            cout << "bestellt";
            break;

        case reserviert:
            cout << "reserviert";
            break;
    }
}

void CMedium::print()
{
    cout << "Titel:    " << title << endl << "Signatur: " << signature << endl;
    cout << "Ort:      ";
    loc.print();
    cout << endl << "FSK:      freigegeben ab " << agerating << " Jahren" << endl << "Status:   ";
    getStatus();

}

CMedium::CMedium() {

}


