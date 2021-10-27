/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:36:34 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/27 14:37:35 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

contact::contact()
{
	this->_init = true;
	return;
}

contact::~contact()
{
	return;
}

bool	contact::checkInit() const
{
	return (this->_init);
}

void	contact::printSearchField(std::string data) const
{
	if(data.length() > 10)
		std::cout << std::setw(10) << data.substr(0, 9).append(".") << "|";
	else
		std::cout << std::right << std::setfill(' ') <<std::setw(10) << data << "|";
	return ;
}

void	contact::displaySearchFields(int i) const
{
	std::cout << "|         " << i + 1 << "|";
	this->printSearchField(this->_first_name);
	this->printSearchField(this->_last_name);
	this->printSearchField(this->_nickname);
	std::cout << std::endl;
	return ;
}

void	contact::displayContactInfo() const
{
	std::cout << "First Name	:	" << this->_first_name << std::endl;
	std::cout << "Last Name	:	" << this->_last_name << std::endl;
	std::cout << "Nickname	:	" << this->_nickname << std::endl;
	std::cout << "Phone No.	:	" << this->_phone_no << std::endl;
	std::cout << "Darkest Secret	:	" << this->_darkest_secret << std::endl;
	return ;
}

void	contact::fillContactInfo()
{
	std::cout << "What's the FIRST NAME of this person ?" << std::endl;
	std::getline(std::cin, this->_first_name, '\n');
	std::cout << "What's its LAST NAME ?" << std::endl;
	std::getline(std::cin, this->_last_name);
	std::cout << "And its NICKNAME ?" << std::endl;
	std::getline(std::cin, this->_nickname);
	std::cout << "Of course, I need a PHONE NO. for this contact. Please write it below." << std::endl;
	std::getline(std::cin, this->_phone_no);
	std::cout << "One last question: Can you tell me its DARKEST SECRET ? I won't tell anyone, I swear !" << std::endl;
	std::getline(std::cin, this->_darkest_secret);
	this->_init = false;
	return ;
}
