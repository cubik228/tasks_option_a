#pragma once
#include <iostream>

template <typename T>
T completion_sequence(T begin,T value, T sum) {/// (2.7) 1
	for (; begin!= value; begin++)
	{
		sum += pow(begin, begin);
	}
	return sum;
}
template <typename T>
T calculateProduct(T begin, T end,T product,T index,T sum) {/// (2.7) 2
    for (; begin != end; begin += 2) {
        for (int j = 0; j < index; j++) {
            int value;
            std::cout << "¬ведите x" << begin + j << ": ";
            std::cin >> value;
            sum += value;
        }
        product *= sum;
        index++;
    }
    return product;
}
template <typename T>
T calculateProduct_product_start( T end,T product,T index) {/// (2.7) 8
    for (int i = 1; i <= end; i += 6) {
        //int end = std::min(i + 5, end);
        product = calculateProduct_product
        (i, std::min(i + 5, end), product, index, 0);
    }
    return product;
}