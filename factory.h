//
// Created by marku on 23.11.2021.
//

#ifndef INFO3_FACTORY_H
#define INFO3_FACTORY_H


#include "string"
using namespace std;

class factory {
public:
    static int countSpaces(string);

    static int startTagInLine(string,string);

    static int endTagInLine(string,string);

    static string getContent(string,string);
};
#endif //INFO3_FACTORY_H
