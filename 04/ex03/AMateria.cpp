#include "AMateria.hpp"

AMateria::AMateria()
{}

AMateria::~AMateria()
{}

AMateria::AMateria(const AMateria& copy)
{
	*this = copy;
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria& AMateria::operator = (const AMateria& origin)
{
	if (this == &origin)
		return (*this);
	this->type = origin.type;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter&)
{}