#pragma once
#include <vector>
#include <algorithm>
#include "func.h"
template<typename T>
void energy_dividers(T start,T end,T value) {///(2.3) 1 
	task_for(start, end, value, 1, [](T start, T end, T value) {
		if (value % start == 0 ) {
			std::cout << start << " ";
		}
	});
}
template<typename T>
void common_divisors(T first_value, T second_value , T count) {///(2.3) 2
	task_for(first_value, second_value, count, 1, [&count](T first_value, T second_value, T b) {
		count++;
		if ((first_value % count == 0) && (second_value % count == 0)) {
			std::cout << count << " ";
		};
	});
}
template<typename T>
void common_multiples(T first_value, T second_value , T count) {///(2.3) 3
	task_for(first_value, second_value, count, 1, [&count](T first_value, T second_value, T b) {
		count++;
		if ((count % first_value == 0) && (count % second_value == 0)) {
			std::cout << count << " ";
		};
	});
}
// func gcd task 4 
template<typename T>
T lcm(T first_value, T second_value) {///(2.3) 5
	return first_value * second_value / gcd(first_value, second_value);
}
template<typename T>
T gcd_upgrade(T a, T b, T c) {///(2.3) 6
	return gcd(gcd(a, b), c);
}
template<typename T>///(2.3) 7
T sum_of_common_divisors(T first_value, T second_value, T sum, int count) {
	for (; count <= std::min(first_value, second_value); ++count) {
		if (first_value % count == 0 && second_value % count == 0) {
			sum += count;
		}
	}
	return sum;
}
template <class T>
T max_sum_of_divisors(T first_value, T second_value,T max_num) {///(2.3) 8
	for (; first_value < second_value; ++first_value) {
		if (sum_of_divisors(first_value) > sum_of_divisors(second_value)) {
			max_num = first_value;
		}
	}
	return max_num;
}
template<typename T>
void get_coprimes(T first_value, T second_value, int count) {///(2.3) 9
	for (; count < second_value; ++count) {
		if (is_coprime(first_value, count)) {
			std::cout << count << " ";
		}
	}
}
template<typename T>
T max_sum_of_divisors_v2(T first_value, T second_value, T max_num, T max_sum, int count) {///(2.3) 10
	for (; first_value < second_value; ++first_value) {
		if (count_division(1,first_value, second_value,0) > count_division(second_value)) {
				max_num = first_value;
		}
	}
	return max_num;
}
template<typename T>
void get_perfect_numbers(T value,T sum,int count) {///(2.3) 11
	for (; count < value; ++count) {
		if (sum_of_divisors(count) == count) {
			std::cout << count << " ";
		}
	}
}
template<typename T>
void get_friendly_numbers(T first, T second) {///(2.3) 12
	for (; first <= second; ++first) {
		if (sum_of_divisors(first) > first) {
			if (sum_of_divisors(sum_of_divisors(first)) == first) {
				std::cout << "(" << first << ", " << sum_of_divisors(first) << ") ";
			}
		}
	}
}