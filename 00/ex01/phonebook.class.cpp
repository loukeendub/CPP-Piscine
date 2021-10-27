/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:33:51 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/27 17:28:39 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

phonebook::phonebook()
{
	this->_index = 0;
	return ;
}

phonebook::~phonebook()
{
	return ;
}

void	phonebook::searchContact() const
{
	int	i = 0;
	std::string	tmp;

	if (this->_contacts[0].checkInit())
	{
		std::cout << "Phonebook is empty, what do you expect me to show you?" << std::endl;
		std::cout << "Let's try with something else..." << std::endl;
	}
	else
	{
		std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
		while (i < 8 && !this->_contacts[i].checkInit())
		{
			this->_contacts[i].displaySearchFields(i);
			i++;
		}
		std::cout << "Give me a valid index number and I will show you the details" << std::endl;
		std::getline(std::cin, tmp);
		if (tmp[0] > '0' && tmp[0] < '8' && !tmp[1])
		{
			i = atoi(tmp.c_str());
			if (i >= 1 && i <= 8)
				this->_contacts[i - 1].displayContactInfo();
		}
		else
			std::cout << "Index number is incorrect. can't show you anything interesting..." << std::endl;
	}
	return ;
}

void	phonebook::addContact()
{
	this->_index %= 8;
	this->_contacts[this->_index].fillContactInfo();
	this->_index++;
	return ;
}
