#include <cstring>
#include "clibrarypool.h"
#include "factory.h"
using namespace std;
CLibraryPool::CLibraryPool(string Name, CPerson *Manager)
: name(Name), manager(Manager)
{
}

CLibraryPool::CLibraryPool(string fileName) {
    ifstream infile("D:\\Uni\\3.Semester\\inf3Github\\info3\\data.xml");
    string line;
    string s;

    while (std::getline(infile, line)) {

        if (factory::startTagInLine(line,"Name")) {
            this->name = factory::getContent(line,"Name");
        }
        else if(factory::startTagInLine(line,"Chairman")){
            this->manager = (new CPerson)->load(infile);
        }
        else if(factory::startTagInLine(line,"Library") and !factory::startTagInLine(line,"LibraryPool")){
            this->add((new CLibrary)->load(infile));
        }
        else if(factory::startTagInLine(line,"Customer")){
            this->add((new CPerson)->load(infile));
        }
    }
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
    cout << name << endl << "Leitung: ";

    // Leitung ausgeben
    manager->print();

    cout << endl << "Zum Buechereiverband gehoeren " << branch.size() << " Filialen:" << endl;
    for(i = 0; i < branch.size(); i++)
        branch.at(i)->print();

    cout << "Der Buechereiverband hat " << customer.size() << " Kunden:";
    for(i = 0; i < customer.size(); i++)
    {
        cout << "\n\n";
        customer.at(i)->print();
    }
    cout << endl;
}