#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <cstring>

struct Data
{
	std::string	str;
	int			num;
};

uintptr_t*	serialize();
Data*	deserialize(uintptr_t* raw);

#endif