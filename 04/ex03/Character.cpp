#include "Character.hpp"

Character::Character():name("Anonymous")
{
	for(int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	std::cout << "A new Character joined: " << this->getName() << std::endl;
}

Character::Character(std::string const & name): name(name)
{
	std::string dio = "[ Super_User : lmarzano ]";

	if (name == "DIO")
		this->name = dio;
	for(int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	std::cout << "A new Character joined: " << this->getName() << std::endl;
}

Character::Character(Character const & copy)
{
	for(int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	*this = copy;
	std::cout << "The copy of a new Character joined: " << this->getName() << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
	std::cout << this->getName() << " disconnected." << std::endl;
}

Character& Character::operator = (const Character& op)
{
	if (this == &op)
		return (*this);
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (op.inventory[i])
			this->inventory[i] = op.inventory[i]->clone();
	}
	this->name = op.name;
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			std::cout << this->getName() << " equipped <" << this->inventory[i]->getType();
			std::cout << "> at inventory slot [ " << i << " ]" << std::endl;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->inventory[idx] != NULL)
	{
		std::cout << this->name;
		this->inventory[idx]->use(target);
	}
}