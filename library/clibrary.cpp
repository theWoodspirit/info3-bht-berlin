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
#include "../cMedium/CAudiobook.h"
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
        }else if(factory::startTagInLine(line,"CD")) {
            this->add((new CCD())->load(infile));
        }else if(factory::startTagInLine(line,"Audiobook")) {
            this->add((new CAudiobook())->load(infile));
        }else if(factory::endTagInLine(line,"Library")) {
            break;
        }
    }
    return this;
}

CLibrary::~CLibrary()
{
    for(int i= 0; i < this->pMediums.size(); i ++){
        delete(pMediums.at(i));
        cout << endl;
    }
    for(int i = 0; i < this->pAudioBooks.size(); i++){
        delete(pAudioBooks.at(i));
        cout << endl;
    }
    delete(this->manager);

    cout << "Bib " << name << " wurde geloescht." << endl;
}



void CLibrary::print()
{
    int i;

    cout << endl << "Buecherei Filiale " << name << endl;
    adr.print();
    cout << endl << "Filialleiter: ";
    manager->print();
    cout << endl;

    cout << "\nEs stehen " << pMediums.size() + pAudioBooks.size() << " Medien zur Verfuegung: " << "\n\n";


    for(i = 0; i < pMediums.size(); i++)
    {
        if (dynamic_cast<CCD *>(pMediums.at(i))) {
            CCD * x = dynamic_cast<CCD *>(pMediums.at(i));
            x->print();

        } else if(dynamic_cast<CMagazine *>(pMediums.at(i))){
            CMagazine * x = dynamic_cast<CMagazine *>(pMediums.at(i));
            x->print();
        }
        else if(dynamic_cast<CDVD *>(pMediums.at(i))){
            CDVD * x = dynamic_cast<CDVD *>(pMediums.at(i));
            x->print();
        }
        else if(dynamic_cast<CBook *>(pMediums.at(i))){
            CBook * x = dynamic_cast<CBook *>(pMediums.at(i));
            x->print();
        }
    }
    for(i = 0; i < pAudioBooks.size(); i++)
    {
        pAudioBooks.at(i)->print();
    }
}

CLibrary::CLibrary() {

}

