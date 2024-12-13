#ifndef ITER_HPP
#define ITER_HPP

#include <cstdlib>
#include <iostream>
#include <stdio.h>

template <typename T, typename F>
void iter(T* array, size_t length, F func) {
    for (size_t i = 0; i < length; ++i) {
        func(array[i]);
    }
}

template <typename T, typename F>
void iter(const T* array, size_t length, F func) {
    for (size_t i = 0; i < length; ++i) {
        func(array[i]);
    }
}

#endif