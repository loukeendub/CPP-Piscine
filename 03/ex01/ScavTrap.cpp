/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:35:14 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/15 17:35:15 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : gatekeeper(false), ClapTrap(name)
{
	setHP(100);
	setEP(50);
	setAD(20);

	std::cout << "ScavTrap " << getName() << " spawned in 1995 in Los Angeles, looking for John Connor." << std::endl;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << getName() << " was dropped inside a recipient of melting iron, along with all Cyberdyne Systems tech residues." << std::endl;
	return ;
}

void    ScavTrap::guardGate()
{
	gatekeeper = true;
	std::cout << "ScavTrap " << getName() << " has enterred in Gate Keeper mode" << std::endl;
}
void	ScavTrap::attack(std::string const& target)
{
	std::cout << "[ YOUR FOSTER PARENTS ARE DEAD. ]" << std::endl;
	std::cout << "ScavTrap " << getName() << " attacks " << target;
	std::cout << ", causing " << getAD << " points of damage!" << std::endl;
}
