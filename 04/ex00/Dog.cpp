/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 01:23:01 by lmarzano          #+#    #+#             */
/*   Updated: 2021/12/05 04:45:15 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
}

Dog::~Dog()
{}

Dog::Dog(const Dog& copy)
{
	*this = copy;
	return ;
}

Dog&	Dog::operator = (const Dog &op)
{
	if (this == &op)
		return (*this);
	this->type = op.type;
	return (*this);
}

void	Dog::makeSound()	const
{
	std::cout << "The " << this->type << " goes << WOOOOOF! >>" << std::endl;
}
