/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:28:28 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/09 18:31:46 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
	Fixed	a;
	Fixed	b(a);
	Fixed	c;
	
	c = b;
	std::cout <<  a.getRawBits() << std::endl;
	std::cout <<  b.getRawBits() << std::endl;
	std::cout <<  c.getRawBits() << std::endl;

	return (0);
}