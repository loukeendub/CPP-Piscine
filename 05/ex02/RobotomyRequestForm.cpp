/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 19:26:44 by lmarzano          #+#    #+#             */
/*   Updated: 2021/12/16 19:26:45 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
Form("Robotomy Request", 72, 45)
{
	this->setTarget("Tom Riddle");
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
Form("Robotomy Request", 72, 45)
{
	this->setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy)
{
		this->setTarget(copy.getTarget());
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm& RobotomyRequestForm::operator = (const RobotomyRequestForm& op)
{
	if (this == &op)
		return (*this);
	this->setTarget(op.getTarget());
	return (*this);
}

void	RobotomyRequestForm::Action() const
{
	std::cout << "< UAAAAAAAARRGGGH > ... < UGHHH > ... < AAAAAAAAAAAAAHHHHHH >" << std::endl;
	if (rand() % 2)
		std::cout << "Subject [ " << this->getTarget() << " ] has been robotomized SUCCESSFULLY" << std::endl;
	else
		std::cout << "Subject [ " << this->getTarget() << " ] 's robotomization FAILED" << std::endl;
}
