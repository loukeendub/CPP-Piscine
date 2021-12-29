#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
//# include <string>

template <class myType>
void	swap(myType& a, myType& b)
{
	myType	c = a;
	a = b;
	b = c;
}

template <class myType>
myType	min(myType& a, myType& b)
{
	if (a < b)
		return (a);
	return (b);	
}

template <class myType>
myType	max(myType& a, myType& b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif