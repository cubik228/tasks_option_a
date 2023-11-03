#pragma once
#include <algorithm>
#include <iostream>
#include "func.h"
#include <vector>
#include <cmath>
#include "template_func.h"


template <typename Iterator>
double sum_before_min(Iterator first, Iterator last, double sum) {///(3.1.1)  1 4
    return accumulate(first, min_1(first, last), 0);
}
template <typename Iterator>
double sum_before_max(Iterator first, Iterator last, double sum) {///(3.1.1)  2 5
    return accumulate(first, max_1(first, last), 0);
}
template <typename Iterator>
double sum_between_max_min(Iterator first, Iterator last, double sum) {///(3.1.1)  3 10 
    return accumulate(min_1(first, last), max_1(first, last), 0);
}
template <typename Iterator>
double sum_after_max(Iterator first, Iterator last) {///(3.1.1)  6
    return accumulate(max_1(first, last),last , 0);
}
template <typename Iterator>
double sum_after_max_modul(Iterator first, Iterator last){ ///(3.1.1)  7
    return accumulate(max_1_v2(first, last), last, 0);
}
template <typename Iterator>
double sum_after_min_modul(Iterator first, Iterator last) { ///(3.1.1)  8
    return accumulate(min_1_v2(first, last), last, 0);
}
template <typename Iterator>
double sum_before_min_abs(Iterator first, Iterator last) {///(3.1.1)  9
    return accumulate(first,min_1_v2(first, last), 0);
}
template <typename Iterator>
double sum_between_min_max_modul(Iterator first, Iterator last) {///(3.1.1)  11
    return accumulate(first + 1, min_1_v2(first, last) , 0);
}
template<class Iterator>
double sum_before_min_positive_and_max_negative(Iterator first, Iterator last) {///(3.1.1)  12
    int* first_positive = find_if(first, last, [](int* a) {return *a > 0; });
    int* min_positive = search1(first_positive, last, [](int* a, int* b) {
        if (*a < 0)
        {
            return false;
        }
        return *a < *b;
        });
    int* first_negative = find_if(first, last, [](int* a) {return *a < 0; });
    int* max_negative = search1(first_negative, last, [](int* a, int* b) {
        if (*a > 0)
        {
            return false;
        }
        return *a > *b;
        });
    return accumulate(min_positive, max_negative, 0);
}


