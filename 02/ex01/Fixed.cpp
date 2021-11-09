/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:30:25 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/09 15:58:59 by lmarzano         ###   ########.fr       */
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
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedValue);
}

void	Fixed::setRawBits(int const raw)// setter
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

//	Converting Fixed point to floating point format and vice versa.
//	Read data from the registers in fixed-point format.
//	Convert to floating-point.
//	Perform floating-point arithmetic to process the data.
//	Convert the result back to the fixed point format.
//	Write the result back to the register

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
	output << fix.getRawBits();
	return (output);
}
