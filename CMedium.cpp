//
// Created by marku on 28.10.2021.
//

#include "cMedium.h" // header in local directory
#include "clocation.h"
#include <ctime>
#include <string>
#include <iostream>

using namespace std;

CMedium::CMedium() {
    this->title = "";
    this->signature = "";
    this->location = CLocation("","");
    this->fsk = 0;
    Status s = verfuegbar;
    this->status = s;
};
CMedium::CMedium(string title,string signature,CLocation location,int fsk,Status status){
    this->title = title;
    this->signature = signature;
    this->location = location;
    this->fsk = fsk;
    this->status = status;
}
void CMedium::print(){
    // nochmal bearbeiten
    cout << "Titel: " << this->title << "\nSignatur: " << this->signature;
}