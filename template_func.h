#pragma once
#include <iostream>
template<class Itertor, class UnaryOperation,typename T>
T template_with_return(Itertor first, Itertor last, T result, UnaryOperation func) {
	for (; first != last; ++first)
	{
		result = func(*first, result);
	}
	return result;
}
template<class Iterator, class UnaryOperation>
void for_each(Iterator first, Iterator last, UnaryOperation up) {
	for (; first != last; ++first)
	{
		up(*first);
	}
}
template< typename T, class Function>
void  task_for(T start, T end, int result, int help_value, Function func) {
	for (; start <= end; start++)
	{
		func(start, end, result);
	}
	
}