/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:34:07 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/27 13:11:39 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"
#include "phonebook.class.hpp"

int	main()
{
	std::string	input;
	phonebook	phb;
	
	std::cout << "Welcome to MY MOODY PHONEBOOK, dude" << std::endl;
	std::cout << "What do you want me to do?" << std::endl << "[ADD] [SEARCH] [EXIT]"  << std::endl;
	std::getline(std::cin, input, '\n');
	while (input != "EXIT")
	{
		if (input == "ADD")
		{
			std::cout << "Your choice is [ADD]" << std::endl;
			phb.addContact();
		}
		else if (input == "SEARCH")
		{
			std::cout << "Your choice is [SEARCH]" << std::endl;
			phb.searchContact();
		}
		else
		{
			std::cout << "Please, read more carefully the three options I gave you." << std::endl;
			std::cout << "Let's try again..." << std::endl;
		}
		std::cout << "What do you want me to do now?" << std::endl << "[ADD] [SEARCH] [EXIT]"  << std::endl;
		std::getline(std::cin, input, '\n');
	}
	std::cout << "Quitting MY MOODY PHONEBOOK" << std::endl;
	return (0);
}
