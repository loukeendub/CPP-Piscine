#include "iter.hpp"

void	putNumber(int& i)
{
	std::cout << i << std::endl;
}

void	putString(std::string& str)
{
	std::cout << str << std::endl;
}

void	increment(int& i)
{
	i++;
}

int	main()
{
	int	array[] = {0, 1, 2, 3, 4};

	::iter(array, 5, putNumber());
	::iter(array, 5, increment());
	::iter(array, 5, putNumber());

	std::string	str[] = {"two", "forty"};
	
	::iter(array, 5, putString());
	::swap(str[0], str[1]);
	::iter(array, 5, putString());

	return (0);
}