/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 03:46:05 by lmarzano          #+#    #+#             */
/*   Updated: 2021/12/05 03:53:08 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal() : type("Wrong Animal")
{}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	*this = copy;
	return ;
}

WrongAnimal::~WrongAnimal()
{}

WrongAnimal&	WrongAnimal::operator = (const WrongAnimal &op)
{
	if (this == &op)
		return (*this);
	this->type = op.type;
	return (*this);
}

void	WrongAnimal::makeSound()	const
{
	std::cout << "The " << this->type << " goes << MUAHUAHUA! >>" << std::endl;
}

std::string	WrongAnimal::getType()	const
{
	return (this->type);
}