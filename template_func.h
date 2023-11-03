#pragma once
#include <iostream>
template<class Itertor, class UnaryOperation,typename T>
T template_with_return(Itertor first, Itertor last, T result, UnaryOperation func) {
	for (; first != last; ++first)
	{
		result = func(first, result);
	}
	return result;
}
template<class Iterator, class UnaryOperation>
void for_each(Iterator first, Iterator last, UnaryOperation up) {
	for (; first != last; ++first)
	{
		up(first);
	}
}
template< typename T, class Function>
void  task_for(T start, T end, int result, int help_value, Function func) {
	for (; start <= end; start++)
	{
		func(start, end, result);
	}
	
}
template<class Iterator, class Comporator>
Iterator search1(Iterator first, Iterator last, Comporator c) {
	Iterator result = first++;
	for (; first != last; ++first)
	{
		if (c(first, result))
		{
			result = first;
		}
	}
	return result;
}
template<class Iterator>
Iterator min_1(Iterator first, Iterator last) {
	return search1(first, last, [](Iterator a, Iterator b) { return *a < *b; });
}
template<class Iterator>
Iterator min_1_v2(Iterator first, Iterator last) {
	return search1(first, last, [](Iterator a, Iterator b) { return std::fabs(*a) < std::fabs(*b); });
}
template<class Iterator>
Iterator max_1(Iterator first, Iterator last) {
	return search1(first, last, [](Iterator a, Iterator b) { return *a > *b; });
}
template<class Iterator>
Iterator max_1_v2(Iterator first, Iterator last) {
	return search1(first, last, [](Iterator a, Iterator b) { return std::fabs(*a) > std::fabs(*b); });
}
template<class Iterator, class T>
T accumulate(Iterator first, Iterator last, T init) {
	for (; first != last; ++first)
	{
		init += *first;
	}
	return init;
}
template<class Iterator, class UnaryPredecate>
Iterator find_if(Iterator first, Iterator last, UnaryPredecate up) {
	for (; first != last; ++first)
	{
		if (up(first))
		{
			return first;
		}
	}
	return last;
}