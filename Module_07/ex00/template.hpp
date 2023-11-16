#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

#include <iostream>

template<typename T>

void	swap(T &a, T &b)
{
	T	c;

	c = a;
	a = b;
	b = c;
}

template<typename T>

T const &	min(T const &a, T const &b)
{
	if (a == b)
		return (b);
	else if (a < b)
		return (a);
	else
		return (b);
}

template<typename T>

T const &	max(T const &a, T const &b)
{
	if (a == b)
		return (b);
	else if (a > b)
		return (a);
	else
		return (b);
}

#endif
