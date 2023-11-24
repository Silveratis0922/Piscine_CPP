#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>

template<typename T>

bool	easyfind(T first, int second)
{
	typename T::iterator	it;
	typename T::iterator	ite = first.end();

	for (it = first.begin(); it != ite; it++)
	{
		if (*it == second)
			return (true);
	}
	return (false);
}

#endif
