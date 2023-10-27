#pragma once
#include <vector>
#include "func.h"
void energy_dividers(int start,int end,int count) {///(2.3) 1 
	task_for(start, end, count, 1, [&count](int value, int v, int b) {
		count++;
		if (value % count == 0) {
			std::cout << count << " ";
		};
	});
}
void common_divisors(int first_value, int second_value , int count) {///(2.3) 2
	task_for(first_value, second_value, count, 1, [&count](int first_value, int second_value, int b) {
		count++;
		if (first_value % count == 0 && second_value % count == 0) {
			std::cout << count << " ";
		};
	});
}
void common_multiples(int first_value, int second_value ,int count) {///(2.3) 3
	task_for(first_value, second_value, count, 1, [&count](int first_value, int second_value, int b) {
		count++;
		if ((count % first_value == 0) && (count % second_value == 0)) {
			std::cout << count << " ";
		};
	});
}
int lcm(int first_value, int second_value) {///(2.3) 5
	return first_value * second_value / gcd(first_value, second_value);
}
int gcd_upgrade(int a, int b, int c) {///(2.3) 6
	return gcd(gcd(a, b), c);
}
template<typename T>
T sum_of_common_divisors(T first_value, T second_value, T sum, int count) {
	for (; count <= std::min(first_value, second_value); ++count) {
		if (first_value % count == 0 && second_value % count == 0) {
			sum += count;
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
void get_coprimes(int first_value, int second_value,int count) {///(2.3) 9
	for (; count < second_value; ++count) {
		if (is_coprime(first_value, count)) {
			std::cout << count << " ";
		}
	}
}
int max_sum_of_divisors_v2(int first_value, int second_value, int max_num, int max_sum, int count) {///(2.3) 10
	for (count = first_value + 1; count <= second_value; ++count) {
		if (sum_of_divisors(count) > sum_of_divisors(first_value)) {
			max_num = count;
			max_sum = sum_of_divisors(count);
		}
	}
	return max_num;
}
void get_perfect_numbers(int value,int sum,int count) {///(2.3) 11
	for (; count < value; ++count) {
		if (sum_of_divisors(count) == count) {
			std::cout << count << " ";
		}
	}
}
void get_friendly_numbers(int n, int m) {///(2.3) 12
	for (; n <= m; ++n) {
		if (sum_of_divisors(n) > n) {
			if (sum_of_divisors(sum_of_divisors(n)) == n) {
				std::cout << "(" << n << ", " << sum_of_divisors(n) << ") ";
			}
		}
	}
}