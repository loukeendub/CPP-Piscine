/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:42:58 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/10 18:08:23 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool	bsp(const Point& a, const Point& b, const Point& c);

int		main()
{
	Point	a(0,0);
	Point	b(42, 0);
	Point	c(21, 12);

	int		x = 0;
	int		y = 0;

	std::cout << "Triangle vertices at pos :" << std::endl;
	std::cout << "A(0, 0) B(42, 0) C(21, 12)" << std::endl;

	Point	rdm(x, y);

	//	make a function to randomize x and y values
	
	std::cout << "point (" << x << ", " << y << ") ";
	std::cout << (int)bsp(a, b, c, rdm) << std::endl;
	return (0);
}
