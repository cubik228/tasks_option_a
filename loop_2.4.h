#pragma once
#include <iostream>
#include "func.h"
template <typename T>
T count_numbers(T start, T end, T value, T count) {///(2.4) 1 
    for (; start != end; start++)
    {
        if (start % 10 + (start / 10) % 10 + start / 100 == value) {
            count++;
        }
    }
    return count;
}
template <typename T>///(2.4) 3
void count_ways(T value, T& count, int number_1, int number_2, int number_3, int number_4, int number_5, int number_6) {
    for (int i = 0; i <= value / number_1; i++) {
        for (int j = 0; j <= (value - i * number_1) / number_2; j++) {
            for (int k = 0; k <= (value - i * number_1 - j * number_2) / number_3; k++) {
                for (int l = 0; l <= (value - i * number_1 - j * number_2 - k * number_3) / number_4; l++) {
                    for (int m = 0; m <= (value - i * number_1 - j * number_2 - k * number_3 - l * number_4) / number_5; m++) {
                        int n = value - i * number_1 - j * number_2 - k * number_3 - l * number_4 - m * number_5;
                        if (n >= 0 && n <= 1) {
                            count++;
                            std::cout << "Способ " << count << ": " << i << " монет по " << number_1 << " копеек, " << j << " монет по " << number_2 << " копеек, " << k << " монет по " << number_3 << " копеек, " << l << " монет по " << number_4 << " копеек, " << m << " монет по " << number_5 << " копеек и " << n << " монет по " << number_6 << " копеек" << std::endl;
                        }
                    }
                }
            }
        }
    }
}

template <typename T>
void four_digit_number_divisible_by_the_product_of_numbers(T value_first, T value_second,T end,T value_second_1) {///(2.4) 4 
    for (; value_first != end; value_first++)
    {
        for (value_second = value_second_1; value_second <= 99; value_second++) {
            if ((value_first * 100 + value_second) % (value_first * value_second) == 0) {
                std::cout << value_first << " " << value_second << " ";
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
void natural_numbers_smaller_value( T start, T number, T end, int degree) {///(2.4) 6
        for (; start != end; start++)
        {
            if (std::pow(sum_of_digits(start), degree) == number) {
                std::cout << start << std::endl;
            }
        }
}
template <typename T>
void natural_numbers_not_divisible(T start,T last) {///(2.4) 7
    for (; start != last; start++)
    {
        if (!is_divisible(start, 0)) {
            std::cout << start << std::endl;
        }
    }
}
template <typename T>
void find_reversible_pairs(T start,T start_2,T last) {///(2.4) 8
    for (; start <= last; ++start)
        for (int start_2 = 10; start_2 <= last; ++start_2)
            if (start * start_2 == (start % 10 * 10 + start / 10) * (start_2 % 10 * 10 + start_2 / 10))
                std::cout << start << " " << start_2 << std::endl;
}
template <typename T>
void increasing_numbers(T start ,T last) {///(2.4) 9
    for (; start != last; start++)
    {
        if (is_increasing(start)) {
            std::cout << start << std::endl;
        }
    }

}
template <typename T>
void decreasing_numbers(T start,T last) {///(2.4) 10
    for (; start != last; start++)
    {
        if (is_not_increasing(start)) {
            std::cout << start << std::endl;
        }
    }
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
void find_numbers(T start ,T last) {///(2.4) 12
    for (; start != last; start++)
    {
        if (is_divisible(start, 0)) {
            std::cout << start << std::endl;
        }
    }
}