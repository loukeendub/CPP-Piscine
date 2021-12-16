/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 19:27:44 by lmarzano          #+#    #+#             */
/*   Updated: 2021/12/16 19:27:45 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
Form("Presidential Pardon", 25, 5)
{
	this->setTarget("Albus Dumbledore");
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
Form("Presidential Pardon", 25, 5)
{
	this->setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy)
{
	this->setTarget(copy.getTarget());
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm& op)
{
	if (this == &op)
		return (*this);
	this->setTarget(op.getTarget());
	return (*this);
}

void	PresidentialPardonForm::Action() const
{
	std::cout << this->getTarget() << " has been officially pardoned by Zafod Beeblebrox" << std::endl << "** Hell yeah! It's a bloody crossover!!! **" << std::endl << std::endl;
}
