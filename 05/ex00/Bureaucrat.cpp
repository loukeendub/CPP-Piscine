/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loukeen <loukeen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 23:07:51 by lmarzano          #+#    #+#             */
/*   Updated: 2021/12/15 10:39:57 by loukeen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : grade(150)
{
	std::string	tmp;

	std::cout << "Hi Bureaucrat, what's your name?" << std::endl;
	std::getline(std::cin, tmp, '\n');
	(std::string) this->name = tmp;
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
	std::cout << this->getName() << " got promoted to grade " << this->getGrade() << ". Well done!" << std::endl;
}

void	Bureaucrat::gradeDecrement()
{
	if (this->grade >= 150)
		throw GradeTooLowException();
	this->grade--;
	std::cout << this->getName() << " got degraded to grade " << this->getGrade() << ". Too bad." << std::endl;
}
