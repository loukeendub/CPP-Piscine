#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;

	std::cout << "ClapTrap " << _name << "spawned." << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << "left." << std::endl;
}

void	ClapTrap::attack(std::string const& target)
{
	std::cout << "ClapTrap " << _name << "attacks " << target;
	std::cout << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints == 0)
		std::cout << "ClapTrap " << _name << "has been resurrected from the dead.";
	else
		std::cout << "ClapTrap " << _name << "has been repaired.";
	std::cout << "He has recovered " << amount << " points of damage!" << std::endl;

	this->_energyPoints += amount;

	std::cout << _name << "'s total Energy Points are now " << _energyPoints << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " has been attacked! He gets " << amount << " points of damage!" << std::endl;

	this->_energyPoints -= amount;
	if (this->_energyPoints <= 0)
	{
		this->_energyPoints = 0;
		std::cout << "ClapTrap " << _name << " is dead." << std::endl;
	}
	std::cout << _name << "'s total Energy Points are now " << _energyPoints << std::endl;
}
