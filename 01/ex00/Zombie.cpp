/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 10:10:44 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/28 12:33:39 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)//	constructor
{
	this->_name = name;
	std::cout << "Zombie " << this->_name << " spawned in Haddonfield, Illinois";
	return ;
}

Zombie::~Zombie()//	destructor
{
	std::cout << "Zombie " << this->_name << " returned to Hell with a huge explosion" << std::endl;
	return ;
}

std::string	Zombie::getName()	const
{
	return (this->_name);
}
	
void	Zombie::setName(std::string name)
{

}

void	Zombie::announce() const
{
	return ;
}
