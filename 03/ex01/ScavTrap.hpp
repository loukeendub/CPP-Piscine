#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : ClapTrap
{
private:
    std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;
    
public:
    ScavTrap(/* args */);
    ~ScavTrap();

    void guardGate();
};

#endif