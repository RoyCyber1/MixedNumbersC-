//
// Created by ROY VAKNIN  on 11/2/21.
//

#include "MixedNumber.h"
#include "/Users/royvaknin/CLionProjects/RationalNumbers/RationalNumber.cpp"
#include <string>
#include <cmath>
#include <iostream>

using namespace std;

MixedNumber::MixedNumber()
{
    this->whole= 0;
    this->setNumerator(0);
   this->setDenominator(1);

}

MixedNumber::MixedNumber(int w , int n , int d )
:whole(w)
{
    this->setNumerator(n);
    this->setDenominator(d);
}

MixedNumber::MixedNumber(const MixedNumber &rhs)
:whole(rhs.whole)
{

    this->setNumerator(rhs.getNumerator());
    this->setDenominator((rhs.getDenominator()));

}

MixedNumber::~MixedNumber() {
}

string MixedNumber::toString(){
try{
    RationalNumber a = this->Simplify(*this);
    MixedNumber *x = new MixedNumber(this->whole, a.getNumerator(), a.getDenominator());

    RationalNumber *wh = new RationalNumber(this->whole, 1);
    RationalNumber *rat = new RationalNumber (this->numerator, this->denominator);
    if(::abs(this->numerator) > ::abs(this->denominator)){
        string st = a.ToString();
                string sub = st.substr(0,1);
              int i = std::stoi(sub);
               x->whole = x->whole + i ;
               string fra = st.substr(1,st.length());
               return to_string(x->whole)  + fra;
    }
    return wh->add(*rat).ToString();
}
catch(exception e){

}
return "";
}



//    MixedNumber b = MixedNumber(this->whole,this->getNumerator(),this->getDenominator());
//    RationalNumber a = this->Simplify(b);
//    try {
//        MixedNumber x = MixedNumber(this->whole, a.getNumerator(), a.getDenominator());
//        this->setNumerator(x.getNumerator());
//        this->setDenominator((x.getDenominator()));
//
//        //Whole number and fraction
//        if (x.whole != 0 && ::abs(x.getNumerator()) != ::abs(x.getDenominator()) && ::abs(x.getNumerator()) > 0 && ::abs(x.getDenominator()) > 0) {
//            if (::abs(x.getNumerator())>::abs(x.getDenominator())){
//                string st = a.ToString();
//                string sub = st.substr(0,1);
//                int i = std::stoi(sub);
//                x.whole = x.whole + i ;
//                string fra = st.substr(1,st.length());
//                return to_string(x.whole)  + fra;
//            }
//            else return to_string(x.whole) +" "+ a.ToString();
//        }
//
//        //Whole number
//        if(x.numerator % x.denominator ==0){
//            int m = x.whole + (x.numerator/x.denominator);
//            return to_string(m);
//
//        }
//
//        if (x.getNumerator() / x.getDenominator() == 0 || ::abs(x.getNumerator()) / ::abs(x.getDenominator()) == 1) {
//
//            if ((x.whole > 0 && x.getNumerator() < 0) || x.getNumerator() < 0) {
//                return to_string(x.whole * -1) + " ";
//            }
//            if ((x.whole > 0 && x.getNumerator() < 0) && x.getDenominator() < 0) {
//                return to_string(x.whole) + " ";
//            }
//            if ((x.whole < 0 && x.getNumerator()< 0) && x.getDenominator() < 0) {
//                return to_string(x.whole) + " ";
//
//            }
//            if ((x.whole < 0 && x.getNumerator() < 0) || x.getDenominator() < 0) {
//                return to_string(x.whole * -1) + "";
//            } else return to_string(x.whole) + " ";
//
//        }
//
//        //just Fraction
//        if (x.whole == 0 && x.getNumerator()<x.getDenominator()) {
//            return a.ToString();
//        }
//
//
//        else return to_string(x.whole) + " " + a.ToString();
//
//
//    } catch (exception e) {
//
//    }
//    return to_string(this->whole) +a.ToString();



