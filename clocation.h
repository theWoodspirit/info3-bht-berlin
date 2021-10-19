//
// Created by Jakob on 19.10.2021.
//

#ifndef UEB02_CLOCATION_H
#define UEB02_CLOCATION_H

#include <string>
using std::string;

class CLocation
{
public:
    CLocation();                            // Standardkonstruktor
    CLocation(string section, string rack); // Konstruktor
    void print();

private:
    string Section;                                    // Eigenschaften
    string Rack;
};

#endif //UEB02_CLOCATION_H
