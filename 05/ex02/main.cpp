/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loukeen <loukeen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 23:07:56 by lmarzano          #+#    #+#             */
/*   Updated: 2021/12/15 15:32:18 by loukeen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	Bureaucrat				founder("Gringott", 1);
	Bureaucrat				employee("Griphook", 50);
	ShrubberyCreationForm	shrubbery("Geeno");
	RobotomyRequestForm		robotomy("Peeno");
	PresidentialPardonForm	pardon("Deeno");

	std::cout << std::endl << "--- [ WELCOME TO GRINGOTTS BANK OF MAGIC ] ---" << std::endl << std::endl;

	try
	{
		//employee
		std::cout << shrubbery << std::endl;
		std::cout << employee << std::endl;
		employee.signForm(shrubbery);
		std::cout << shrubbery << std::endl;
		//execute

		std::cout << robotomy << std::endl;
		employee.signForm(robotomy);
		std::cout << robotomy << std::endl;
		//execute
	}
	catch(const std::exception& e)
	{
		std::cout << std::endl << "[ WARNING ] : " << e.what() << std::endl << std::endl;
	}
	std::cout << "[ " << employee.getName() << " calls a higher-graded Bureaucrat. ]" << std::endl << std::endl;
	try
	{
		// founder
		std::cout << founder << std::endl;
		//execute

		std::cout << pardon << std::endl;
		founder.signForm(pardon);
		std::cout << pardon << std::endl;
		//execute
	}
	catch(const std::exception& e)
	{
		std::cout << std::endl << "[ WARNING ] : " << e.what() << std::endl << std::endl;
	}

		std::cout << "--- [ THANK YOU FOR VISITING GRINGOTTS BANK OF MAGIC ] ---" << std::endl << std::endl;


	return (0);
}
