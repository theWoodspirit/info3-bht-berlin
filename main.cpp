#include <iostream>

using namespace std;

#include "library/clibrarypool.h"

int main()
{
    CLibraryPool LP("data.xml");

    LP.print();
    cout << endl;

    return 0;
}