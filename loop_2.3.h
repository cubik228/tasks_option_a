#pragma once
#include <vector>
#include "func.h"
template<class Iterator, class T>
T find(Iterator first, Iterator last, T value) {
	for (; first != last; ++first)
	{
		if (*first == value) {
			return first;
		}
	}
	return last;
}
void energy_dividers(int value) {///(2.3) 1 
	for (int i = 1; i <= value; i++)
	{
		if (value % i == 0) {
			std::cout << i<<" ";
		}
	}
}
void common_divisors(int first_value, int second_value) {///(2.3) 2
	for (int i = 1; i <= std::min(first_value, second_value); ++i) {
		if (first_value % i == 0 && second_value % i == 0) {
			std::cout << i << " ";
		}
	}
}
void common_multiples(int first_value, int second_value) {///(2.3) 3
	for (int i = 1; i <= first_value * second_value; ++i) {
		if ((i % first_value == 0) && (i % second_value == 0)) {
			std::cout << i << " ";
		}
	}
}

int lcm(int first_value, int second_value) {///(2.3) 5
	return first_value * second_value / gcd(first_value, second_value);
}
int gcd_upgrade(int a, int b, int c) {///(2.3) 6
	return gcd(gcd(a, b), c);
}
template<typename T>
T sum_of_common_divisors(T first_value, T second_value,T sum) {///(2.3) 7
	for (int i = 1; i <= std::min(first_value, second_value); ++i) {
		if (first_value % i == 0 && second_value % i == 0) {
			sum += i;
		}
	}
	return sum;
}
int max_sum_of_divisors(int first_value, int second_value) {///(2.3) 8
	int max_num = std::max(first_value, second_value);
	int max_sum = sum_of_divisors(first_value);
	int current_sum = sum_of_divisors(first_value++);
	for (first_value++,second_value++; first_value < second_value; ++first_value) {
		current_sum = sum_of_divisors(first_value);
		if (current_sum > max_sum) {
			max_num = first_value;
			max_sum = current_sum;
		}
	}
	return max_num;
}
void get_coprimes(int first_value, int second_value) {
	for (int i = 1; i < second_value; ++i) {
		if (is_coprime(first_value, i)) {
			std::cout << i << " ";
		}
	}
}
int max_sum_of_divisors_v2(int first_value, int second_value) {///(2.3) 10
	int max_num = std::max(first_value, second_value);
	int max_sum = sum_of_divisors(first_value);
	for (int i = first_value + 1; i <= second_value; ++i) {
		int current_sum = sum_of_divisors(i);
		if (current_sum > max_sum) {
			max_num = i;
			max_sum = current_sum;
		}
	}
	return max_num;
}

void get_perfect_numbers(int value) {///(2.3) 11
	for (int i = 1; i < value; ++i) {
		int sum = sum_of_divisors(i);
		if (sum == i) {
			std::cout << i << " ";
		}
	}
}

void get_friendly_numbers(int n, int m) {///(2.3) 12
	for (int i = n; i <= m; ++i) {
		int sum1 = sum_of_divisors(i);
		if (sum1 > i) {
			int sum2 = sum_of_divisors(sum1);
			if (sum2 == i) {
				std::cout << "(" << i << ", " << sum1 << ") ";
			}
		}
	}
}