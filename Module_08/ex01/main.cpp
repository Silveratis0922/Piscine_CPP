#include "Span.hpp"

/*#define SIZE 5

int main(void)
{
	Span sp = Span(SIZE);
	srand((unsigned) time(NULL));
	try
	{
		for (int i = 0; i < SIZE; i++)
			sp.addNumber(rand() % 365);
		std::cout << sp;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}*/

/*int main()
{
	std::vector<int> test;
	
	test.push_back(6);
	test.push_back(3);
	test.push_back(17);
	test.push_back(9);
	test.push_back(11);
	
	Span sp = Span(5);
	try
	{
		sp.addNumber(test.begin(), test.end());
		std::cout << sp;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}*/

int main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}
