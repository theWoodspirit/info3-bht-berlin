#include <cstring>
#include "clibrarypool.h"
#include "../helperClasses/factory.h"
using namespace std;
CLibraryPool::CLibraryPool(string Name, CEmployee *Manager)
: name(Name), manager(Manager)
{
}

CLibraryPool::CLibraryPool(string fileName) {
<<<<<<< HEAD
   cout << "Datei '"<< fileName << "' wird geoeffnet ... ";
    ifstream infile(fileName.c_str());
    cout << "ok" << endl;
    string line;
    string s;

    cout << "Datei wird eingelesen ... ";
=======
    ifstream infile("data.xml");
    string line;
    string s;
    //int cnt = 0;
>>>>>>> parent of 4ca5bf4 (markus abagbe)
    while (std::getline(infile, line)) {
        //cout << line << endl;
        //cnt++;
        if (factory::startTagInLine(line,"Name")) {
            this->name = factory::getContent(line,"Name");
        }
        else if(factory::startTagInLine(line,"Chairman")){
            this->manager = (new CEmployee)->load(infile);
        }
        else if((factory::startTagInLine(line,"Library")) && (!factory::startTagInLine(line,"LibraryPool"))){
            this->add((new CLibrary)->load(infile));
        }
        else if(factory::startTagInLine(line,"Customer")){
            this->add((new CCustomer)->load(infile));
        }else if(factory::startTagInLine(line, "Loan")){
            readLoan(infile);
        }
    }
<<<<<<< HEAD
    cout << "ok" << endl;
    cout << "Datei wird geschlossen ... ";
    infile.close();
    cout << "ok" << endl << endl;
=======
    //cout << cnt << endl;
>>>>>>> parent of 4ca5bf4 (markus abagbe)
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
    for(i = 0; i < branch.size(); i++)
        branch.at(i)->print();

    cout << "Die Buecherei hat " << customer.size() << " Kunden:";
    for(i = 0; i < customer.size(); i++)
    {
        cout << "\n\n";
        customer.at(i)->print();
    }

    cout << "\n Der Buecheiverband hat " << loans.size() << " Medien ausgeliehen.";

    for(int i = 0; i < loans.size(); i++){
        cout << "\n\n Ausgeliehenes Medium Nr.: " << i+1 << endl;
        loans.at(i)->print();
    }
    cout << endl;
}

void CLibraryPool::add(CCustomer * x) {
    customer.push_back(x);
}
<<<<<<< HEAD

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

void CLibraryPool::readLoan(ifstream & infile) {
    std::string line;
    CPerson * loaner;
    CMedium * loanedMedium;
    CDate startDate;
    string temp;
    int found = 0;
    while (std::getline(infile, line)) {
        if (factory::startTagInLine(line,"Signatur")) {
            temp = factory::getContent(line, "Signatur");
            for(int i = 0; i < this->branch.size(); i++){
                for(int j = 0; j < this->branch.at(i)->getMedia().size(); j++){
                    if(temp.compare(this->branch.at(i)->getMedia().at(j)->getSig()) == 0){
                        loanedMedium = this->branch.at(i)->getMedia().at(j);
                        found ++;
                    }
                }
            }
        }else if(factory::startTagInLine(line,"CustomerNr")) {
            temp = factory::getContent(line,"CustomerNr");
            for(int i = 0; i < this->customer.size(); i++){
                if(temp.compare(this->customer.at(i)->getCstNr()) == 0){
                    loaner = this->customer.at(i);
                    found ++;
                }
            }
        }else if(factory::startTagInLine(line,"Date")) {
            startDate.load(infile);
        } else if(factory::endTagInLine(line,"Loan")) {
            if(found == 2){
                CLoan * x = new CLoan(loaner,loanedMedium,startDate,startDate);
                add(x);
                dynamic_cast<CCustomer*>(loaner)->add(x);
                loanedMedium->status = loanedMedium->EnumOfIndex(1);
            }
            break;
        }
    }
}
=======
>>>>>>> parent of 4ca5bf4 (markus abagbe)
