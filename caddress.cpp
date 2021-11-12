#include "caddress.h"
#include <string>
#include <iostream> // header in standard library

using namespace std;

CAddress::CAddress(string street, string number, string zipcode, string town)
: Street(street), Number(number), Zipcode(zipcode), Town(town)
{
}

void CAddress::print()
{
    cout << Street << ' ' << Number << endl;
    cout << Zipcode << ' ' << Town;
}



