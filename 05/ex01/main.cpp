/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loukeen <loukeen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 23:07:56 by lmarzano          #+#    #+#             */
/*   Updated: 2021/12/15 11:26:56 by loukeen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	founder("Gringott", 1);
	Bureaucrat	employee("Griphook", 42);
	Form		form1("Lestrange Vault visit request", 1, 1);
	Form		form2("Sirius Black's personal items withdrawal", 42, 10);
	Form		form3("Impossible-to-sign", 0, 1);

	try
	{
		//employee
		std::cout << form2 << std::endl;
		employee.signForm(form2);

		std::cout << std::endl << form1 << std::endl;
		employee.signForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cout << std::endl << "[ WARNING ] : " << e.what() << std::endl << std::endl;
	}
	try
	{
		// founder
		std::cout << form2 << std::endl;
		founder.signForm(form2);

		std::cout << std::endl << form1 << std::endl;
		founder.signForm(form1);

		std::cout << std::endl << form3 << std::endl;
		founder.signForm(form3);
	}
	catch(const std::exception& e)
	{
		std::cout << std::endl << "[ WARNING ] : " << e.what() << std::endl << std::endl;
	}

	

	return (0);
}
