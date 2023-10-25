#include <iostream>
#include "func.h"
#include <vector>
#include <cmath>
#include <algorithm>
template<typename Iterator>
int print_powers_of_numbers(Iterator first, Iterator last,int value, int count) {///(3.1.2) 1 2 3
    for (; first != last; first++) {
        if (fmod(log(*first) / log(value), 1) == 0) {
            std::cout << *first << " ";
            ++count;
        }
    }
    return count;
}
template <typename Iterotor>
int checking_indexes_on_function(Iterotor first, Iterotor last, bool (*func)(int), int count) {///(3.1.2) 5 4 6
    for (; first < last; first++,count++) {
        if (func(count))
            std::cout << *first << std::endl;
        if (func(*first))
            count++;
    }
    return count;
}
template <typename Iterotor>
double is_sum_array (Iterotor arr_first,Iterotor arr_second, Iterotor size_arr_first, Iterotor size_arr_second,double sum) {///(3.1.2) 7
    for (int i = 0; i < size_arr_second; i++) {
        sum += arr_first[arr_second[i]];
    }
    return sum;///todo
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
template <typename Iterotor>
auto find_max(Iterotor arr_first, Iterotor arr_second,int max) {///(3.1.2) 10
    for (; first != last; first++) {
        if (*first == max) {
            break;
        }
        sum += *first;
    }
    for (auto item : arr_second) {
        if (item == max) {
            return max;
        }
    }
    return -1;
}
template <typename Iterotor>
int zd_11(Iterotor first ,Iterotor last,int count) {///(3.1.2) 11
    for (; first < last; first++) {
        for (int j = i + 1; j < last; j++) {
            if (*first == -arr[j]) {
                count++;///todo
            }
        }
    }
    return count;
}