/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:59:24 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/28 17:24:32 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string 	brain = "HI THIS IS BRAIN";
	std::string*	stringPTR = &brain;
	std::string&	stringREF = brain;

	std::cout << "BRAIN's Address		: " << &brain << std::endl;
	std::cout << "stringPTR's address	: " << stringPTR << std::endl;
	std::cout << "stringREF's address	: " << &stringREF << std::endl;

	std::cout << "stringPTR	: " << *stringPTR << std::endl;
	std::cout << "stringREF	: " << stringREF << std::endl;
	return (0);
}
