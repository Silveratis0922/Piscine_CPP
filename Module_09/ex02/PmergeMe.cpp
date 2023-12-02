#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void)
{
	std::cout << "PmergeMe Default constructor called" << std::endl;
	return ;
}

PmergeMe::PmergeMe(int argc, char **argv)
{
	std::cout << "PmergeMe Parametric constructor called" << std::endl;
	for (int i = 1; i < argc; i++)
	{
		std::string str = argv[i];
		//_cont = init_cont(_cont, atoi(str.c_str());
		_cont.push_back(atoi(str.c_str()));
	}
	return ;
}

PmergeMe::PmergeMe(PmergeMe const & src)
{
	std::cout << "PmergeMe Copy constructor called" << std::endl;
	*this = src;
	return ;
}

PmergeMe & PmergeMe::operator=(PmergeMe const & rhs)
{
	std::cout << "PmergeMe Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{

	}
	return (*this);
}

PmergeMe::~PmergeMe(void)
{
	std::cout << "PmergeMe Destructor called" << std::endl;
	return ;
}

void	PmergeMe::Ford_Johnson_algorithm(std::vector<int> &lst)
{
	if (lst.size() <= 1)
		return ;

	int					half = lst.size() / 2;
	std::vector<int>	left(lst.begin(), lst.begin() + half);
	std::vector<int>	right(lst.begin() + half, lst.end());

	Ford_Johnson_algorithm(left);
	Ford_Johnson_algorithm(right);
	lst.clear();
	merge_insert(left, right, lst);
}

void	PmergeMe::merge_insert(std::vector<int> &left, std::vector<int> &right, std::vector<int> &result)
{
	size_t	i = 0;
	size_t	j = 0;

	while (i < left.size() && j < right.size())
	{
		if (left[i] < right[j])
		{
			result.push_back(left[i]);
			i++;
		}
		else
		{
			result.push_back(right[j]);
			j++;
		}
	}
	while (i < left.size())
	{
		result.push_back(left[i]);
		i++;
	}
	while (j < right.size())
	{
		result.push_back(right[j]);
		j++;
	}
}

std::vector<int>	PmergeMe::getCont(void) const
{
	return (this->_cont);
}

void	PmergeMe::print_before(std::vector<int> cont)
{
	std::vector<int>::iterator	it;

	std::cout << "Before : ";
	for (it = cont.begin(); it != cont.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	Ford_Johnson_algorithm(cont);
}

void	PmergeMe::print_after(std::vector<int> cont)
{
	std::vector<int>::iterator	it;

	std::cout << "After : ";
	for (it = cont.begin(); it != cont.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

std::vector<int>	init_vec(std::vector<int>	&vec, int nbr)
{
	vec.push_back(nbr);
	return (vec);
}

std::ostream&	operator<<(std::ostream& o, PmergeMe const & a)
{
	std::vector<int>	print = a._cont;
	std::vector<int>::iterator	it;

	for (it = print.begin(); it != print.end(); it++)
	{
		o << *it << " ";
	}
	return (o);
}
