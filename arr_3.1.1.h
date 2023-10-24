#pragma once
#include <iostream>
#include "func.h"
#include <vector>
#include <cmath>
template <typename Iterator>
double sum_before_min(Iterator first, Iterator last,double sum, double min) {///(3.1.1)  1
    for (; first != last; first++) {
        if (*first > min) {
            min = *first;
            break;
        }
        sum += *first;
    }
    return sum;
}
template <typename Iterator>
double sum_before_max_v1(Iterator first, Iterator last , double sum, double max ) {///(3.1.1)  2
    for (; first != last; first++) {
        if (*first < max) {
            max = *first;
            break;
        }
        sum += *first;
    }
    return sum;
}
template <typename Iterator>
double sum_between_min_max(Iterator first, Iterator last, double max, double min, double sum) {
    for (; first != last; first++) {
        if (*first < min) {
            min = *first;
        }
        if (*first > max) {
            max = *first;
        }
    }
    for (Iterator it = first; it != last; it++)
    {
        if (*it > min && *it < max) {
            std::cout << *it << " ";
            sum += *it;
        }
    }
    return sum;
}

template <typename Iterator>
double sum_after_max(Iterator first, Iterator last,int count, double sum, int max_index ) {///(3.1.1)  4
    for (;first != last; first++, count++) {
        if (*first > *(first + max_index)) {
            max_index = count;
        }
        sum += *first;
    }
    for (; max_index + 1 < last; (max_index + 1)++) {
        sum += *first;
    }
    return sum;
}
template <typename Iterator>
double sum_before_max_v2(Iterator first, Iterator last, int max_index,int count, double sum ) {///(3.1.1)  5
    for (;first != last; first++, count++) {
        if (*first > *(first + max_index)) {
            max_index = count;
        }
    }
    for (;first != last; first++) {
        sum += *first;
    }
    return sum;
}
template <typename Iterator>
double sum_after_max_v2(Iterator first, Iterator last, int max_index ,int count, double sum ) {///(3.1.1)  6
   
    for (;first != last; first++, count++) {
        if (*first > (*first + max_index)) {
            max_index = count;
        }
    }
    for (; max_index + 1 < last; (max_index + 1)++) {
        sum += *first;
    }
    return sum;
}
template <typename Iterator>
double sum_after_max_modul_max(Iterator first, Iterator last, int max_index, int count, double sum) {///(3.1.1)  7
    for (;first != last; first++, count++) {
        if (std::abs(*first) > std::abs(*(first + max_index))) {
            max_index = count;
        }
    }
    for (; max_index + 1 < last; (max_index + 1)++) {
        sum += *first;
    }
    return sum;
}

template <typename T>
int sum_after_max_modul_min(T arr, int size) {///(3.1.1)  8
    int max_index = 0;
    for (int i = 1; i < size; i++) {
        if (std::abs(*(arr + i)) > std::abs(*(arr + max_index))) {
            max_index = i;
        }
    }
    int sum = 0;
    for (int i = 0; i < max_index; i++) {
        sum += *(arr + i);
    }
    return sum;
}

template<typename T>
double sum_before_min_abs(T arr, int size) {///(3.1.1)  9
    int min_abs = 0;
    for (int i = 1; i < size; ++i) {
        if (abs(*(arr + i)) < abs(arr[min_abs])) {
            min_abs = i;
        }
    }
    double sum = 0;
    for (int i = 0; i < min_abs; ++i) {
        sum += *(arr + i);
    }
    return sum;
}

template<typename T>
double sum_between_min_max(std::vector<T> arr) {///(3.1.1)  10

    int min_index = std::min_element(arr.begin(), arr.end()) - arr.begin();
    int max_index = std::max_element(arr.begin(), arr.end()) - arr.begin();
    double sum = 0;
    if (min_index > max_index) {
        std::swap(min_index, max_index);
    }
    for (int i = min_index; i <= max_index; i++) {
        sum += *(arr + i);
    }
    return sum;

}
template<typename T>
double sum_between_min_max_modul(std::vector<T> arr) {///(3.1.1)  11

    int min_index = std::min_element(arr.begin(), arr.end()) - arr.begin();
    int max_index = std::max_element(arr.begin(), arr.end()) - arr.begin();
    double sum = 0;
    if (std::abs(min_index) > std::abs(max_index)) {
        std::swap(min_index, max_index);
    }
    for (int i = min_index; i <= max_index; i++) {
        sum += *(arr + i);
    }
    return sum;

}
template<typename T>
double sum_between_min_neg(T arr, int size) {///(3.1.1) 12
    int min_pos = -1;
    int max_neg = -1;
    for (int i = 0; i < size; ++i) {
        if (*(arr + i) > 0 && (min_pos == -1 || *(arr + i) < *(arr + min_pos))) {
            min_pos = i;
        }
        if (*(arr + i) < 0 && (max_neg == -1 || *(arr + i) > *(arr + max_neg))) {
            max_neg = i;
        }
    }
    if (min_pos == -1 || max_neg == -1) {
        return 0;
    }
    double sum = 0;
    int start = min_pos < max_neg ? min_pos : max_neg;
    int end = min_pos > max_neg ? min_pos : max_neg;
    for (int i = start; i <= end; ++i) {
        sum += *(arr + i);
    }
    return sum;
}
