//
// Created by marku on 29.11.2021.
//

#ifndef INFO3_CPrintedMedium_H
#define INFO3_CPrintedMedium_H
#include <string>

using namespace std;

#include "CPrintedMedium.h"
#include "../cmedium.h"
#include "time.h"

class CPrintedMedium : virtual public CMedium
{
   public:
       CPrintedMedium();
       CPrintedMedium(string, string, CLocation, int, Status ,int );
       CPrintedMedium* load(std::ifstream &);
       ~CPrintedMedium();
       void print();

       void setSites(int sites){this->sites = sites;}
       int getSites(){return sites;}

   private:
       int sites;
};
#endif //INFO3_CPRINTEDMEDIUM_H
