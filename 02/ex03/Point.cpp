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

Point::~Point()
{}

Point::Point(const Point& p)
{
	*this = p;
	return ;
}

Point::Point(const float a, const float b)
{
	this->_x = a;
	this->_y = b;
	return ;
}

Point& Point::operator = (const Point& p)
{	
	return(*this);
}
