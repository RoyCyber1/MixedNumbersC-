#include <iostream>
#include "MixedNumber.h"

int main() {
    using namespace std;

    try {
        MixedNumber *x = new MixedNumber(2, 2, 3);
        MixedNumber *m = new MixedNumber(-22, 2, 3);
        MixedNumber *n = new MixedNumber(2, -7, -14);
        MixedNumber *r = new MixedNumber(2, 14, 14);
        MixedNumber *s = new MixedNumber(2, 17, -3);
        MixedNumber *z = new MixedNumber(-1, 1, 1);



        std::cout <<x->toString()<< std::endl;
        std::cout <<m->toString()<< std::endl;
        std::cout <<n->toString()<< std::endl;
        std::cout <<r->toString()<< std::endl;
        std::cout <<s->toString()<< std::endl;
        std::cout <<z->toString()<< std::endl;



    } catch (exception e) {


        std::cout << "Hello, World!" << std::endl;
        return 0;
    }
}