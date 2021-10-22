/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:33:51 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/22 13:03:55 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

Phonebook::Phonebook()
{
	this->_index = 0;
	return;
}

Phonebook::~Phonebook()
{
	return;
}

// functions of type Phonebook below:

void	Phonebook::searchContact() const
{
	int	i = 0;
	std::string	tmp;

	//	print contact list
	std::cout << "|INDEX    |FIRST NAME|LAST NAME |NICKNAME  |" << std::endl;
	if (this->_index == 0)
		std::cout << "Phonebook is empty, what do you expect me to show you?" << std::endl;
	while (i++ <= Phonebook::_index)
		_contacts->displaySearchFields();
	
	//	ask for valid index input
	std::cout << "Give me a valid index number and I will show you the details" << std::endl;
	std::cin >> tmp;
	if (tmp[0] > '0' && tmp[0] < '9')
		i = atoi(tmp.c_str());
	
	//	display contact info (each followed by newl)
	if (i > Phonebook::_index)
		std::cout << "Index number is incorrect. can't show you anything interesting..." << std::endl;
	else
		_contacts->displayContactInfo();
}

void	Phonebook::addContact()
{
	this->_index %= 8;
	this->_contacts[this->_index].fillContactInfo();
	this->_index++;
}
