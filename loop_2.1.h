#pragma once
#include <iostream>
#include <cmath>
template<typename T>
T find_the_first_natural_numbers(T start , T end,T count,T sum) {///(2.1) 1 
		return template_with_return(start, end, 0, [&sum](int begin, int end) {
			T power = log(begin) / log(5);
			if (pow(5, power) == begin) {
				sum += begin;
				begin++;
			}
			return sum;
		});
}
template<class T>
T sum_of_vaues_that_divisible_by_value(T begin, T end, T sum, T value) {///(2.1) 2 6 7 8
	return template_with_return(begin, end, 0, [&sum, &value](int begin, int end) {
		if (begin % value == 0)
			sum += begin;
		return sum;
	});
}
template<class T> 
T find_sum_of_number_are_powers_5(T begin, T end, T sum, T value, T count, T value1) {///(2.1)  5
	return template_with_return(begin,end,0,[&count,&sum,&value1,&value](int begin,int end){
		value = std::pow(value1, count);
		if (begin == value) {
			count++;
			sum += begin;
		}
		return sum;
	});
}
template<class T>
T sum_of_vaues_that_divisible_by_two_values(T begin, T end, T sum, T value, T value1) {/// (2.1) 9 10 11 12
	return template_with_return(begin, end, 0, [ &sum,& value1, &value](int begin, int end) {
		if (begin % value == 0 && begin % value1 == 0) {
			sum += begin;
		}
		return sum;
	});
}