#pragma once
#include <iostream>
#include "func.h"
template<class T>
void find_powers_of_number_to_end_of_range(T begin, T end, T value) {/// (2.6) 1 2
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
void training_n_fact_using_the_int_type(T begin, T end) {/// (2.6) 3
	for (; begin != end; ++begin)
	{
		if (Fact(begin) > end)
		{
			break;
		}
		std::cout << Fact(begin) << std::endl;
	}
}