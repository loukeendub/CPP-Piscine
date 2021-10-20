/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:33:51 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/20 18:49:41 by lmarzano         ###   ########.fr       */
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

void	Phonebook::searchContact(void) const
{
	//	print contact list
	//	ask for valid index input
	//	print contact infos (each followed by newl)
}

void	Phonebook::addContact(void)
{
	std::string	input;

	//	check if _index is = 8
	//		if not:
	//			*set first name from input
	//			*set last name from input
	//			*set nickname from input
	//			*set phone no. from input
	//			*set darkest secret from input
	//			_index++;
	//		if _index = 8:
	//			replace oldest contact (_index = _index % 8; _index++;)
	//				this will trigger _index to start from 0 everytime it array of contacts is full
}
