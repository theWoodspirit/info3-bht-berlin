//
// Created by z00430rr on 14.12.2021.
//

#include "CLoan.h"

CLoan::CLoan(CPerson *p, CMedium *m, CDate start, CDate exp) : loaner(p),loanedMedium(m),startDate(start),expDate(exp){

}

CLoan::~CLoan() {
    cout << "CLoan wurde zerstört" << endl;
}

void CLoan::print() {
    cout << "Leiher Name: " << loaner->getName() << endl;
    cout << "Ausgeliehenes Medium" << endl;
    cout << "     Titel: " << loanedMedium->getTitle() << endl;
    cout << "       Sig: " << loanedMedium->getSig() << endl;
    cout << "Startdatum: ";
    startDate.print();
    cout << endl << "  Enddatum: ";
    expDate.print();
    cout << endl;

}

CLoan::CLoan() {

}

