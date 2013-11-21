#ifndef RPN_H_
#define RPN_H_

#include "pvector.cpp"

class rpcalc {

public:

        rpcalc();

        void add();
        void subtract();
        void divide();
        void multiply();

        void push(float pNumber);
        void pop();

        void print();

private:
        pvector<float> stack;

        void checkSize();
};

#endif /* RPN_H_ */
