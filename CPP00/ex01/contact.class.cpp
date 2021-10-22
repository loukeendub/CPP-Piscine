/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:36:34 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/22 13:20:50 by lmarzano         ###   ########.fr       */
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

void	contact::printSearchField(std::string data) const
{
	//use substr(9 chars) for >10char-long strings and append '.' at the end
	
	//	print | _index		|	int
	//	print | first name	|	string
	//	print |	last name	|	string
	//	print |	nickname	|	string

}

void	contact::displaySearchFields(int i) const
{
	std::cout << "         " << i + 1 << "|";
	this->printSearchField(this->_first_name);
	this->printSearchField(this->_last_name);
	this->printSearchField(this->_nickname);
}

void	contact::displayContactInfo() const
{
	std::cout << this->_first_name << std::endl;
	std::cout << this->_last_name << std::endl;
	std::cout << this->_nickname << std::endl;
	std::cout << this->_phone_no << std::endl;
	std::cout << this->_darkest_secret << std::endl;
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
