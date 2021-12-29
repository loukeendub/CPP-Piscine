#include "iter.hpp"

void	putNumber(int i)
{
	std::cout << i << std::endl;
}

void	putString(std::string str)
{
	std::cout << str << std::endl;
}

void	increment(int i)
{
	i++;
}

int	main()
{
	int	array[] = {0, 1, 2, 3, 4};

	::iter(arr, 5, putNumber());
	::iter(arr, 5, increment());
	::iter(arr, 5, putNumber());

	std::string	str[] = {"two", "forty"}
	
	::iter(arr, 5, putString());
	::swap(str[0], str[1]);
	::iter(arr, 5, putString());

	return (0);
}