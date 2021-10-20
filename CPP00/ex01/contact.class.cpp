/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:36:34 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/20 18:17:33 by lmarzano         ###   ########.fr       */
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
	
}
