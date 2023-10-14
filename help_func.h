#pragma once
#include <iostream>

int count_number_sizee(int value) {
    int count = 0;
    for (;value != 0;count++) {
        value /= 10;
    }
    return count;
}
template <int N, typename T>
void print_array(T(&arr)[N]) {
    for (auto i : arr) {
        std::cout << i << " ";
    }
}
