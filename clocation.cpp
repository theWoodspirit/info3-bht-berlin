#include "clocation.h"
#include <string>
#include <iostream>

using namespace std;

CLocation::CLocation()
{
    Section = "Buero";
    Rack = "Fach zum Einsortieren";
}

CLocation::CLocation(string section, string rack)
{
    Section = section;
    Rack = rack;
}

void CLocation::print()
{
    cout << "Abt.: " << Section << "; Regal: " << Rack;
}