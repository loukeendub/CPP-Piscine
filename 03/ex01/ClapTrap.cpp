/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:27:46 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/15 17:31:42 by lmarzano         ###   ########.fr       */
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
	std::cout << "[ I'LL BE BACK! ]" << std::endl;
	std::cout << "ClapTrap " << getName() << " was crashed with a hydraulic press." << std::endl;
	return ;
}

void	ClapTrap::attack(std::string const& target)
{
	std::cout << std::endl << "[ ASTA LA VISTA, BABY! ]" << std::endl;
	std::cout << "ClapTrap " << getName() << " attacks " << target;
	std::cout << ", causing " << getAD() << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	int	tmpEP = 0;
	std::cout << std::endl << "[ COME WITH ME IF YOU WANT TO LIVE! ]" << std::endl;
	if (getEP() == 0)
		std::cout << "ClapTrap " << getName() << " has been killed in the attempt of killing Sarah Connor." << std::endl;
	else
		std::cout << "ClapTrap " << getName() << " has been repaired." << std::endl;
	std::cout << "He has recovered " << amount << " points of damage!" << std::endl;

	tmpEP = getEP() + amount;

	std::cout << getName() << "'s total Energy Points are now " << _energyPoints << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int tmpEP = 0;
	std::cout << std::endl << "[ I KNOW NOW WHY YOU CRY, BUT IT'S SOMETHING I CAN NEVER DO ]" << std::endl;
	std::cout << "ClapTrap " << getName() << " has been attacked! He gets " << amount << " points of damage!" << std::endl;

	tmpEP = getEP() - amount;
	if (tmpEP <= 0)
	{
		setEP(0);
		std::cout << "ClapTrap " << getName() << " got smashed." << std::endl;
	}
	std::cout << getName() << "'s total Energy Points are now " << getEP() << std::endl;
}

//	ex01 IMPLEMENTATION :

ClapTrap::ClapTrap(const ClapTrap& copy)
{

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

int				ClapTrap::getHP()
{
	return (this->_hitPoints);
}

int				ClapTrap::getEP()
{
	return (this->_energyPoints);
}

int				ClapTrap::getAD()
{
	return (this->_attackDamage);
}

std::string		ClapTrap::getName()
{
	return (this->_name);
}

