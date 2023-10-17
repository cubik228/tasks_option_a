#include <iostream>
#include "func.h"
#include <vector>
#include <cmath>
#include <algorithm>
template<typename T>
int print_powers_of_numbers(T arr, int size,int value) {///(3.1.2) 1 2 3
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (fmod(log(*(arr + i)) / log(value), 1) == 0) {
            std::cout << *(arr + i) << " ";
            ++count;
        }
    }
    return count;
}
template <typename T>
int checking_indexes_on_function(T arr, int size, bool (*func)(int)) {///(3.1.2) 5 4 6
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (func(i))
            std::cout << *(arr + i) << std::endl;
        if (func(*(arr + i)))
            count++;
    }
    return count;
}
template <typename T>
T is_sum_array (std::vector<T> arr_first, std::vector<T> arr_second,int size_arr_first,int size_arr_second) {///(3.1.2) 7
    T sum = 0;
    for (int i = 0; i < size_arr_second; i++) {
        sum += arr_first[arr_second[i]];
    }
    return sum;
}
template <typename T>
T sum_of_different_indices(std::vector<T> arr_first, std::vector<T> arr_second, int size_arr_first, int size_arr_second) {///(3.1.2) 8
    T sum = 0;
    for (int i = 0; i < size_arr_first; i++) {
        bool is_index_present = false;
        for (int j = 0; j < size_arr_second; j++) {
            if (i == *(arr_second+j)) {
                is_index_present = true;
                break;
            }
        }
        if (!is_index_present) {
            sum += *(arr_first +i);
        }
    }
    return sum;
}
template <typename T>
T find_min(std::vector<T> arr_first, std::vector<T> arr_second) {///(3.1.2) 9
    std::sort(arr_second.begin(), arr_second.end());
    for (auto i : arr_first) {
        if (!std::binary_search(arr_second.begin(), arr_second.end(), i)) {
            return i;
        }
    }
    return -1;
}
template <typename T>
T find_max(std::vector<T> arr_first, std::vector<T> arr_second) {///(3.1.2) 10
    T max = *std::max_element(arr_first.begin(), arr_first.end());
    for (auto item : arr_second) {
        if (item == max) {
            return max;
        }
    }
    return -1;
}
template<typename T>
int zd_11(T arr ,int size) {///(3.1.2) 11
    int cnt = 0;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == -arr[j]) {
                cnt++;
            }
        }
    }
    return cnt;
}