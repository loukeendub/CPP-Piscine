/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 01:19:10 by lmarzano          #+#    #+#             */
/*   Updated: 2021/12/05 04:45:34 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{}

Animal::Animal(const Animal& copy)
{
	*this = copy;
	return ;
}

Animal::~Animal()
{}

Animal&	Animal::operator = (const Animal &op)
{
	if (this == &op)
		return (*this);
	this->type = op.type;
	return (*this);
}

void	Animal::makeSound()	const
{
	std::cout << "The " << this->type << " goes << MUAHUAHUA! >>" << std::endl;
}

std::string	Animal::getType()	const
{
	return (this->type);
}
