#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

class	PmergeMe
{
	public:
		PmergeMe(void); //default constructor
		PmergeMe(int argc, char	**argv);
		PmergeMe(PmergeMe const & src); //copy constructor
		PmergeMe & operator=(PmergeMe const & rhs); //copy assignment operator
		~PmergeMe(void); //destructor

		void	print_before(std::vector<int> cont);
		void	print_after(std::vector<int> cont);
		void	Ford_Johnson_algorithm(std::vector<int> &lst);
		void	merge_insert(std::vector<int> &left, std::vector<int> &right, std::vector<int> &result);
		std::vector<int>	getCont(void) const;

		std::vector<int>	_cont;
	protected:
	private:
};

std::vector<int>		init_vec(std::vector<int> &vec, int nbr);
std::ostream&   operator<<(std::ostream& o, PmergeMe const & a);

#endif

/*
	size
	push_back
	clear
*/
