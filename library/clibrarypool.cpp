#include <cstring>
#include "clibrarypool.h"
#include "../helperClasses/factory.h"
using namespace std;
CLibraryPool::CLibraryPool(string Name, CEmployee *Manager)
: name(Name), manager(Manager)
{
}

CLibraryPool::CLibraryPool(string fileName) {
    ifstream infile("data.xml");
    string line;
    string s;
    //int cnt = 0;
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
    //cout << cnt << endl;
}




void CLibraryPool::add(CLibrary *Branch)
{
    branch.push_back(Branch);
}



void CLibraryPool::print()
{
    int i;

    // Biliothekskartellname ausgeben
    cout << name << endl << "Leitung: ";

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

void CLibraryPool::add(CCustomer * x) {
    customer.push_back(x);
}
