/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loukeen <loukeen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 23:07:56 by lmarzano          #+#    #+#             */
/*   Updated: 2021/12/15 10:45:46 by loukeen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	founder("Gringott", 1);
	Bureaucrat	griphook;

	try
	{
		//griphook
		std::cout << griphook << std::endl;
		griphook.gradeIncrement();
		std::cout << griphook << std::endl;
		griphook.gradeDecrement();
		std::cout << griphook << std::endl;
		griphook.gradeDecrement();
		std::cout << griphook << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Exception occurred! " << e.what() << std::endl;
	}
	try
	{
		// founder
		std::cout << founder << std::endl;
		founder.gradeDecrement();
		std::cout << founder << std::endl;
		founder.gradeIncrement();
		std::cout << founder << std::endl;
		founder.gradeIncrement();
		std::cout << founder << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Exception occurred! " << e.what() << std::endl;
	}

	

	return (0);
}
