#pragma once
template<class T, class UnaryOperation>
T template_with_return(T start, T end, T result, UnaryOperation func) {
	for (; start <= end; ++start)
	{
		result = func(result, start);
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