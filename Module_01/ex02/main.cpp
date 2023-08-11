#include <string>
#include <iostream>

int	main(void)
{
	std::string 	brain = "HI THIS IS BRAIN";
	std::string*	brain_ptr = &brain;
	std::string&	brain_ref = brain;


	std::cout << "String adress : " << &brain << std::endl;
	std::cout << "PTR    adress : " << brain_ptr << std::endl;
	std::cout << "REF    adress : " << &brain_ref << std::endl;

	std::cout << std::endl;
	brain += " OK !";
	std::cout << "String value : " << brain << std::endl;
	std::cout << "PTR    value : " << *brain_ptr << std::endl;
	std::cout << "REF    value : " << brain_ref << std::endl;
	return (0);
}
