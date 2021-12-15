#include "Form.hpp"

Form::Form() :
sign(false),
signGrade(150),
execGrade(150)
{}

Form::Form(const std::string name, int grade, int exec) :
sign(false),
name(name),
signGrade(grade),
execGrade(exec)
{}

Form::Form(const Form& copy)
{
	*this = copy;
}

Form::~Form()
{}

Form& Form::operator = (const Form& op)
{
	if (this == &op)
		return (*this);
	this->name = op.name;
	this->signGrade = op.signGrade;
	this->execGrade = op.execGrade;
	this->sign = getSignStatus();
	return (*this);
}

const std::string	Form::getName() const
{
	return (this->name);
}

bool	Form::getSignStatus() const
{
	return (this->sign);
}

int	Form::getSignGrade() const
{
	return (this->signGrade);
}

int	Form::getExecGrade() const
{
	return (this->execGrade);
}

void	Form::signature(const Bureaucrat& signee)
{
	if (signee.getGrade() > signGrade)
		throw GradeTooLowException();
	else
		this->sign = true;
}

std::ostream& operator << (std::ostream& output, const Form& print)
{
	output << "Form <" << print.getName() << "> is ready to be signed by a Bureaucrat of grade " << print.getSignGrade() << " or above." << std::endl;
	if (print.getSignStatus())
		output << "Form was signed successfully!" << std::endl;
	else
		output << "Form could not be signed! Please check Bureaucrat's permission." << std::endl;
	output << "Form <" << print.getName() << "> can only be executed by a Bureaucrat of grade  " << print.getExecGrade() << " or above." << std::endl;

}