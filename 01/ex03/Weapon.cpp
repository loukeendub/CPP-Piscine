/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loukeen <loukeen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:32:42 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/03 09:25:11 by loukeen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)//	constructor
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

void	Weapon::setType(std::string type)
{
	return ;	
}
