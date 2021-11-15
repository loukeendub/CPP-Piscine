/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:27:41 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/15 17:32:09 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage  = 0;

	std::cout << std::endl << "[ I NEED YOUR CLOTHES, YOUR BOOTS AND YOUR MOTORBIKE! ]" << std::endl;
	std::cout << "ClapTrap " << _name << " spawned in 1984 in Los Angeles, looking for Sarah Connor." << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{

	std::cout << std::endl << "[ I'LL BE BACK! ]" << std::endl;
	std::cout << "ClapTrap " << _name << " was crashed with a hydraulic press." << std::endl;
	return ;
}

void	ClapTrap::attack(std::string const& target)
{
	std::cout << std::endl << "[ ASTA LA VISTA, BABY! ]" << std::endl;
	std::cout << "ClapTrap " << _name << " attacks " << target;
	std::cout << ", causing " << _attackDamage << " damage points!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << std::endl << "[ COME WITH ME IF YOU WANT TO LIVE! ]" << std::endl;
	if (this->_energyPoints == 0)
		std::cout << "ClapTrap " << _name << " has been killed in the attempt of killing Sarah Connor." << std::endl;
	else
		std::cout << "ClapTrap " << _name << " has been repaired." << std::endl;
	std::cout << "He has recovered " << amount << " damage points!" << std::endl;

	this->_energyPoints += amount;

	std::cout << _name << "'s total Energy Points are now " << _energyPoints << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << std::endl << "[ I KNOW NOW WHY YOU CRY, BUT IT'S SOMETHING I CAN NEVER DO ]" << std::endl;
	std::cout << "ClapTrap " << _name << " has been attacked! He gets " << amount << " damage points!" << std::endl;

	this->_energyPoints -= amount;
	if (this->_energyPoints <= 0)
	{
		this->_energyPoints = 0;
		std::cout << "ClapTrap " << _name << " got smashed." << std::endl;
	}
	std::cout << _name << "'s total Energy Points are now " << _energyPoints << std::endl;
}
