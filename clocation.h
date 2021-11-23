#ifndef UEB02_CLOCATION_H
#define UEB02_CLOCATION_H

#include <string>

using std::string;

class CLocation
{
    string Section;                                    // Eigenschaften
    string Rack;

    public:
        CLocation();                            // Standardkonstruktor
        CLocation(string section, string rack); // Konstruktor
        void print();

    CLocation(std::ifstream& ifstream);
};

#endif //UEB02_CLOCATION_H
