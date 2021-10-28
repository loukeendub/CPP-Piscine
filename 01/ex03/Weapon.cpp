/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:32:42 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/28 18:15:24 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(/* args */)//	constructor
{
	return ;
}

Weapon::~Weapon()//	destructor
{
	return ;
}

std::string& const	Weapon::getType()
{
	return(this->_type);
}

void			Weapon::setType(std::string type)
{
	return ;	
}
