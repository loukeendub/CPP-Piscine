/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loukeen <loukeen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:46:31 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/13 22:24:33 by loukeen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

int		setRandomPoint(int randomFactor)
{
	int	point = 0;
	srand(time(0));

	point = rand() %randomFactor;
	return(point);
}

bool	bsp(const Point a, const Point b, const Point c, const Point point)
{
	Fixed	first;
	Fixed	second;
	Fixed	third;
	Fixed	alpha;
	Fixed	beta;

	first = (point.getX() - a.getX()) * (c.getY() - a.getY()) -
			(point.getY() - a.getY()) * (c.getX() - a.getX());
	second = (a.getX() - point.getX()) * (b.getY() - a.getY()) -
			(a.getY() - point.getY()) * (b.getX() - a.getX());
	third = (b.getX() - a.getX()) * (c.getY() - a.getY()) -
			(b.getY() - a.getY()) * (c.getX() - a.getX());
	alpha = first / third;
	beta = second / third;
	if (alpha > 0 && beta > 0 && alpha + beta < 1)
		return (true);
	else
		return (false);
}
