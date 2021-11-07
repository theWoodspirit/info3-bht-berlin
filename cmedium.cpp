#include <iostream>

using namespace std;

#include "cmedium.h"

CMedium::CMedium(string t, string s, CLocation l, int a, Status st)
: title(t), signature(s), loc(l), agerating(a), status(st)
{
}

CMedium::~CMedium()
{
    cout << "Das Medium '" << title << "' mit der Signatur '" << signature << "' wird vernichtet!" << endl;
}

void CMedium:: setMedium(string title, string signature, CLocation loc, int agerating, Status status)
{
    this->title = title;
    this->signature = signature;
    this->loc = loc;
    this->agerating = agerating;
    this->status = status;
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