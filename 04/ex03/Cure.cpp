#include "Cure.hpp"

Cure::Cure()
{
	this->type = "cure";
}

Cure::~Cure()
{}

Cure::Cure(std::string const & type)
{
	this->type = type;
}

Cure::Cure(Cure const & copy)
{
	*this = copy;
}

Cure& Cure::operator = (const Cure& op)
{
	if (this == &op)
		return (*this);
	this->type = op.type;
	return (*this);
}

AMateria* Cure::clone() const
{
	AMateria *clone = new Cure(this->type);
	return (clone);
}

void Cure::use(ICharacter& target)
{
	std::cout << " heals " << target.getName() << " wounds  with a " << this->type << std::endl;
}