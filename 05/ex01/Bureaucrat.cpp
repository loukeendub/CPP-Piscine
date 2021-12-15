/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loukeen <loukeen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 23:07:51 by lmarzano          #+#    #+#             */
/*   Updated: 2021/12/15 11:30:03 by loukeen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Anonymous"), grade(150)
{
	// std::string	tmp;

	// std::cout << "Hi Bureaucrat, what's your name?" << std::endl;
	// std::getline(std::cin, tmp, '\n');
	// std::cout << "Your name is " << tmp << std::endl;
	// (std::string) this->name = tmp;
	// std::cout << "Your name is " << this->name << std::endl;
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

std::ostream& operator << (std::ostream& output, const Bureaucrat& print)
{
	output << "My name is " << print.getName() << ". I am Bureaucrat n." << print.getGrade() << " of the Gringotts Bank of Magic.";
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
	std::cout << " Promotion attempt for " << this->getName() << "." << std::endl;
	if (this->grade <= 1)
		throw GradeTooHighException();
	this->grade--;
}

void	Bureaucrat::gradeDecrement()
{
	std::cout << " Demotion attempt for " << this->getName() << "." << std::endl;
	if (this->grade >= 150)
		throw GradeTooLowException();
	this->grade++;
}
