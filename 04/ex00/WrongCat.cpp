/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 03:55:57 by lmarzano          #+#    #+#             */
/*   Updated: 2021/12/05 04:02:13 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongCat.hpp>

WrongCat::WrongCat()
{
	this->type = "Wrong Cat";
}

WrongCat::~WrongCat()
{}

WrongCat::WrongCat(const WrongCat& copy)
{
	*this = copy;
	return ;
}

WrongCat& WrongCat::operator = (const WrongCat& op)
{
	if (this == &op)
		return (*this);
	this->type = op.type;
	return (*this);
}

void	WrongCat::makeSound()	const
{
	std::cout << "The " << this->type << " goes << WREOOOOOOOWNG! >>" << std::endl;
}
