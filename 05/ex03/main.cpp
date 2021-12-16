/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loukeen <loukeen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 23:07:56 by lmarzano          #+#    #+#             */
/*   Updated: 2021/12/15 20:18:41 by loukeen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	Bureaucrat				founder("Gringott", 1);
	Bureaucrat				employee("Griphook", 50);
	Intern					intern;
	Form*					form;

	std::cout << std::endl << "--- [ WELCOME TO GRINGOTTS BANK OF MAGIC ] ---" << std::endl << std::endl;

	try
	{
		//employee
		form = intern.makeForm("Shrubbery Creation", "Groot");
		std::cout << employee << std::endl;
		employee.signForm(*form);
		std::cout << *form << std::endl;
		employee.executeForm(*form);

		form = intern.makeForm("Robotomy Request", "Tom Riddle");
		employee.signForm(*form);
		std::cout << *form << std::endl;
		employee.executeForm(*form);
	}
	catch(const std::exception& e)
	{
		std::cout << std::endl << "[ WARNING ] : " << e.what() << std::endl << std::endl;
	}
	std::cout << std::endl << "[ " << employee.getName() << " calls a higher-graded Bureaucrat. ]" << std::endl << std::endl;
	try
	{
		// founder
		std::cout << founder << std::endl;
		founder.executeForm(*form);
		founder.executeForm(*form);
		founder.executeForm(*form);

		form = intern.makeForm("Presidential Pardon", "Albus Dumbledore");
		founder.signForm(*form);
		std::cout << *form << std::endl;
		founder.executeForm(*form);
	}
	catch(const std::exception& e)
	{
		std::cout << std::endl << std::endl << "[ WARNING ] : " << e.what() << std::endl << std::endl;
	}

		std::cout << std::endl << "--- [ THANK YOU FOR VISITING GRINGOTTS BANK OF MAGIC ] ---" << std::endl << std::endl;


	return (0);
}
