/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 01:28:56 by lmarzano          #+#    #+#             */
/*   Updated: 2021/12/05 05:18:29 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
}

Cat::~Cat()
{}

Cat::Cat(const Cat& copy)
{
	*this = copy;
	return ;
}

Cat& Cat::operator = (const Cat& op)
{
	if (this == &op)
		return (*this);
	this->type = op.type;
	return (*this);
}

void	Cat::makeSound()	const
{
	std::cout << "The " << this->type << " goes << MEOOOOOOOW! >>" << std::endl;
}
