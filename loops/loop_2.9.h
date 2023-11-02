#pragma once
#include <iostream>
void function_values_at_points_xi(double x0 ,double xn,double dx) {///(2.9) 12
    for (; x0 != xn; x0 += dx) {
        std::cout << "f(" << x0 << ") = " << cos_taylor(x0, 4) + sin_taylor(x0, 4) << std::endl;
        std::cout << "Built-in function value: " << cos(x0) + sin(x0) << std::endl;
    }
}
