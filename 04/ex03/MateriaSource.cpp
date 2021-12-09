#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->storage[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->storage[i])
			delete this->storage[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	for (int i = 0; i < 4; i++)
		this->storage[i] = NULL;
	*this = copy;
}

MateriaSource&	MateriaSource::operator = (const MateriaSource& op)
{
	if (this == op)
		return (*this);
	for (int i = 0; i < 4; i++)
	{
		if (this->storage[i])
			delete this->storage[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (op.storage[i])
			this->storage[i] = op.storage[i]->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->storage[i])
		{
			this->storage[i] = m->clone();
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->storage[i])
			return (NULL);
		if (this->storage[i].getType() == type)
			return (this->storage[i]->clone());
	}
	return (NULL);
}