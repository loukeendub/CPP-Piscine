/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loukeen <loukeen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 22:38:56 by lmarzano          #+#    #+#             */
/*   Updated: 2021/12/17 13:38:11 by loukeen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "ScalarConversion.hpp"

int main(int ac, char** av)
{
	if (ac != 2)
		return (1);
	
	ScalarConversion    sconv(av[1]);

	std::cout << "sconv : " << sconv << std::endl;

/* try char */
	try
	{
		char	c = static_cast<char>(sconv);
		std::cout << "char : ";
		if (c < 48 || c > 57)
		{
			std::cout << "'" << c << "'" << std::endl;
		}
		else
			std::cout << c << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "char : " << e.what() << std::endl;
	}

/* try int */
	try
	{
		int		i = static_cast<int>(sconv);
		std::cout << "int : " << i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "int : " << e.what() << std::endl;
	}
	
/* try float */
	try
	{
		float	f = static_cast<float>(sconv);
		std::cout << "float : " << f << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "float : " << e.what() << std::endl;
	}

/* try double */
	try
	{
		double	d = static_cast<double>(sconv);
		std::cout << "double : " << d << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "double : " << e.what() << std::endl;
	}
	
	return (0);
}

/*

main must output something like this :

./convert 0

char: Non displayable
int: 0
float: 0.0f
double: 0.0

./convert nan

char: impossible
int: impossible
float: nanf
double: nan

./convert 42.0f

char: '*'
int: 42
float: 42.0f
double: 42.0

*/