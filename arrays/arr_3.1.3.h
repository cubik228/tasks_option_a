#include <iostream>
#include "template_func.h"
#include <vector>
template<typename T>
void pos_num_in_arrays(T arr, T arr2, int size_1, int size_2) {///(3.1.3) 1
    std::vector<double> mergedArr = mergeArrays(arr, arr2, size_1, size_2);
    for (auto item : mergedArr)
    {
        if (item > 0) {
            std::cout << item << " ";
        }
    }
}
template<typename T>
int maximum_among_negative_elements(T arr, T arr2, int size_1, int size_2,int max_negative) {///(3.1.3) 2
    std::vector<double> mergedArr = mergeArrays(arr, arr2, size_1, size_2);
    for (auto item : mergedArr)
    {
        if (item < 0 && item > max_negative) {
            max_negative = item;
        }
    }
    return max_negative;
}
template<typename T>
int max_sum(T arr, int n) {///(3.1.3) 3
    int max_sum = arr[0] + arr[n - 1];
    for (int i = 1; i < n / 2; i++) {
        int sum = arr[i] + arr[n - i - 1];
        if (sum > max_sum) {
            max_sum = sum;
        }
    }
    return max_sum;
}
template<typename T>
int min_sum(T arr, int n) {///(3.1.3) 4
    int min_sum = arr[0] + arr[n - 1];
    for (int i = 1; i < n / 2; i++) {
        int sum = arr[i] + arr[n - i - 1];
        if (sum < min_sum) {
            min_sum = sum;
        }
    }
    return min_sum;
}