#include <cstdlib>
#include "CBook.h"
#include "../../helperClasses/factory.h"

CBook *CBook::load(std::ifstream & infile) {
    std::string line;
    while (std::getline(infile, line)) {
        if (factory::startTagInLine(line,"Title")) {
            setTitle(factory::getContent(line,"Title"));
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
        }else if (factory::startTagInLine(line,"Author")) {
            this->autor= factory::getContent(line,"Author");
        }
        else if(factory::endTagInLine(line,"Book")) {
            break;
        }
    }
    return this;
}

void CBook::print()
{
    cout << "Autor:        " << autor << endl;
    CPrintedMedium::print();
}

CBook::CBook() {

}

CBook::~CBook() {
    cout << "Das Buch '" << getTitle() << "' mit der Signatur '" << getSig() << "' wird vernichtet!" << endl;
}

