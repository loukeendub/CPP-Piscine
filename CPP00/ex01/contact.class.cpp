/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:36:34 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/20 19:16:10 by lmarzano         ###   ########.fr       */
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

void	contact::displayContactInfo() const
{
	//	print | _index		|	int
	//	print | first name	|	string
	//	print |	last name	|	string
	//	print |	nickname	|	string

	//use substr(9 chars) for >10char-long strings and append '.' at the end
}
