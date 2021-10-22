/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:33:51 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/22 14:44:15 by lmarzano         ###   ########.fr       */
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

	if (this->_index == 0)
		std::cout << "Phonebook is empty, what do you expect me to show you?" << std::endl;
	//	print contact list
	std::cout << "|    INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	while (i++ < 8)
	{
		if(this->_contacts[i].checkInit())
			this->_contacts[i].displaySearchFields(i);
	}
	//I AM DEBUGGING HERE!!!
	//	ask for valid index input
	std::cout << "Give me a valid index number and I will show you the details" << std::endl;
	std::cin >> tmp;
	if (tmp[0] > '0' && tmp[0] < '8')
		i = atoi(tmp.c_str());
	//	display contact info (each followed by newl)
	if (i > phonebook::_index)
		std::cout << "Index number is incorrect. can't show you anything interesting..." << std::endl;
	else
		_contacts->displayContactInfo();
	return ;
}

void	phonebook::addContact()
{
	this->_index %= 8;
	this->_contacts[this->_index].fillContactInfo();
	this->_index++;
	return ;
}
