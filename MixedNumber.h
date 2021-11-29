//
// Created by ROY VAKNIN  on 11/2/21.
//

#ifndef MIXEDNUMBER_MIXEDNUMBER_H
#define MIXEDNUMBER_MIXEDNUMBER_H

#include "/Users/royvaknin/CLionProjects/RationalNumbers/RationalNumber.h"
//#include "/Users/royvaknin/CLionProjects/RationalNumbers/RationalNumber.cpp"

using namespace std;


class MixedNumber : public RationalNumber {
private:
    int whole;

public:
    MixedNumber();
    MixedNumber(int w, int num, int dem);
    MixedNumber(const MixedNumber &rhs) ;
    ~MixedNumber();

    string toString();
};
#endif //MIXEDNUMBER_MIXEDNUMBER_H
