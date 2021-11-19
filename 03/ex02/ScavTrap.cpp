/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:35:14 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/16 13:47:24 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name), gatekeeper(false)
{
	setHP(100);
	setEP(50);
	setAD(20);

	std::cout << std::endl << "[ SAY... THAT'S A NICE BIKE... ]" << std::endl;
	std::cout << "ScavTrap " << getName() << " spawned in 1995 in Los Angeles, looking for John Connor." << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	*this = copy;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << std::endl << "[ WOLFIE IS FINE, HONEY, WOLFIE IS JUST FINE. WHERE ARE YOU? ]" << std::endl;
	std::cout << "ScavTrap " << getName() << " was dropped inside a recipient of melting iron, along with all Cyberdyne Systems tech residues." << std::endl;
	return ;
}



void    ScavTrap::guardGate()
{
	gatekeeper = true;
	std::cout << std::endl << "[ HAVE YOU SEEN THIS BOY?  ]" << std::endl;
	std::cout << "ScavTrap " << getName() << " has entered in Gate Keeper mode" << std::endl;
}
void	ScavTrap::attack(std::string const& target)
{
	std::cout << std::endl << "[ YOUR FOSTER PARENTS ARE DEAD. ]" << std::endl;
	std::cout << "ScavTrap " << getName() << " attacks " << target;
	std::cout << ", causing " << getAD() << " points of damage!" << std::endl;
}
