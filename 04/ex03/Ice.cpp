#include "Ice.hpp"

Ice::Ice()
{
	this->type = "snowball";
}

Ice::~Ice()
{}

Ice::Ice(std::string const & type)
{
	this->type = type;
}

Ice::Ice(Ice const & copy)
{
	*this = copy;
}

Ice& Ice::operator = (const Ice& op)
{
	if (this == &op)
		return (*this);
	this->type = op.type;
	return (*this);
}

AMateria* Ice::clone() const
{
	AMateria *clone = new Ice(this->type);
	return (clone);
}

void Ice::use(ICharacter& target)
{
		std::cout << " casts a "<< this->type <<" against " << target.getName() << std::endl;
}