#pragma once
#include <iostream>
#include <cmath>
int find_the_first_natural_numbers(int start , int end,int count,int sum) {//(2.1)
		for (; start < end; start++) {
			int power = log(start) / log(5);
			if (pow(5, power) == start) {
				sum += start;
				start++;
			}
		}	
		return sum;
}