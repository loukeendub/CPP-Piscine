/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:27:46 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/16 12:04:00 by lmarzano         ###   ########.fr       */
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
	std::cout << "ClapTrap " << getName() << " spawned in 1984 in Los Angeles, looking for Sarah Connor." << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << std::endl << "[ I'LL BE BACK! ]" << std::endl;
	std::cout << "ClapTrap " << getName() << " was crashed with a hydraulic press." << std::endl;
	return ;
}

void	ClapTrap::attack(std::string const& target)
{
	std::cout << std::endl << "[ ASTA LA VISTA, BABY! ]" << std::endl;
	std::cout << "ClapTrap " << getName() << " attacks " << target;
	std::cout << ", causing " << getAD() << " damage points!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << std::endl << "[ COME WITH ME IF YOU WANT TO LIVE! ]" << std::endl;
	std::cout << "ClapTrap " << getName() << " has been repaired." << std::endl;
	std::cout << "He has recovered " << amount << " damage points!" << std::endl;

	this->_hitPoints += amount;

	std::cout << getName() << "'s total HPs are now " << getHP() << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << std::endl << "[ I KNOW NOW WHY YOU CRY, BUT IT'S SOMETHING I CAN NEVER DO ]" << std::endl;
	std::cout << "ClapTrap " << getName() << " has been attacked! He gets " << amount << " points of damage!" << std::endl;
	
	setHP(_hitPoints - amount);
	if ((getHP()) <= 0)
	{
		setHP(0);
		std::cout << "ClapTrap " << getName() << " got smashed." << std::endl;
	}
	std::cout << getName() << "'s total HPs are now " << getHP() << std::endl;
}

//	ex01 IMPLEMENTATION :

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	*this = copy;
	return ;
}

void ClapTrap::operator = (const ClapTrap &op)
{
	if (this == &op)
		return ;
	_name = op.getName();
	_hitPoints = op.getHP();
	_energyPoints = op.getEP();
	_attackDamage = op.getAD();
}

void			ClapTrap::setHP(unsigned int hp)
{
	this->_hitPoints = hp;
}

void			ClapTrap::setEP(unsigned int ep)
{
	this->_energyPoints = ep;
}

void			ClapTrap::setAD(unsigned int ad)
{
	this->_attackDamage = ad;
}

int				ClapTrap::getHP() const
{
	return (this->_hitPoints);
}

int				ClapTrap::getEP() const
{
	return (this->_energyPoints);
}

int				ClapTrap::getAD() const
{
	return (this->_attackDamage);
}

std::string		ClapTrap::getName() const
{
	return (this->_name);
}
