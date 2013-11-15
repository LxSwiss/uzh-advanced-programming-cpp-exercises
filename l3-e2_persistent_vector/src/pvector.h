/*
 * pvector.h
 *
 *  Created on: Nov 10, 2013
 *      Author: alex
 */

#ifndef PVECTOR_H_
#define PVECTOR_H_

#include <iostream>
#include <vector>

using std::string;
using std::vector;

template<typename T>
class pvector {

public:
        typedef typename vector<T>::iterator iterator;
        typedef typename vector<T>::const_iterator const_iterator;

        pvector(string fname);
        ~pvector();

        void push_back(const T &element);
        void pop_back();
        int size();
        bool empty();
        T at(int idx);
        T back();

        iterator begin();
        iterator end();
        const_iterator begin() const;
        const_iterator end() const;

private:
        string filename;
        vector<T> vector;
};

#endif /* PVECTOR_H_ */


