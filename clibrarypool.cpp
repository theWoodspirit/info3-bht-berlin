#include "clibrarypool.h"

CLibraryPool::CLibraryPool(string Name, CPerson *Manager)
: name(Name), manager(Manager)
{
}

void CLibraryPool::add(CLibrary *Branch)
{
    branch.push_back(Branch);
}

void CLibraryPool::add(CPerson *Customer)
{
    customer.push_back(Customer);
}

void CLibraryPool::print()
{
    int i;

    // Biliothekskartellname ausgeben
    cout << endl << name << endl << "Leitung: ";

    // Leitung ausgeben
    manager->print();

    cout << endl << "Zum Buechereiverband gehoeren " << branch.size() << " Filialen:" << endl;
    for(i = 0; i < branch.size(); i++)
        branch.at(i)->print();

    cout << "Die Buecherei hat " << customer.size() << " Kunden:";
    for(i = 0; i < customer.size(); i++)
    {
        cout << "\n\n";
        customer.at(i)->print();
    }
    cout << endl;
}