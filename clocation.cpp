//
// Created by Jakob on 19.10.2021.
//

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
    this->Section = section;
    this->Rack = rack;
}

void CLocation::print()
{
    cout << "Abt.: " << Section << "; Regal: " << Rack;
}