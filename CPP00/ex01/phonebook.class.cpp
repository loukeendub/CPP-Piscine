/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:33:51 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/22 11:46:20 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

Phonebook::Phonebook(/* args */)
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
	std::string	input;

	//	check if _index is = 8
	if(this->_index == 8)
	{
	//		if _index = 8:
	//			replace oldest contact (_index = _index % 8; _index++;)
	//				this will trigger _index to start from 0 everytime it array of contacts is full
	}
	//		if not:
	//			*set first name from input
	std::cout << "What's the FIRST NAME of this person ?" << std::endl;
	std::getline(std::cin, input);
	_contacts->setFirstName(input);
	//			*set last name from input
	std::cout << "What's its LAST NAME ?" << std::endl;
	std::getline(std::cin, input);
	_contacts->setLastName(input);
	//			*set nickname from input
	std::cout << "And its NICKNAME ?" << std::endl;
	std::getline(std::cin, input);
	_contacts->setNickname(input);
	//			*set phone no. from input
	std::cout << "Of course, I need a PHONE NO. for this contact. Please write it below." << std::endl;
	std::getline(std::cin, input);
	_contacts->setPhoneNo(input);
	//			*set darkest secret from input
	std::cout << "One last question: Can you tell me its DARKEST SECRET ? I won't tell anyone, I swear !" << std::endl;
	std::getline(std::cin, input);
	_contacts->setDarkestSecret(input);
	//			_index++;
	this->_index++;
}
