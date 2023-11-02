#pragma once
#include <iostream>
#include "func.h"
template<class T>
void find_powers_of_number_to_end_of_range(T begin, T end, T value) {/// (2.6) 1 2 7 8 
	for (; begin != end; ++begin)
	{
		if (std::pow(value, begin) > end)
		{
			break;
		}
		std::cout << std::pow(value, begin) << std::endl;
	}
}
template<class T>
void training_n_fact_using_the_int_type(T begin, T end) {/// (2.6) 3 9 
	for (; begin != end; ++begin)
	{
		if (Fact(begin) > end)
		{
			break;
		}
		std::cout << Fact(begin) << std::endl;
	}
}
template<class T>
T determine_number_of_maximum_fib_number(T begin, T end, T count) {/// (2.6) 4 10
	for (; begin != end; ++begin)
	{
		if (is_fib(begin, 1, 1, 1, 1))
		{
			count++;
		}
	}
	return count;
}
template<class T>
void find_maximum_value_of_double_factorial_in_range(T begin, T end) {/// (2.6) 5 6 11 12
	for (;double_fact(begin, begin, 1) != end; ++begin)
	{
		std::cout << double_fact(begin, begin, 1) << std::endl;
	}
}