/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loukeen <loukeen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 01:23:01 by lmarzano          #+#    #+#             */
/*   Updated: 2021/12/06 23:41:53 by loukeen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << this->type << "'s ";
	this->dogBrain = new Brain();
}

Dog::~Dog()
{
	std::cout << this->type << "'s ";
	delete this->dogBrain;
}

Dog::Dog(const Dog& copy)
{
	this->dogBrain = NULL;
	*this = copy;
	this->type = "Deep Dog";
	std::cout << this->type << " was created" << std::endl;
	return ;
}

Dog&	Dog::operator = (const Dog &op)
{
	if (this == &op)
		return (*this);
	this->type = op.type;
	if (this->dogBrain)
		delete this->dogBrain;
	this->dogBrain = new Brain(*op.dogBrain);
	return (*this);
}

void	Dog::makeSound()	const
{
	std::cout << "The " << this->type << " goes << WOOOOOF! >>" << std::endl;
}

Brain*	Dog::getBrain()
{
	return (this->dogBrain);
}
