/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 23:07:56 by lmarzano          #+#    #+#             */
/*   Updated: 2021/12/14 23:53:10 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	founder("Gringott", 1);
	Bureaucrat	griphook();

	try
	{
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
