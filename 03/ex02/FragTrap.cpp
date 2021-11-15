/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 18:49:31 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/15 19:18:44 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap()
{}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    setHP(100);
	setEP(100);
	setAD(30);

	std::cout << std::endl << "[ I LIKE YOUR CAR ]" << std::endl;
	std::cout << "FragTrap " << getName() << " spawned in 2004 in Los Angeles, looking for John Connor." << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap& copy)
{
    *this = copy;
    return ;
}

FragTrap::~FragTrap()
{
    std::cout << std::endl << "[ I LIKE YOUR GUN ]" << std::endl;
	std::cout << "FragTrap " << getName() << " has been destroyed by an explosion caused by one of T-101's Hydrogen Batteries." << std::endl;
	return ;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << getName() << " says :" << std::endl;
    std::cout << "[ I LIKE HIGH FIVES ]" << std::endl;
}
