/*
 * pvector.cpp
 *
 *  Created on: Nov 10, 2013
 *      Author: alex
 */

#include <fstream>
#include "pvector.h"

template<typename T>
pvector<T>::pvector(string fname)
                : filename(fname), vect() {
        std::ifstream ifs(filename.c_str());
        T inp;

        while (ifs >> inp) {
                vect.push_back(inp);
        }
        ifs.close();
}

template<typename T>
pvector<T>::~pvector() {
        std::ofstream ofs(filename.c_str());
        for (typename std::vector<T>::iterator itr = vect.begin(); itr != vect.end(); itr++) {
                ofs << *itr << "\n";
        }
        ofs << std::flush;
        ofs.close();
}

template<typename T>
void pvector<T>::push_back(const T &element) {
        vect.push_back(element);
}

template<typename T>
void pvector<T>::pop_back() {
        vect.pop_back();
}

template<typename T>
int pvector<T>::size() {
        return vect.size();
}

template<typename T>
bool pvector<T>::empty() {
        return vect.empty();
}

template<typename T>
T pvector<T>::at(int idx) {
        return vect.at(idx);
}

template<typename T>
T pvector<T>::back() {
        return vect.back();
}

// Iterators

template<typename T>
typename pvector<T>::iterator pvector<T>::begin() {
        return vect.begin();
}

template<typename T>
typename pvector<T>::iterator pvector<T>::end() {
        return vect.end();
}

template<typename T>
typename pvector<T>::const_iterator pvector<T>::begin() const {
        return vect.begin();
}

template<typename T>
typename pvector<T>::const_iterator pvector<T>::end() const {
        return vect.end();
}


