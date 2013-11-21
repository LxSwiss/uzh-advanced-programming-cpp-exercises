#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>

#include "rpn.h"
#include "fraction.cpp"

using std::cout;
using std::cerr;
using std::cin;
using std::endl;
using std::string;

#define FRACTION_TYPE

int main() {
#ifdef FRACTION_TYPE
        typedef fraction rpn_type;
        string save_location = "data/fraction-data.txt";
#elif defined(INT_TYPE)
        typedef int rpn_type;
        string save_location = "data/int-data.txt";
#else
        typedef float rpn_type;
        string save_location = "data/float-data.txt";
#endif

        rpn<rpn_type> calc = rpn<rpn_type>("data/data.txt");
	string input;
	string curr;

	while (true) {
		cout << "Command: ";
		try {
			getline(cin, input);
			std::stringstream iss(input);
			while (iss >> curr) {
				if (curr.compare("n") == 0) {
					// Entering a number
					   rpn_type num;
					   	   iss >> num;
					calc.push(num);

				} else if (curr.compare("+") == 0) {
					calc.add();
				} else if (curr.compare("-") == 0) {
					calc.subtract();
				} else if (curr.compare("*") == 0) {
					calc.multiply();
				} else if (curr.compare("/") == 0) {
					calc.divide();
				} else if (curr.compare("d") == 0) {
					calc.pop();
				} else if (curr.compare("q") == 0) {
					exit(EXIT_SUCCESS);
				} else {
					cerr << "Invalid command " << curr << " entered." << endl;
				}
			}
			calc.print();
		} catch (char* &pEx) {
			cerr << "Error: " << pEx << endl;
		}
	}

}
