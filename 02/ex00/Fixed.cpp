/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:30:25 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/09 12:13:07 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()//  constr
{
	std::cout << "Constructor active" << std::endl;// DEBUG
	this->_fixedValue = 0;
	return ;
}

Fixed::~Fixed()//   destr
{
	std::cout << "Destructor active" << std::endl;// DEBUG
	return ;
}

Fixed::Fixed(const Fixed& fix)//	copy constr
{
	std::cout << "Copy Constructor active" << std::endl;// DEBUG
	this->_fixedValue = fix.getRawBits();
	return ;
}

//	{ FUNCTIONS }

int		Fixed::getRawBits() const//  getter
{
	return (this->_fixedValue);
}

void	Fixed::setRawBits(int const raw)// setter
{
	this->_fixedValue = raw;
	return ;
}
