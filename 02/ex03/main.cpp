/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loukeen <loukeen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:42:58 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/13 22:25:57 by loukeen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int		setRandomPoint(int randomFactor);

bool	bsp(const Point a, const Point b, const Point c, const Point point);

int		main()
{
	Point	a(0,0);
	Point	b(10, 0);
	Point	c(5, 7);

	int		x = setRandomPoint(2);
	int		y = setRandomPoint(5);

	std::cout << "Triangle vertices at pos :" << std::endl;
	std::cout << "A(0, 0) B(10, 0) C(5, 7)" << std::endl;

	//test 1
	Point	rdm(x, y);

	std::cout << "point (" << x << ", " << y << ") : ";
	std::cout << (int)bsp(a, b, c, rdm) << std::endl;

	//test 2
	Point	d(5, 2);
	Point	e(-1, 1);

	std::cout << "point (5, 2) : " << (int)bsp(a, b, c, d) << std::endl;
	std::cout << "point (-1, 1) : " << (int)bsp(a, b, c, e) << std::endl; 
	return (0);
}
