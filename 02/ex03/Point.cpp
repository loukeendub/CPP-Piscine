/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:45:25 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/10 18:08:15 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


Point::Point() : _x(0), _y(0)
{}

Point::Point(const float x, const float y) : _x(x), _y(y)
{}

Point::Point(const Fixed& x, const Fixed& y) : _x(x), _y(y)
{}

Point::~Point()
{}

Point::Point(const Point& p)
{
	*this = p;
	return ;
}

Point& Point::operator = (const Point& p)
{	
	Fixed const x = p.getX();
	Fixed const y = p.getY();
	_x.setRawBits(x.getRawBits());
	_y.setRawBits(y.getRawBits());
	return (*this);
}

Fixed	Point::getY(void) const
{
	return (_y);
}

Fixed	Point::getX(void) const
{
	return (_x);
}

