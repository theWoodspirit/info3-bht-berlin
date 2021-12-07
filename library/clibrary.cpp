#include "clibrary.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstring>
#include "../helperClasses/factory.h"
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
        }/*else if(factory::startTagInLine(line,"Medium")) {
            this->add((new CMedium())->load(infile));
        }*/else if(factory::endTagInLine(line,"Library")) {
            break;
        }
    }
    return this;
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
        cout << "Medium Nr. " << i + 1 << endl;
        pMedium.at(i)->print();
    }

}

CLibrary::CLibrary() {

}

