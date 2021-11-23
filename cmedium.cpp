#include <iostream>
#include "cperson.h"
#include "caddress.h"
#include <string>
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

using namespace std;

#include "cmedium.h"
#include "factory.h"

CMedium::CMedium(string t, string s, CLocation l, int a, Status st)
: title(t), signature(s), loc(l), agerating(a), status(st)
{
}
CMedium::CMedium(std::ifstream& infile) {

    std::string line;

    while (std::getline(infile, line)) {
        if (factory::startTagInLine(line,"Title")) {
            this->title = factory::getContent(line,"Title");
        } else if (factory::startTagInLine(line,"Signatur")) {
            this->signature = factory::getContent(line,"Signatur");
        } else if(factory::startTagInLine(line,"Location")) {
            this->loc = CLocation(infile);
        } else if(factory::startTagInLine(line,"FSK")) {
            this->loc = CLocation(infile);
        }else if(factory::startTagInLine(line,"Status")) {
            this->status = CMedium::EnumOfIndex(atoi(factory::getContent(line,"Status").c_str()));
        }else if(factory::startTagInLine(line,"FSK")) {
            this->agerating = atoi(factory::getContent(line,"Status").c_str());
        }else if(factory::endTagInLine(line,"Medium")) {
            line.replace(line.find(line), line.length(), "");
            cout << '\n';
            break;
        }

        line.replace(line.find(line), line.length(), "");
    }
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
    cout << "\n\n";
}


