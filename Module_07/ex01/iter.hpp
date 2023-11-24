#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>

void	iter(T *adrs, int length, void (*f)(T))
{
	for (int i = 0; i < length; i++)
	{
		f(adrs[i]);
	}
}

template<typename T>

void	iter(T	*adrs, int length, void (*f)(T const &))
{
	for (int i = 0; i < length; i++)
	{
		f(adrs[i]);
	}
}

template<typename T>

void	my_print(T const &content)
{
	std::cout << content << std::endl;
}

#endif
