#pragma once
#include <iostream>
#include <string>
#include "func.h"
template <typename T>
void solution_of_mathematical_example(T begin, T begin_two, T end, T sum,T prod) {///(2.8) 10
    for (; begin != end; ++begin) {
        sum += begin;
        prod *= begin;
        for (; begin_two != begin; ++begin_two) {
            sum += begin_two * begin;
        }
        sum += 0.5 * sin(begin / (2.0 * 1.0));
    }
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Product: " << prod << std::endl;
}
void polynomial_value_for_given_value(double x0, double xm, double dx) {///(2.8.2) 12
    for (; x0 <= xm; x0 += dx) {
        std::cout << "f(" << x0 << ") = " << determinant_of_polynomial(x0) << std::endl;
    }
}
