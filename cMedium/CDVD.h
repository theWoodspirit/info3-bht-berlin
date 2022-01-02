#ifndef INFO3_CDVD_H
#define INFO3_CDVD_H
#include <string>

using std::string;


#include "cmedium.h"
#include <ctime>

class CDVD : public CMedium
{
   public:
       CDVD();
       CDVD(string t, string s, CLocation l, int a, Status st, string actor, tm length);
       CDVD* load(std::ifstream &);
       ~CDVD();
       void print();

   private:
       string actor;
       tm length;
};
#endif //INFO3_CDVD_H
