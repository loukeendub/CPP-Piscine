/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:30:25 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/09 13:07:23 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()//  constr
{
	std::cout << "Default constructor called" << std::endl;// DEBUG
	this->_fixedValue = 0;
	return ;
}

Fixed::~Fixed()//   destr
{
	std::cout << "Destructor called" << std::endl;// DEBUG
	return ;
}

Fixed::Fixed(const Fixed& fix)//	copy constr
{
	std::cout << "Copy Constructor called" << std::endl;// DEBUG
	*this = fix;
	//this->_fixedValue = fix.getRawBits();
	return ;
}

Fixed& Fixed::operator= (const Fixed& fix)
{	std::cout << "Assignation Operator called" << std::endl;
	if (this != &fix)
		this->_fixedValue = fix.getRawBits();
	return(*this);
}

//	{ FUNCTIONS }

int		Fixed::getRawBits() const//  getter
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedValue);
}

void	Fixed::setRawBits(int const raw)// setter
{
	this->_fixedValue = raw;
	return ;
}
