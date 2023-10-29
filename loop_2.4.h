#pragma once
#include <iostream>
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
void four_digit_number_divisible_by_the_product_of_numbers(int value_first, int value_second) {
    for (; value_first <= 99; value_first++) {
        for (int value_second = 10; value_second <= 99; value_second++) {///почемеу без int value_second = 10 она не работает ???????????????
            if ((value_first * 100 + value_second) % (value_first * value_second) == 0) {
                std::cout << value_first * 100 + value_second << std::endl;
            }
        }
    }
}
