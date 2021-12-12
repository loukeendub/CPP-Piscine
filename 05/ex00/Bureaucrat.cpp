#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Anonymous"), grade(0)
{}

Bureaucrat::Bureaucrat(std::string name) : name(name), grade(0)
{}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	*this = copy;
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat& op)
{
	if (this == &op)
		return (*this);
	return (*this);
}

std::ostream& operator<<(std::ostream& output, const Bureaucrat& print)
{
	output << print;
	return (output);
}

std::string Bureaucrat::getName()
{
	return (this->name);
}

int Bureaucrat::getGrade()
{
	return (this->grade);
}