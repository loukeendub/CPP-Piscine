/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:28:28 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/09 13:04:02 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
	Fixed	a;//			constr call
	Fixed	b(a);//	copy constr call
	Fixed	c;//			constr call again (new instance to be managed by the operator)
	
	c = b;
	std::cout <<  a.getRawBits() << std::endl;
	std::cout <<  b.getRawBits() << std::endl;
	std::cout <<  c.getRawBits() << std::endl;

	return (0);
}