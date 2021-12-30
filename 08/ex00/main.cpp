#include "easyfind.hpp"

int main()
{
	std::vector<int>	vect;
	std::string				input;

	for (int i = 0; i < 5; i++)
		vect.push_back(i + 1);

	std::cout << "Please enter a int value:" << std::endl;
	std::getline(std::cin, input, '\n');// gets input value

	std::vector<int>::const_iterator	iter;

	std::cout << "Search Result: ";
	try
	{
		iter = easyfind(vect, (input - 48))
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << *iter << std::endl;
	
	return (0);
}