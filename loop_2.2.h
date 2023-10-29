#pragma once
#include <iostream>
template<class T>
T calculation_of_conditional_function_at_points(T begin, T end, T step, T value, T variable, T result) {///(2.1) 12
	for (; begin != end; begin += step)
	{
		if (variable < 2.8)
		{
			result = (value - 0.39) / (exp(begin) + cos(begin));
		}
		if (variable >= 2.8 && variable < 6)
		{
			result = (value - 0.39) / (begin + 1);
		}
		if (variable >= 6)
		{
			result = exp(begin) + sin(begin);
		}
		std::cout << begin << "    |    " << result << std::endl;
	}
	return 0;
}