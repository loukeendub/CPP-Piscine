/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loukeen <loukeen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 04:35:01 by lmarzano          #+#    #+#             */
/*   Updated: 2021/12/08 21:36:19 by loukeen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{}

AMateria::~AMateria()
{}

AMateria::AMateria(const AMateria& copy)
{
	*this = copy;
}

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
}

AMateria& AMateria::operator = (const AMateria& op)
{
	if (this == &op)
		return (*this);
	this->_type = op._type;
	return (*this);
}

std::string const  & AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{}
