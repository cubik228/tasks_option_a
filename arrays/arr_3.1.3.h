#include <iostream>
#include "template_func.h"
#include <vector>
#include <algorithm>
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
template<typename T>///todo как написать эти 2 задачи одной функцией поскольку они почти аналогичны и отличие только в знаках <>
int max_sum(T arr, int n) {///(3.1.3) 3
    int max_sum = *arr + *(arr + n - 1);
    for (int i = 1; i < n / 2; i++) {
        int sum = *(arr + i) + *(arr + n - i - 1);
        if (sum > max_sum) {
            max_sum = sum;
        }
    }
    return max_sum;
}
template<typename T>
int min_sum(T arr, int n) {///(3.1.3) 4
    int min_sum = *arr + *(arr + n - 1);
    for (int i = 1; i < n / 2; i++) {
        int sum = *(arr+i) + *(arr + n - i - 1);
        if (sum < min_sum) {
            min_sum = sum;
        }
    }
    return min_sum;
}
template<typename T>
double find_of_products_of_pairs(T arr, T size,double sum) {///(3.1.3) 5
    for (; arr != size; arr++)
    {
        sum += *(arr) * *(arr  + 1);
    }
    return sum;
}
void print_unique_elements(std::vector<int> arr) {///(3.1.3) 6
    for (int i = 0; i < arr.size(); i++) {
        bool is_unique = true;
        for (int j = 0; j < arr.size(); j++) {
            if (i != j && arr[i] == arr[j]) {
                is_unique = false;
                break;
            }
        }
        if (is_unique) {
            std::cout << arr[i] << " ";
        }
    }
}
template<typename T>
void pos_nums_in_arrays(T arr, T arr2, int size_1, int size_2) {///(3.1.3) 11
    std::vector<double> mergedArr = mergeArrays(arr, arr2, size_1, size_2);
    std::vector<double> positiveValues;/// question !! это надо в параметры функции или пусть будет сдесь 
    for (auto item : mergedArr) {///todo заменить на функцию этот цыкл
        if (item > 0) {
            positiveValues.push_back(item);
        }
    }
    bubbleSort(positiveValues);
    for (auto value : positiveValues) {///todo заменить на функцию вывод масива
        std::cout << value << " ";
    }
}
template<typename T>
void pos_nums_in_arrays_v2(T arr, T arr2, int size_1, int size_2) {///(3.1.3) 12
    std::vector<double> mergedArr = mergeArrays(arr, arr2, size_1, size_2);/// question !! как сделать чтоб не в каждом цыкле писать эту строку а только пользоваться перменой 
    std::vector<double> positiveValues;/// question !! это надо в параметры функции или пусть будет сдесь 
    for (auto item : mergedArr) {///todo заменить на функцию этот цыкл
        if (item > 0) {
            positiveValues.push_back(item);
        }
    }
    bubbleSort(positiveValues);
    reverseArray(positiveValues);
}