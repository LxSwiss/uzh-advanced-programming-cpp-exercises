#include <iostream>
#include <exception>

#include "fraction.h"

using std::exception;
using std::cout;
using std::endl;
using std::string;

int main(int pArgc, const char* pArgv[]) {

	// set some fractions
	fraction f1(1, 2);
	fraction f2(1, 4);
	fraction f3(2, 3);
	fraction f4(1, -4);

// f1 + f2 shoult be 3/4
	cout << "Test 1: ";
	fraction res1 = f1 + f2;
	if ((res1.getCounter() != 3) || (res1.getDenominator() != 4)) {
		cout << "FAILED ";
	} else {
		cout << "SUCCESS";
	}
	cout << " (result was " << res1.getCounter() << "/" << res1.getDenominator()
			<< ")" << endl;

//	    f3 - f1 should be 1 / 6
	cout << "Test 2: ";
	fraction res2 = f3 - f1;
	if ((res2.getCounter() != 1) || (res2.getDenominator() != 6)) {
		cout << "FAILED ";
	} else {
		cout << "SUCCESS";
	}
	cout << " (result was " << res2.getCounter() << "/" << res2.getDenominator()
			<< ")" << endl;

//	f2 * f3 should be 1/6
	cout << "Test 3: ";
	fraction res3 = f2 * f3;
	if ((res3.getCounter() != 1) || (res3.getDenominator() != 6)) {
		cout << "FAILED ";
	} else {
		cout << "SUCCESS";
	}
	cout << " (result was " << res3.getCounter() << "/" << res3.getDenominator()
			<< ")" << endl;

//		f2 / f1 should be 1/2
	cout << "Test 4: ";
	fraction res4 = f2 / f1;
	if ((res4.getCounter() != 1) || (res4.getDenominator() != 2)) {
		cout << "FAILED ";
	} else {
		cout << "SUCCESS";
	}
	cout << " result was " << res4.getCounter() << "/" << res4.getDenominator()
			<< endl;


	// testing the exceptions
	cout << "Test 5: ";
	try {
		fraction f5(1, 0);
		cout << "FAILED  (no exception thrown)";
	} catch (char const* &ex) {
		cout << "SUCCESS (exception was thrown)";
	}
	cout << endl;

	cout << "Test 6: ";
	fraction f5(1, 2);
	try {
		f5.setDenominator(0);
		cout << "FAILED  (no exception thrown)";
	} catch (char const* &ex) {
		cout << "SUCCESS (exception was thrown)";
	}
	cout << endl;

	return 0;

}
