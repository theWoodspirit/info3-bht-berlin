#include "clibrary.h"

CLibrary::CLibrary(string Name, CAddress Adr, CPerson *Manager)
: name(Name), adr(Adr), manager(Manager)
{
}

CLibrary::~CLibrary()
{
    pMedium.clear();
}

void CLibrary::add(CMedium *medium)
{
    pMedium.push_back(medium);
}

void CLibrary::print()
{
    int i;

    cout << endl << "Buecherei Filiale " << name << endl;
    adr.print();
    cout << endl << "Filialleiter: ";
    manager->print();
    cout << endl;

    cout << "Es stehen " << pMedium.size() << " Medien zur Verfuegung: " << "\n\n";

    for(i = 0; i < pMedium.size(); i++)
    {
        cout << "Medium Nr. " << i+1 << endl;
        pMedium.at(i)->print();
    }
}