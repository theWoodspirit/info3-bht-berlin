//
// Created by Jakob on 19.10.2021.
//

#ifndef UEB02_CADDRESS_H
#define UEB02_CADDRESS_H
#include <string>
using std::string;

class CAddress
{
public:
    CAddress(string street, string number, string zipcode, string town); // Konstruktor
    void print();

private:
    string Street;                                    // Eigenschaften
    string Number;
    string Zipcode;
    string Town;
};

#endif //UEB02_CADDRESS_H
