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
<<<<<<< HEAD
    for(int i= 0; i < this->pMediums.size(); i ++){
        delete(pMediums.at(i));
        cout << endl;
    }
    delete(this->manager);
=======
>>>>>>> parent of 4ca5bf4 (markus abagbe)

}



void CLibrary::print()
{
    size_t i;
    int j=1;

    cout << endl << "Buecherei Filiale " << name << endl;
    adr.print();
    cout << endl << "Filialleiter: ";
    manager->print();
    cout << endl;

<<<<<<< HEAD
    cout << "\nEs stehen " << pMediums.size() << " Medien zur Verfuegung: " << "\n\n";
=======
    cout << "\nEs stehen " << pBooks.size() + pDVDs.size() + pMagazine.size() << " Medien zur Verfuegung: " << "\n\n";
>>>>>>> parent of 4ca5bf4 (markus abagbe)

    for(i = 0; i < pBooks.size(); i++)
    {
<<<<<<< HEAD
       cout << "Medium Nr. " << j << endl;
       j++;
        if (dynamic_cast<CCD *>(pMediums.at(i))) {
            CCD * x = dynamic_cast<CCD *>(pMediums.at(i));
            if(dynamic_cast<CAudiobook*>(x)){
                CAudiobook * y = dynamic_cast<CAudiobook*>(x);
                y->print();
            }
            else{
                x->print();
            }


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
        cout << endl;
=======
        cout << "Buch Nr. " << i + 1 << endl;
        pBooks.at(i)->print();
    }
    for(i = 0; i < pDVDs.size(); i++)
    {
        cout << "DVD Nr. " << i + 1 << endl;
        pDVDs.at(i)->print();
>>>>>>> parent of 4ca5bf4 (markus abagbe)
    }
    for(i = 0; i < pMagazine.size(); i++)
    {
        cout << "Magazine Nr. " << i + 1 << endl;
        pMagazine.at(i)->print();
    }

}

CLibrary::CLibrary() {

}

