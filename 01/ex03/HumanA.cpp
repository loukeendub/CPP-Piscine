/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:35:01 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/03 12:44:03 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& type) :
	_weapon(type),
	_name(name)
{
	std::cout << this->_name << " has joined the battle.";
	std::cout << " He carries a " << this->_weapon.getType() << std::endl;
	return ;
}

HumanA::~HumanA()//	destructor
{
	std::cout << this->_name << " has lost the battle, but not the war. He'll come back!" << std::endl;
	return ;
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks the enemy with a " << this->_weapon.getType() << std::endl;
	return ;
}