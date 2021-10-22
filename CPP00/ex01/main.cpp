/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:34:07 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/22 11:08:33 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"
#include "phonebook.class.hpp"

int	main()
{
	std::string	input;
	
	std::cout << "Welcome to MY MOODY PHONEBOOK, dude" << std::endl;
	while (input != "EXIT")
	{
		std::cout << "What do you want me to do? [ADD] [SEARCH] [EXIT]"  << std::endl;
		std::cin >> input;
		if (input == "ADD")
		{
			//call addContact
		}
		else if (input == "SEARCH")
			Phonebook::searchContact();
		else
		{
			std::cout << "are you a selective analphabet or what?" << std::endl;
			std::cout << "Let's try again..." << std::endl;
		}
	}
	std::cout << "Quitting MY MOODY PHONEBOOK" << std::endl;
	return (0);
}
