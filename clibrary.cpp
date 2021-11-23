#include "clibrary.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstring>
#include "factory.h"
using namespace std;

CLibrary::CLibrary(string Name, CAddress Adr, CPerson *Manager)
: name(Name), adr(Adr), manager(Manager)
{
}

CLibrary::CLibrary(std::ifstream& infile) {
    std::string line;
    while (std::getline(infile, line)) {
        if (factory::startTagInLine(line,"Name")) {
            this->name = factory::getContent(line,"Name");
        }else if(factory::startTagInLine(line,"Address")) {
            line.replace(line.find(line), line.length(), "");
            this->adr = CAddress(infile);
        } else if(factory::startTagInLine(line,"Manager")) {
            this->manager = new CPerson(infile);
        }else if(factory::startTagInLine(line,"Medium")) {
            this->add(new CMedium(infile));
        }else if(factory::endTagInLine(line,"Library")) {
            line.replace(line.find(line), line.length(), "");
            cout << '\n';
            break;
        }
        line.replace(line.find(line), line.length(), "");
    }
    /*    string name;
    CAddress adr;
    CPerson *manager;
    vector<CMedium *> pMedium;
     *
     *
     * */
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

