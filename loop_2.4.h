#pragma once
#include <iostream>
#include "func.h"
template <typename T>
T count_numbers(T value, T count ) {///(2.4) 1 
    return template_with_return(100, 1000, 0, [&count,&value](int begin, int end) {
        if (begin % 10 + (begin / 10) % 10 + begin / 100 == value) {
            count++;
        }
        return count;
    });
}
template <typename T>///(2.4) 2  3
void count_ways(T value, T count,int number_1, int number_2, int number_3, int number_4) {
    for (int i = 0; i <= value / number_1; i++) {
        for (int j = 0; j <= (value - i * number_1) / number_2; j++) {
            for (int k = 0; k <= (value - i * number_1 - j * number_2) / number_3; k++) {
                for (int l = 0; l <= (value - i * number_1 - j * number_2 - k * number_3) / number_4; l++) {
                    int m = value - i * number_1 - j * number_2 - k * number_3 - l * number_4;
                    if (m >= 0 && m <= 4) {
                        count++;
                        std::cout << "Способ " << count << ": " << i << " купюр по 100, " << j << " купюр по 20, " << k << " купюр по 10, " << l << " купюр по 5, " << m << " купюр по 1" << std::endl;
                    }
                }
            }
        }
    }
}
template <typename T>
void four_digit_number_divisible_by_the_product_of_numbers(T value_first, T value_second) {///(2.4) 4 
    for (; value_first <= 99; value_first++) {
        for (T value_second = 10; value_second <= 99; value_second++) {///почемеу без int value_second = 10 она не работает ???????????????
            if ((value_first * 100 + value_second) % (value_first * value_second) == 0) {
                std::cout << value_first * 100 + value_second << std::endl;
            }
        }
    }
}
template <typename T>
void three_digit_numbers_in_decimal_notations_no_identical_digits(T value_i,T value_j,T value_k) {///(2.4) 5
    for (; value_i <= 9; value_i++) {
        for (T value_j = 0; value_j <= 9; value_j++) {
            if (value_j != value_i) {
                for (T value_k = 0; value_k <= 9; value_k++) {
                    if (value_k != value_i && value_k != value_j) {
                        std::cout << value_i << value_j << value_k << std::endl;
                    }
                }
            }
        }
    }
}
template<typename T>
void natural_numbers_smaller_value(T n, T m) {///(2.4) 6
    for_each(1, m, [&n](int value) {
        if (sum_of_digits(value) * sum_of_digits(value) == n) {
            std::cout << value << std::endl;
        }
        });
}
template <typename T>
void natural_numbers_not_divisible(T last) {///(2.4) 7
    for_each(1, last, [](int value) {
        if (!is_divisible(value)) {
            std::cout << value << std::endl;
        }
    });
}
void find_reversible_pairs() {///(2.4) 8
    for (int i = 10; i <= 99; i++) {
        for (int j = i; j <= 99; j++) {
            if (is_reversible(i, j,0)) {
                std::cout << i << " " << j << std::endl;
            }
        }
    }
}
template <typename T>
void increasing_numbers(T last) {///(2.4) 9
    for_each(1, last,[](int value){
        if (is_increasing(value)) {
            std::cout << value << std::endl;
        }
    });
}
template <typename T>
void decreasing_numbers(T last) {///(2.4) 10
    for_each(1, last, [](int value) {
        if (!is_increasing(value)) {
            std::cout << value << std::endl;
        }
    });
}
template <typename T>
void table_of_partitions_of_a_number_by_the_sum_of_three_terms(T last ) {///(2.4) 11
    for (int i = 1; i <= last / 3; i++) {
        for (int j = i; j <= (last - i) / 2; j++) {
            int k = last - i - j;
            if (k >= j) {
                std::cout << i << " " << j << " " << k << std::endl;
            }
        }
    }
}
template <typename T>
void find_numbers(T last) {///(2.4) 12
    for_each(1, last, [](int value) {
        int num = value;
        bool flag = true;
        while (num > 0) {
            int digit = num % 10;
            if (digit == 0 || value % digit != 0) {
                flag = false;
                break;
            }
            num /= 10;
        }
        if (flag) {
            std::cout << value << " ";
        }
    });
}