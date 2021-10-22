/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:36:34 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/22 11:48:56 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

contact::contact(/* args */)
{
	return;
}

contact::~contact()
{
	return;
}

//functions of type contact below:

void	contact::setFirstName(std::string& input)
{
	first_name = input;
}

void	contact::setLastName(std::string& input)
{
	last_name = input;
}

void	contact::setNickname(std::string& input)
{
	nickname = input;
}

void	contact::setPhoneNo(std::string& input)
{
	phone_no = input;
}

void	contact::setDarkestSecret(std::string& input)
{
	darkest_secret = input;
}

void	contact::displaySearchFields() const
{
	std::string	tmp;
	//	print | _index		|	int
	//	print | first name	|	string
	//	print |	last name	|	string
	//	print |	nickname	|	string
	

	//use substr(9 chars) for >10char-long strings and append '.' at the end

}

void	contact::displayContactInfo() const
{
	std::cout << this->first_name << std::endl;
	std::cout << this->last_name << std::endl;
	std::cout << this->nickname << std::endl;
	std::cout << this->phone_no << std::endl;
	std::cout << this->darkest_secret << std::endl;
}
