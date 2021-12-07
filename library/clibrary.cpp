#include "clibrary.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstring>
#include "../helperClasses/factory.h"
#include "../cMedium/CPrintedMedium/CBook.h"
#include "../cMedium/CPrintedMedium/CMagazine.h"
#include "../cMedium/CCD.h"
#include "../cMedium/CDVD.h"

using namespace std;

CLibrary::CLibrary(string Name, CAddress Adr, CEmployee *Manager)
: name(Name), adr(Adr), manager(Manager)
{
}

CLibrary* CLibrary::load(std::ifstream& infile) {
    std::string line;
    while (std::getline(infile, line)) {
        if (factory::startTagInLine(line,"Name")) {
            this->name = factory::getContent(line,"Name");
        }else if(factory::startTagInLine(line,"Address")) {
            this->adr.load(infile);
        } else if(factory::startTagInLine(line,"Manager")) {
            this->manager = (new CEmployee)->load(infile);
        }else if(factory::startTagInLine(line,"Book")) {
            this->add((new CBook())->load(infile));
        }else if(factory::startTagInLine(line,"Magazine")) {
            this->add((new CMagazine())->load(infile));
        }else if(factory::startTagInLine(line,"DVD")) {
            this->add((new CDVD())->load(infile));
        }else if(factory::endTagInLine(line,"Library")) {
            break;
        }
    }
    return this;
}

CLibrary::~CLibrary()
{

}



void CLibrary::print()
{
    int i;

    cout << endl << "Buecherei Filiale " << name << endl;
    adr.print();
    cout << endl << "Filialleiter: ";
    manager->print();
    cout << endl;

    cout << "\nEs stehen " << pBooks.size() + pDVDs.size() + pMagazine.size() << " Medien zur Verfuegung: " << "\n\n";

    for(i = 0; i < pBooks.size(); i++)
    {
        cout << "Buch Nr. " << i + 1 << endl;
        pBooks.at(i)->print();
    }
    for(i = 0; i < pDVDs.size(); i++)
    {
        cout << "DVD Nr. " << i + 1 << endl;
        pDVDs.at(i)->print();
    }
    for(i = 0; i < pMagazine.size(); i++)
    {
        cout << "Magazine Nr. " << i + 1 << endl;
        pMagazine.at(i)->print();
    }

}

CLibrary::CLibrary() {

}

