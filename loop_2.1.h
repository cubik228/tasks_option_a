#pragma once
#include <iostream>
#include <cmath>
template<typename T>
T find_the_first_natural_numbers(T start , T end,T count,T sum) {///(2.1) 1 
		for (; start != end; start++)
		{
			if (pow(5, log(start) / log(5)) == start) {
				sum += start;
			}
		}
		return sum;
}
template<class T>
T sum_of_vaues_that_divisible_by_value(T begin, T end, T sum, T value) {///(2.1) 2 6 7 8
	for (; begin != end; begin++)
	{
		if (begin % value == 0)
			sum += begin;
	}
	return sum;
}
template<class T> 
T find_sum_of_number_are_powers_5(T begin, T end, T sum, T value, T count, T value1) {///(2.1)  5
	for (; begin != end; begin++)
	{
		if (begin == std::pow(value1, count)) {
			sum += begin;
		}
	}
	return sum;
}
template<class T>
T sum_of_vaues_that_divisible_by_two_values(T begin, T end, T sum, T value, T value1) {/// (2.1) 9 10 11 12
	for (; begin != end; begin++)
	{
		if (begin % value == 0 && begin % value1 == 0) {
			sum += begin;
		}
	}
	return sum;
}