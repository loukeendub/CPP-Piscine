/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:30:25 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/09 18:59:07 by lmarzano         ###   ########.fr       */
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

Fixed& Fixed::operator= (const Fixed& fix)
{	std::cout << "Assignation Operator called" << std::endl;
	if (this != &fix)
		this->_fixedValue = fix.getRawBits();
	return(*this);
}

//	{ FUNCTIONS }

int		Fixed::getRawBits() const
{
	return (this->_fixedValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedValue = raw;
	return ;
}

//	EX01 IMPLEMENTATION : 

Fixed::Fixed(const int ival)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedValue = ival << this->_bits;
	return ;
}

Fixed::Fixed(const float fval)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedValue = (int)(roundf(fval * (1 << this->_bits)));
	return ;
}

float	Fixed::toFloat() const
{
	float	value;

	value = (float)this->_fixedValue / (float)(1 << this->_bits);
	return (value);
}

int		Fixed::toInt() const
{
	int	value;
	value = (int)(this->_fixedValue >> this->_bits);
	
	return(value);
}

std::ostream& operator<<(std::ostream& output, const Fixed& fix)
{
	output << fix.toFloat();
	return (output);
}

//	EX02 IMPLEMENTATION :

//	operators :

// member functions

static Fixed& min(Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

static Fixed& max(Fixed& a, Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}
