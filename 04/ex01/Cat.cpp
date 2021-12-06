/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loukeen <loukeen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 01:28:56 by lmarzano          #+#    #+#             */
/*   Updated: 2021/12/06 23:36:18 by loukeen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << this->type << "'s ";
	this->catBrain = new Brain();
}

Cat::~Cat()
{
	std::cout << this->type << "'s ";
	delete this->catBrain;
}

Cat::Cat(const Cat& copy)
{
	this->catBrain = NULL;
	*this = copy;
	this->type = "Deep Cat";
	std::cout << this->type << " was created" << std::endl;
	return ;
}

Cat& Cat::operator = (const Cat& op)
{
	if (this == &op)
		return (*this);
	this->type = op.type;
	if (this->catBrain)
		delete this->catBrain;
	this->catBrain = new Brain(*op.catBrain);
	return (*this);
}

void	Cat::makeSound()	const
{
	std::cout << "The " << this->type << " goes << MEOOOOOOOW! >>" << std::endl;
}

Brain*	Cat::getBrain()
{
	return (this->catBrain);
}
