#include "clocation.h"
#include <string>
#include <iostream>
#include <utility>

using namespace std;

CLocation::CLocation()
{
    Section = "Buero";
    Rack = "Fach zum Einsortieren";
}

CLocation::CLocation(string section, string rack)
{
    Section = std::move(section);
    Rack = rack;
}

void CLocation::print()
{
    cout << "Abt.: " << Section << "; Regal: " << Rack;
}