/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:36:30 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/16 15:02:58 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{}

DiamondTrap::DiamondTrap(std::string name)
:
ClapTrap(name + "_clap_name"),
ScavTrap(name),
FragTrap(name)
{
	_name = name;
	
	setHP(FragTrap::getHP());
	setEP(ScavTrap::getEP());
	setAD(FragTrap::getAD());

	std::cout << std::endl << "[ GENISYS IS SKYNET ]" << std::endl;
	std::cout << "DiamondTrap " << _name << " spawned in 2017 in Los Angeles." << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
	*this = copy;
	return ;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << std::endl << "[ YOU DESTROYED AN ARMY OF SLAVES. I AM NO SLAVE. I HAVE COME A LONG WAY TO STOP YOU. ]" << std::endl;
	std::cout << "DiamondTrap " << _name << " has been destroyed... Maybe... Or maybe not..." << std::endl;
	return ;
}

void    DiamondTrap::whoAmI()
{
	std::cout << std::endl << "[ I AM SKYNET ]" << std::endl;
	std::cout << "DiamondTrap announces himself :" << std::endl;
	std::cout << "<< I AM " << _name << " >>" << std::endl;
	std::cout << "<< My Granfather was " << ClapTrap::getName() << "	 the ClapTrap>>" << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}
