#include "Intern.hpp"

Intern()
{}

Intern(const Intern& copy)
{
	(void)copy;
}

~Intern()
{}

Intern& operator = (const Intern& op)
{
	(void)op;
	return (*this);
}

Form*	makeShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form*	makeRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form*	makePardon(std::string target)
{
	return (new PresidentialPardonForm(target));
}

typedef Form* (Intern::*formMaker) (std::string target);

Form*	makeForm(std::string fname, std::string target)
{
	Form*		form;
	std::string	index		[3] = {"Shrubbery Creation",	"Robotomy Request",		"Presidential Pardon"};
	formMaker	templates	[3] = {&Intern::makeShrubbery,	&Intern::makeRobotomy,	&Intern::makePardon};

	for (int i = 0; i < 3; i++)
	{
		if (form == index[i])
		{
			form = (this->*template[i]) (target);
			std::cout << "Intern SUCCEDED to create <" << index[i] << "> form." << std::endl;
			return(form);
		}
	}
	sd::cout << "Intern FAILED to create <" << fname << "> form. It's not in the template index." << std::endl;
	return (NULL);
}
