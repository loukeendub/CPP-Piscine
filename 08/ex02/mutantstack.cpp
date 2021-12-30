#include "mutantstack.hpp"

MutantStack::MutantStack() :
std::stack<T>()
{}

MutantStack::MutantStack(const MutantStack& copy)
{
	*this = copy;
}

MutantStack::~MutantStack()
{}

MutantStack&	MutantStack::operator = (const MutantStack& op)
{
	if (this = &op)
		return (*this);
	this->c = copy.c;
	return (*this);
}

iterator	MutantStack::begin()
{
	return (this->c.begin());
}

iterator	MutantStack::end()
{
	return (this->c.end());
}

const_iterator	MutantStack::begin()
{
	return (this->c.begin());
}

const_iterator	MutantStack::end()
{
	return (this->c.end());
}
