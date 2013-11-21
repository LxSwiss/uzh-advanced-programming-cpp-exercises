#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>

#include "rpcalc.h"

using std::cout;
using std::cerr;
using std::cin;
using std::endl;
using std::string;

int main() {

	rpcalc calc = rpcalc();
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
					float num;
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
