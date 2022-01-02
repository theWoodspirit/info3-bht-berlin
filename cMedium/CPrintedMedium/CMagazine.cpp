#include <cstdlib>
#include "CMagazine.h"
#include "../../helperClasses/factory.h"

CMagazine *CMagazine::load(std::ifstream & infile) {
    std::string line;
    while (std::getline(infile, line)) {
        if (factory::startTagInLine(line,"Title")) {
            this->setTitle(factory::getContent(line,"Title"));
        } else if (factory::startTagInLine(line,"Signatur")) {
            this->setSig(factory::getContent(line,"Signatur"));
        } else if(factory::startTagInLine(line,"Location")) {
            CLocation loc;
            loc.load(infile);
            this->setLoc(loc);
        }else if(factory::startTagInLine(line,"Status")) {
            this->status = EnumOfIndex(atoi(factory::getContent(line,"Status").c_str()));
        }else if(factory::startTagInLine(line,"FSK")) {
            this->setAge(atoi(factory::getContent(line,"FSK").c_str()));
        }else if (factory::startTagInLine(line,"Pages")) {
            this->setSites(atoi(factory::getContent(line,"Pages").c_str()));
        }else if (factory::startTagInLine(line,"Designer")) {
            this->Designer= factory::getContent(line,"Designer");
        }
        else if(factory::endTagInLine(line,"Magazine")) {
            break;
        }
    }
    return this;
}

void CMagazine::print()
{
    cout <<"Designer:     " << Designer << endl;
    CPrintedMedium::print();
}

CMagazine::CMagazine() {

}

CMagazine::~CMagazine() {
    cout << "Das Magazin '" << getTitle() << "' mit der Signatur '"<< getSig() <<"' wird vernichtet!" << endl;
}

