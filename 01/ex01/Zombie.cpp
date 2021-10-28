/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 10:10:44 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/28 16:07:04 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()//	constructor
{
	std::cout << "A soldier of the Undead Nazi Army has appeard in the field" << std::endl;
	return ;
}

Zombie::~Zombie()//	destructor
{
	std::cout << "A soldier of the Nazi Army was shot in the head with a laser blaster" << std::endl;
	return ;
}

std::string	Zombie::getName()	const
{
	return (this->_name);
}

void		Zombie::setName(std::string name)
{
	this->_name = name;
	return ;
}

void	Zombie::announce() const
{
	std::cout << "<" << this->_name << "> GehirrrrrrrnnneeeE..." << std::endl;
	std::cout << "	(which is 'BraiiiiiiinnnzzzZ...,' in German)" << std::endl;
	return ;
}
