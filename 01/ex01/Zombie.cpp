/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 10:10:44 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/28 14:01:19 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)//	constructor
{
	this->_name = name;
	if (name == "Michael Meyers")
		std::cout << "Zombie " << this->_name << " spawned in Haddonfield, Illinois" << std::endl;
	else if (name == "Freddy Krueger")
		std::cout << "Zombie " << this->_name << " spawned in Elm Street's kids deams" << std::endl;
	else
		std::cout << "Zombie " << this->_name << " spawned in Crystal Lake's Camp" << std::endl;
		
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

void	Zombie::announce() const
{
	std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

Zombie*	newZombie(std::string name)
{
	Zombie	*newZombie = new Zombie(name);
	return (newZombie);
}
