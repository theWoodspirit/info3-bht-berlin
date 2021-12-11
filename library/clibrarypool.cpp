#include <cstring>
#include "clibrarypool.h"
#include "../helperClasses/factory.h"
using namespace std;
CLibraryPool::CLibraryPool(string Name, CEmployee *Manager)
: name(Name), manager(Manager)
{
}

CLibraryPool::CLibraryPool(string fileName) {
   cout << "Datei '"<< fileName << "' wird geoeffnet ... ";
    ifstream infile(fileName.c_str());
    cout << "ok" << endl;
    string line;
    string s;

    cout << "Datei wird eingelesen ... ";
    while (std::getline(infile, line)) {
        //cout << line << endl;
        //cnt++;
        if (factory::startTagInLine(line,"Name")) {
            this->name = factory::getContent(line,"Name");
        }
        else if(factory::startTagInLine(line,"Chairman")){
            this->manager = (new CEmployee)->load(infile);
        }
        else if(factory::startTagInLine(line,"Library") and !factory::startTagInLine(line,"LibraryPool")){
            this->add((new CLibrary)->load(infile));
        }
        else if(factory::startTagInLine(line,"Customer")){
            this->add((new CCustomer)->load(infile));
        }
    }
    cout << "ok" << endl;
    cout << "Datei wird geschlossen ... ";
    infile.close();
    cout << "ok" << endl << endl;
}




void CLibraryPool::add(CLibrary *Branch)
{
    branch.push_back(Branch);
}



void CLibraryPool::print()
{
    size_t i;

    // Biliothekskartellname ausgeben
    cout << name << endl << "Leitung: ";

    // Leitung ausgeben
    manager->print();

    cout << endl << "Zum Buechereiverband gehoeren " << branch.size() << " Filialen:" << endl;
    for(i = 0; i < branch.size(); i++){
        cout << "\nBuecherei Nr."<< i+1  << endl;
        branch.at(i)->print();
    }


    cout << "\nDer Buchereiverband hat " << customer.size() << " Kunden:";
    for(i = 0; i < customer.size(); i++)
    {
        cout << "\n\nKunde Nr." << i+1 << endl;
        customer.at(i)->print();
    }


    cout << endl;
}

void CLibraryPool::add(CCustomer * x) {
    customer.push_back(x);
}

CLibraryPool::~CLibraryPool() {

   size_t i;

    for(i = 0; i < this->branch.size(); i++){
        delete(this->branch.at(i));
        cout << endl;
    }
    for (i = 0; i < this->customer.size(); ++i) {
        delete(this->customer.at(i));
        cout << endl;
    }
    delete(this->manager);

    cout << "LibraryPool wurde geloescht." << endl;
}