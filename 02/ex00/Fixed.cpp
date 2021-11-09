/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:30:25 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/09 19:08:28 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedValue = 0;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed& fix)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = fix;
	//this->_fixedValue = fix.getRawBits();
	return ;
}

Fixed& Fixed::operator = (const Fixed& fix)
{	std::cout << "Assignation Operator called" << std::endl;
	if (this != &fix)
		this->_fixedValue = fix.getRawBits();
	return(*this);
}

//	{ FUNCTIONS }

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedValue = raw;
	return ;
}
