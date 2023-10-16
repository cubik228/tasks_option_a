#pragma once
#include <iostream>
#include "func.h"
#include <vector>
#include <cmath>
template <typename T>
int sum_before_min(T arr, int size) {///(3.1.1)  1
    int min = *(arr + 0);
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (*(arr + i) < min) {
            min = *(arr + i);
            break;
        }
        sum += *(arr + i);
    }
    return sum;
}
template <typename T>
int sum_before_max_v1(T arr, int size) {///(3.1.1)  2
    int max = *(arr + 0);
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
            break;
        }
        sum += *(arr + i);
    }
    return sum;
}
template <typename T>
double sum_between_min_max(T arr, int size) {///(3.1.1)  3
    int min = *(arr + 0);
    int max = *(arr + 0);
    for (int i = 1; i < size; i++) {
        if (*(arr + i) < min) {
            min = *(arr + i);
        }
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    double sum = 0;
    for (int i = 0; i <= size; i++) {
        if (*(arr + i) > min && *(arr + i) < max) {
            sum += *(arr + i);
        }
    }
    return sum;
}
template <typename T>
double sum_after_max(T arr, int size) {///(3.1.1)  4
    int max_index = 0;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > *(arr + max_index)) {
            max_index = i;
        }
    }
    double sum = 0;
    for (int i = max_index + 1; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}
template <typename T>
double sum_before_max_v2(T arr, int size) {///(3.1.1)  5
    int max_index = 0;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > *(arr + max_index)) {
            max_index = i;
        }
    }
    double sum = 0;
    for (int i = 0; i < max_index; i++) {
        sum += *(arr + i);
    }
    return sum;
}
template <typename T>
double sum_after_max_v2(T arr, int size) {///(3.1.1)  6
    int max_index = 0;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > (*arr + max_index)) {
            max_index = i;
        }
    }
    double sum = 0;
    for (int i = max_index + 1; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}
template <typename T>
double sum_after_max_modul_max(T arr, int size) {///(3.1.1)  7
    int max_index = 0;
    for (int i = 1; i < size; i++) {
        if (std::abs(*(arr + i)) > std::abs(*(arr + max_index))) {
            max_index = i;
        }
    }
    double sum = 0;
    for (int i = max_index + 1; i < size; i++) {
        sum += *(arr + i);
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
