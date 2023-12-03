#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <deque>

template<typename T>

class	PmergeMe
{
	public:
		PmergeMe(void); //default constructor
		PmergeMe(int argc, char	**argv);
		PmergeMe(PmergeMe const & src); //copy constructor
		PmergeMe & operator=(PmergeMe const & rhs); //copy assignment operator
		~PmergeMe(void); //destructor

		void	Ford_Johnson_algorithm(T &lst);
		void	merge_insert(T &left, T &right, T &result);

		T	_cont;
	protected:
	private:
};

//template <typename T>
//std::ostream&   operator<<(std::ostream& o, PmergeMe<T> const & a);

#endif

/*
	size
	push_back
	clear
*/
