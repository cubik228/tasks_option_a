#include <iostream>
#include "help_func.h"

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
int sum_before_max(T arr, int size) {///(3.1.1)  2
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
int sum_between_min_max(T arr[], int size) {///(3.1.1)  3
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
    int sum = 0;
    for (int i = 0; i <= size; i++) {
        if (*(arr + i) > min && *(arr + i) < max) {
            sum += *(arr + i);
        }
    }
    return sum;
}