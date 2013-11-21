#include <iostream>
#include "rpcalc.h"

rpcalc::rpcalc() : stack("data/data.txt") {

}

void rpcalc::add() {
        checkSize();

        float num2 = stack.back();
        stack.pop_back();
        float num1 = stack.back();
        stack.pop_back();

        stack.push_back(num1 + num2);
}

void rpcalc::subtract() {
        checkSize();

        float num2 = stack.back();
        stack.pop_back();
        float num1 = stack.back();
        stack.pop_back();

        stack.push_back(num1 - num2);
}

void rpcalc::multiply() {
        checkSize();

        float num2 = stack.back();
        stack.pop_back();
        float num1 = stack.back();
        stack.pop_back();

        stack.push_back(num1 * num2);
}

void rpcalc::divide() {
        checkSize();

        float num2 = stack.back();
        stack.pop_back();
        float num1 = stack.back();
        stack.pop_back();

        if (num2 == 0) {
                stack.push_back(num1);
                stack.push_back(num2);

                throw "Division by zero.";
        }

        stack.push_back(num1 / num2);
}

void rpcalc::push(float pNumber) {
        stack.push_back(pNumber);
}

void rpcalc::pop() {
        if (!stack.empty()) {
                stack.pop_back();
        }
}

void rpcalc::print() {
        int index = 1;
        for (vector<float>::const_iterator itr = stack.begin(); itr != stack.end(); itr++) {
                std::cout << index++ << ": " << *itr << std::endl;
        }
}

void rpcalc::checkSize() {
        if (stack.size() < 2) {
                throw "Less than two elements on the stack";
        }
}
