#include <iostream>
#include "help_func.h"
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
        sum += *(arr+ i );
    }
    return sum;
}
template <typename T>
double sum_after_max_v2(T arr, int size) {///(3.1.1)  6
    int max_index = 0;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > (*arr+ max_index)) {
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
        if (std::abs(*(arr + i)) > std::abs(*(arr +max_index))) {
            max_index = i;
        }
    }
    double sum = 0;
    for (int i = max_index + 1; i < size; i++) {
        sum +=  *(arr + i);
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
    for (int i = 0 ; i < max_index; i++) {
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
///(3.1.1) 12 todo
template<typename T>
void print_and_count_powers_of_two(T arr, int size) {///(3.1.2) 1
    int count = 0;
    for (int i = 0; i < size; i++) {
        if ((i & (i - 1)) == 0) {
            std::cout << *(arr + i) << std::endl;
        }
        if ((*(arr+i) & (*(arr + i) - 1)) == 0) {
            count++;
        }
    }
    std::cout<< count << std::endl;
}