/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 10:10:44 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/28 10:47:48 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()//	constructor
{
	return ;
}

Zombie::~Zombie()//	destructor
{
	//	add debugging message including the name of the Zombie
	return ;
}

std::string	Zombie::getName()	const
{
	return (this->_name);
}
	
void	Zombie::setName()
{

}

void	Zombie::announce() const
{
	return ;
}
