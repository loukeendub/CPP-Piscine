/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:35:17 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/03 19:35:23 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()//	constr
{
	std::cout << "Karen has entered the room." << std::endl;
	return ;
}

Karen::~Karen()//	destr
{
	std::cout << "Karen has left the room." << std::endl;
	return ;
}

void Karen::complain(std::string level)
{
	int		i = 0;
	void	(Karen::*toUse)() = NULL;
	bool	isCorrect = false;
	struct complaint
	{
		std::string lev;
		void (Karen::*foo)();
	}	mystruct[4] = 
		{
			{"debug", &Karen::debug},
			{"info", &Karen::info},
			{"warning", &Karen::warning},
			{"error", &Karen::error}
		};
	while( i < 4)
	{
		if (mystruct[i].lev == level)
		{
			isCorrect = true;
			toUse = mystruct[i].foo;
		}
		i++;
	}
	if (toUse != NULL)
		(this->*toUse)();
	if (!isCorrect)
		std::cout << "Karen has nothing to complain about... For now!" << std::endl;
	return ;
}

// PRIVATE

void	Karen::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "Karen says: < This code is just a mess! Looks like it has been written by a drunk Oompa-Loompa! I want to speak to your C.T.O! >" << std::endl;
	return ;
}

void	Karen::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "Karen says: < And where should the documentation be? there is nothing here, only a bunch of jibber jabber I cannot read! Manager. NOOOW!!! >" << std::endl;
	return ;
}

void	Karen::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "Karen says: < Are you dead serious? What do you want me to do with all this bunch of unused parameters? get me your C.E.O. now! >" << std::endl;
	return ;
}

void	Karen::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "Karen says: < I don't understand Karen memes! Hence I don't like them! I want to speak to your manager! >" << std::endl;
	return ;
}
