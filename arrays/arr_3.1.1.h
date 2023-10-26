#pragma once
#include <iostream>
#include "func.h"
#include <vector>
#include <cmath>
template <typename Iterator>
double sum_before_min(Iterator first, Iterator last, double sum, double min) {///(3.1.1)  1
    for (; first != last; first++) {
        if (*first == min) {
            break;
        }
        sum += *first;
    }
    return sum;
}
template <typename Iterator>
double sum_before_max_v1(Iterator first, Iterator last, double sum, double max) {///(3.1.1)  2
    for (; first != last; first++) {
        if (*first == max) {
            break;
        }
        sum += *first;
    }
    return sum;
}
template <typename Iterator>
double sum_between_min_max(Iterator first, Iterator last, double max, double min, double sum) {///(3.1.1)  3
    bool found_min = false;
    bool found_max = false;
    for (; first != last; first++) {
        if (*first == min) {
            found_min = true;
        }
        if (*first == max) {
            found_max = true;
            break;
        }
        if (found_min && !found_max) {
            sum += *first;
        }
    }
    return sum;
}
template <typename Iterator>
double sum_after_max(Iterator first, Iterator last, int count, double sum, int max_index) {///(3.1.1)  4
    int min_index = max_index + 1;
    for (;first != last; first++, count++) {
        if (*first < *(first + min_index)) {
            min_index = count + 1;
        }
        sum += *first;
    }
    for (; min_index < count; min_index++) {
        sum -= *(first - min_index);
    }
    return sum;
}
template <typename Iterator>
double sum_before_max_v2(Iterator first, Iterator last, int max_index, int count, double sum) {///(3.1.1)  5
    for (; first != last; ++first, ++count) {
        if (*first > *(first + max_index)) {
            max_index = count;
        }
    }
    for (; first != last; ++first, ++count) {
        if (count < max_index) {
            sum += *first;
        }
    }
    return sum;
}
template <typename Iterator>
double sum_after_max_v2(Iterator first, Iterator last, int max_index, int count, double sum) {///(3.1.1)  6
    for (; first != last; ++first, ++count) {
        if (*first > *(first + max_index)) {
            max_index = count;
        }
    }
    bool after_max = false;
    for (; first != last; ++first) {
        if (after_max) {
            sum += *first;
        }
        if (count == max_index) {
            after_max = true;
        }
        ++count;
    }
    return sum;
}
template <typename Iterator>
double sum_after_max_modul_max(Iterator first, Iterator last, int max_index, int count, double sum){ ///(3.1.1)  7
    for (; first != last; ++first, ++count) {
        if (std::abs(*first) > std::abs(*(first + max_index))) {
            max_index = count;
        }
    }
    bool after_max = false;
    for (; first != last; ++first) {
        if (after_max) {
            sum += *first;
        }
        if (count == max_index) {
            after_max = true;
        }
        ++count;
    }
    return sum;
}
template <typename Iterator>
int sum_after_max_modul_min(Iterator first, Iterator last, int max_index, int count, int sum) {///(3.1.1)  8
    for (; first != last; ++first, ++count) {
        if (std::abs(*first) > std::abs(*(first + max_index))) {
            max_index = count;
        }
    }
    for (; first < first + max_index; ++first) {
        sum += *first;
    }
    return sum;
}
template <typename Iterator>
double sum_before_min_abs(Iterator first, Iterator last, int min_abs, int count, int sum) {///(3.1.1)  9
    for (; first != last; ++first, ++count) {
        if (std::abs(*first) < std::abs(*(first + min_abs))) {
            min_abs = count;
        }
    }
    for (; first < first + min_abs; ++first) {
        sum += *first;
    }
    return sum;
}
template <typename Iterator>
double sum_between_min_max(Iterator first, Iterator last, int min_index, int max_index, double sum) {///(3.1.1)  10
    for (; first != last; ++first) {
        if (*first < min_index) {
            min_index = first;
        }
        if (*first > max_index) {
            max_index = first;
        }
    }
    if (min_index > max_index) {
        std::swap(min_index, max_index);
    }
    for (; min_index <= max_index; ++min_index) {
        sum += min_index;
    }
    return sum;
}
template <typename Iterator>
double sum_between_min_max_modul(Iterator first, Iterator last, double sum) {///(3.1.1)  11
    if (first == last) {
        return sum;
    }
    Iterator min_it = first;
    Iterator max_it = first;
    for (; first != last; ++first) {
        if (std::abs(*first) < std::abs(*min_it)) {
            min_it = *first;
        }
        if (std::abs(*first) > std::abs(*max_it)) {
            max_it = *first;
        }
    }
    if (min_it == max_it) {
        return sum;
    }
    if (min_it > max_it) {
        std::swap(min_it, max_it);
    }
    for (; min_it + 1 != max_it; ++(min_it + 1)) {
        sum += min_it;
    }
    return sum;
}
template <typename Iterator>
double sum_between_min_neg(Iterator first, Iterator last, double sum) {///(3.1.1)  12
    Iterator min_pos_it = last;
    Iterator max_neg_it = last;
    for (; first != last; ++first) {
        if (*first > 0 && (min_pos_it == last || *first < *min_pos_it)) {
            min_pos_it = *first;
        }
        if (*first < 0 && (max_neg_it == last || *first > *max_neg_it)) {
            max_neg_it = *first;
        }
    }
    if (min_pos_it == last || max_neg_it == last) {
        return 0;
    }
    Iterator start_it = std::min(min_pos_it, max_neg_it);
    Iterator end_it = std::max(min_pos_it, max_neg_it);
    for (; start_it != end_it; ++start_it) {
        sum += *start_it;
    }
    return sum;
}