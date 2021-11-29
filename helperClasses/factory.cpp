//
// Created by marku on 23.11.2021.
//

#include <cstring>
#include "factory.h"
#include "string"


int factory::countSpaces(string line) {
    int cntLeerzeichen = 0;
    int i = 0;
    while(line.at(i) == ' '){
        cntLeerzeichen++;
        i++;
    }
    return cntLeerzeichen;
}

int factory::startTagInLine(string line, string word) {
    return line.substr(line.find_first_of('<') + 1, strlen(word.c_str())).compare(word) == 0;
}

int factory::endTagInLine(string line, string word) {
    return line.substr(line.find_first_of('<') + 1, strlen(word.c_str())+1).compare("/"+word) == 0;
}

string factory::getContent(string line,string word) {
    return line.substr(line.find_first_of('>') + 1, line.length() - (strlen(word.c_str())*2 +5) - factory::countSpaces(line)).c_str();
}
