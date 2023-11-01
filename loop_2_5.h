#pragma once
#include <iostream>
template <class T>
void find_prime_numbers_not_exceeding_value(T begin, T value) {/// ( 2.5) 1 10 11
	for (;begin != value; ++begin)
	{
		if (is_prime(begin))
		{
			std::cout << begin << std::endl;
		}
	}
}
template <class T>
void get_all_prime_numbers_of_value(T begin, T value, T temp) {/// ( 2.5) 2
	for (; begin != value; ++begin)
	{
		if (is_prime(begin))
		{
			if (value % begin == 0)
			{
				std::cout << begin << std::endl;
			}
		}
	}
}
template<class T>
void get_simple_four_digit_numbers_which_sum_of_first_two_digits_equal_to_sum_of_last(T begin, T end) {/// ( 2.5) 3
	for (;begin != end; ++begin)
	{
		if (is_prime(begin) && (begin % 10 + ((begin / 10) % 10)) == ((begin / 100) % 10 + ((begin / 1000) % 10)))
		{
			std::cout << begin << std::endl;
		}
	}
}
template <class T>
T calculate_sum_of_numbers_whose_ordinal_numbers_are_prime_numbers(T begin, T end, int count, T sum) {/// ( 2.5) 4
	for (; begin != end; ++begin, ++count)
	{
		if (is_prime(count))
		{
			sum += begin;
		}
	}
	return sum;
}
template <class T>
T find_sum_of_prime_numbers(T begin, T end, T sum) {/// ( 2.5) 5
	for (; begin != end; ++begin)
	{
		if (is_prime(begin))
		{
			sum += begin;
		}
	}
	return sum;
}
template <class T>
void get_first_100_prime_numbers(T begin, T end, T sum, T count) {/// ( 2.5) 6 7 
	while (count < end) {
		if (is_prime(begin)) {
			std::cout << begin << " ";
			count++;
		}
		begin++;
	}
}
template<class T>
void find_all_numbers_that_are_twins(T begin) {/// ( 2.5) 8
	for (; begin != 2 * begin; ++begin)
	{
		if (is_prime(begin - 2))
		{
			std::cout << begin << " " << begin - 2 << std::endl;
		}
	}
}
template <class T>
void find_prime_numbers_whose_sum_of_digits_is_less_than_value(T begin, T end, T value) {/// ( 2.5) 9
	for (; begin != end; ++begin)
	{
		if (is_prime(begin) && sum_of_digits(begin) < value)
		{
			std::cout << begin << std::endl;
		}
	}
}
template <class T>
void find_super_prime_numbers(T begin, T end) {/// ( 2.5) 12
	for (;begin != end; ++begin)
	{
		if (is_prime(begin) && is_prime(reverse(begin)))
		{
			std::cout << begin << std::endl;
		}
	}
}