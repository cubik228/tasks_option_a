#include <iostream>
#include "func.h"
#include <vector>
#include <cmath>
#include <algorithm>
template<typename Iterator>
int print_powers_of_numbers(Iterator first, Iterator last,int value, int count) {///(3.1.2) 1 2 3
    for (; first != last; first++) {
        if (std::fmod(std::log(*first) / std::log(value), 1) == 0) {
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
template <typename Iterator>
double is_sum_array(Iterator arr_first, Iterator arr_second, Iterator size_arr_first, Iterator size_arr_second, double sum) {///(3.1.2)  7
    for (; arr_second < size_arr_second; arr_second++) {
        if (*arr_second >= *size_arr_first) {
            return 0;
        }
        sum += arr_first[*arr_second];
    }
    return sum;
}
template <typename Iterotor>
double sum_of_different_indices(Iterotor arr_first, Iterotor arr_second, Iterotor size_arr_first, Iterotor size_arr_second, double sum,int count) {///(3.1.2)  8
    for (; arr_first < size_arr_first; arr_first++, count++) {
        bool is_index_present = false;
        for (;arr_second < size_arr_second; arr_second++) {
            if (count == *arr_second) {
                is_index_present = true;
                break;
            }
        }
        if (!is_index_present) {
            sum += *arr_first;
        }
    }
    return sum;
}
template <typename Iterotor>
int find_smallest(Iterotor arr_first, Iterotor arr_second, Iterotor size_arr_first, Iterotor size_arr_second, int smallest) {///(3.1.2)  9
    for (; arr_first < size_arr_first; arr_first++) {
        bool found = false;
        for (; arr_second < size_arr_second; arr_second++) {
            if (*arr_first == *arr_second) {
                found = true;
                break;
            }
        }
        if (!found && *arr_first < smallest) {
            smallest = *arr_first;
        }
    }
    return smallest;
}
template <typename Iterotor>
int find_largest(Iterotor arr_first, Iterotor arr_second, Iterotor size_arr_first, Iterotor size_arr_secondint,int largest) {///(3.1.2)  10
    for (;arr_first < size_arr_first; arr_first++) {
        for (; arr_second < size_arr_secondint; arr_second++) {
            if (*arr_first == *arr_second && *arr_first > largest) {
                largest = *arr_first;
                break;
            }
        }
    }
    return largest;
}
template <typename Iterotor>
int count_inversions(Iterotor first, Iterotor last,int inversions,int count,int result) {///(3.1.2)  11
    for (; first < last; first++, count++)
        for (; count + 1 < last; (count + 1)++)
            if (*first > *(first + (count + 1)))
                result++;
   return result;
}
