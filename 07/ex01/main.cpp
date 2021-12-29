#include "iter.hpp"

static void	putNumber(int& i)
{
	std::cout << i << std::endl;
}

static void	putString(std::string& str)
{
	std::cout << str << std::endl;
}

static void	increment(int& i)
{
	i++;
}

int	main()
{
	int	array[] = {0, 1, 2, 3, 4};

	::iter(array, 5, putNumber);
	::iter(array, 5, increment);
	::iter(array, 5, putNumber);

	std::string	str[] = {"two", "forty"};
	
	::iter(str, 2, putString);
	::swap(str[0], str[1]);
	::iter(str, 2, putString);

	return (0);
}