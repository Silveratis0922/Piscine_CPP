#include "easyfind.hpp"

int	main(void)
{
	std::vector<int>	test(10,10);

	if (!easyfind(test, 10))
		std::cout << "Error didnt found it" << std::endl;
	else
		std::cout << "Found it !" << std::endl;
	return (0);
}
