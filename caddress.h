#ifndef UEB02_CADDRESS_H
#define UEB02_CADDRESS_H
#include <string>

using namespace std;

class CAddress
{
    string Street;                                    // Eigenschaften
    string Number;
    string Zipcode;
    string Town;

    public:
        CAddress(string street, string number, string zipcode, string town);
        CAddress(std::ifstream& infile);

    CAddress();

    //CAddress();

    // Konstruktor
        void print();
};

#endif //UEB02_CADDRESS_H
