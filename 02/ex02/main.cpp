/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:08:23 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/10 16:52:01 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int
main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl << std::endl;

	std::cout << "[ MORE TESTS ]" << std::endl;

	std::cout << "10.1016f / 2 = " << Fixed( 10.1016f ) / Fixed( 2 ) << std::endl;
	std::cout << "5.05f + 2 = " << Fixed( 5.05f ) + Fixed( 2 ) << std::endl;
	std::cout << "5.05f - 2 = " << Fixed( 5.05f ) - Fixed( 2 ) << std::endl;

	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;

	return 0;
}
