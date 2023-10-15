#include <iostream>
#include "help_func.h"
#include <vector>
#include <cmath>
template<typename T>
double print_powers_of_numbers(T arr, int size,int value) {///(3.1.2) 1 2 3
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (fmod(log(*(arr + i)) / log(value), 1) == 0) {
            std::cout << *(arr + i) << " ";
            ++count;
        }
    }
    return count;
}
