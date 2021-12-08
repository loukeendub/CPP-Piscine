#include "Character.hpp"

Character::Character() : name("Anonymous")
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(std::string const & name) : name(name)
{
	for (int i; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(const Character& copy)
{
	for (int i; i < 4; i++)
		this->inventory[i] = NULL;
	*this = copy;
}

Character::~Character()
{
	for (int i; i < 4; i++)
	{
		if (this->inventory[i])
			delete inventory[i];
	}
}

Character&	Character::operator = (const Character& op)
{
	if (this == &op)
		return (*this);
	for (int i; i < 4; i++)
	{
		if (this->inventory[i])
			delete inventory[i];
	}
	for (int i; i < 4; i++)
	{
		if (op.inventory[i])
			this->inventory[i] = op.inventory[i]->clone();
	}
	this->name = op.name;
	return (*this);
}

std::string const & Character::getName()	const
{
	return (this->name);
}

void	Character::equip(AMateria* m)
{
	int	stored = 0;
	int	i = 0;
	while (!stored || i < 4)
	{
		if (!(this->inventory[i]))
		{
			this->inventory[i] = m;
			stored = 1;
		}
		i++;
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->inventory[idx] != NULL)
	{
		std::cout << this->name;
		this->inventory[idx]->use(target);
	}
}