/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:36:34 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/22 14:38:01 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

contact::contact()
{
	this->_init = false;
	return;
}

contact::~contact()
{
	return;
}

//functions of type contact below:

bool	contact::checkInit()
{
	return (this->_init);
}

void	contact::printSearchField(std::string data) const
{
	//use substr(9 chars) for >10char-long strings and append '.' at the end
	if(data.length() > 10)
		std::cout << std::setw(10) << data.substr(0, 9).append(".") << "|";
	else
		std::cout << std::right << std::setfill(' ') <<std::setw(10) << data << "|";
	return ;
}

void	contact::displaySearchFields(int i) const
{
	//	print | _index		|	int
	std::cout << "|         " << i + 1 << "|";
	//	print | first name	|	string
	this->printSearchField(this->_first_name);
	//	print |	last name	|	string
	this->printSearchField(this->_last_name);
	//	print |	nickname	|	string
	this->printSearchField(this->_nickname);
	std::cout << std::endl;
	return ;
}

void	contact::displayContactInfo() const
{
	std::cout << this->_first_name << std::endl;
	std::cout << this->_last_name << std::endl;
	std::cout << this->_nickname << std::endl;
	std::cout << this->_phone_no << std::endl;
	std::cout << this->_darkest_secret << std::endl;
	return ;
}

void	contact::fillContactInfo()
{
	std::cout << "What's the FIRST NAME of this person ?" << std::endl;
	std::getline(std::cin, this->_first_name);
	//			*set last name from input
	std::cout << "What's its LAST NAME ?" << std::endl;
	std::getline(std::cin, this->_last_name);
	//			*set nickname from input
	std::cout << "And its NICKNAME ?" << std::endl;
	std::getline(std::cin, this->_nickname);
	//			*set phone no. from input
	std::cout << "Of course, I need a PHONE NO. for this contact. Please write it below." << std::endl;
	std::getline(std::cin, this->_phone_no);
	//			*set darkest secret from input
	std::cout << "One last question: Can you tell me its DARKEST SECRET ? I won't tell anyone, I swear !" << std::endl;
	std::getline(std::cin, this->_darkest_secret);
	//			_index++;
	this->_init = true;
	return ;
}
