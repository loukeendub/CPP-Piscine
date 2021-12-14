/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 23:07:51 by lmarzano          #+#    #+#             */
/*   Updated: 2021/12/14 23:28:58 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : grade(150)
{
	std::string	tmp;

	std::cout << "Hi Bureaucrat, what's your name?" << std::endl;
	std::getline(std::cin, tmp, '\n');// get name and assign to var name.
	this->name == tmp;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	*this = copy;
}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat& op)
{
	if (this == &op)
		return (*this);
	this->grade = op.grade;
	return (*this);
}

std::ostream& operator<<(std::ostream& output, const Bureaucrat& print)
{
	output << "My name is " << print.getName() << ". My Bureaucrat grade is " << print.getGrade() << ".";
	return (output);
}

const std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::gradeIncrement()
{
	if (this->grade <= 1)
		throw GradeTooHighException();
	this->grade++;
}

void	Bureaucrat::gradeDecrement()
{
	if (this->grade >= 150)
		throw GradeTooLowException();
	this->grade--;
}
