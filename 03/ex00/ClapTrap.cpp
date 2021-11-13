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
	std::cout << "Claptrap " << _name << "attacks " << target;
	std::cout << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "Claptrap " << _name << "has been repaired.";
	std::cout << "He has recovered " << _energyPoints << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "Claptrap " << _name << "is attacked by " << target;
	std::cout << ", he gets " << _hitPoints << " points of damage!" << std::endl;
}

