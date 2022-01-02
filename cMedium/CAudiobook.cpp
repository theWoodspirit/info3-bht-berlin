//
// Created by marku on 07.12.2021.
//

#include "CAudiobook.h"

<<<<<<< HEAD
CAudiobook *CAudiobook::load(std::ifstream & infile) {
    std::string line;
    while (std::getline(infile, line)) {
        if (factory::startTagInLine(line,"Title")) {
            CCD::setTitle(factory::getContent(line,"Title"));
            CBook::setTitle(factory::getContent(line,"Title"));
        } else if (factory::startTagInLine(line,"Signatur")) {
            CCD::setSig(factory::getContent(line,"Signatur"));
            CBook::setSig(factory::getContent(line,"Signatur"));
        } else if(factory::startTagInLine(line,"Location")) {
            CLocation loc;
            loc.load(infile);
            CCD::setLoc(loc);
            CBook::setLoc(loc);
        }else if(factory::startTagInLine(line,"Status")) {
            CCD::status = CCD::EnumOfIndex(atoi(factory::getContent(line,"Status").c_str()));
            CBook::status = CCD::EnumOfIndex(atoi(factory::getContent(line,"Status").c_str()));
        }else if(factory::startTagInLine(line,"FSK")) {
            CCD::setAge(atoi(factory::getContent(line,"FSK").c_str()));
            CBook::setAge(atoi(factory::getContent(line,"FSK").c_str()));
        }else if (factory::startTagInLine(line,"Interpret")) {
            CCD::interpret = factory::getContent(line,"Interpret");
        }else if (factory::startTagInLine(line,"Tracks")) {
            CCD::tracksSize = atoi(factory::getContent(line,"Tracks").c_str());
        }
        else if (factory::startTagInLine(line,"Author")) {
            CBook::autor = factory::getContent(line,"Author");
        }
        else if(factory::endTagInLine(line,"Audiobook")) {
            if(CCD::getAge() < 0){
                CCD::setAge(0);
                CBook::setAge(0);
            }
            break;
        }
    }
    return this;
}

CAudiobook::CAudiobook() {
}

void CAudiobook::print() {
    //cout << "\n";
    CCD::print();
    cout << "Autor: " << CBook::autor << endl;
}

CAudiobook::~CAudiobook() {
    cout << "Das Audiobook '" << CCD::getTitle() << "' wurde geloescht";
=======
CAudiobook *CAudiobook::load(std::ifstream &) {
    return NULL;
}

CAudiobook::CAudiobook() {

>>>>>>> parent of 4ca5bf4 (markus abagbe)
}

