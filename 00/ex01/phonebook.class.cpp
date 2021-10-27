/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:33:51 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/27 13:20:38 by lmarzano         ###   ########.fr       */
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

// functions of type Phonebook below:

void	phonebook::searchContact() const
{
	int	i = 0;
	std::string	tmp;

	if (this->_contacts[i].checkInit())
	{
		std::cout << "Phonebook is empty, what do you expect me to show you?" << std::endl;
		std::cout << "Let's try with something else..." << std::endl;
	}
	else
	{
		std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
		while (i < this->_index)// need to fix some conditions here to print contacts after 9ht is entered
		{
			this->_contacts[i].displaySearchFields(i);
			i++;
		}
		//	ask for valid index input
		std::cout << "Give me a valid index number and I will show you the details" << std::endl;
		std::getline(std::cin, tmp);
		if (tmp[0] > '0' && tmp[0] < '8')
			i = atoi(tmp.c_str());
		//	display contact info (each followed by newl)
		if (i > phonebook::_index)
			std::cout << "Index number is incorrect. can't show you anything interesting..." << std::endl;
		else
			this->_contacts[i - 1].displayContactInfo();
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
