/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:34:27 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/15 19:24:50 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	//T1 - TERMINATOR
	std::cout << "{ T1 - TERMINATOR }" << std::endl;
	ClapTrap	clap("T-800");

	//Test 1
	clap.attack("Kyle Reese");
	clap.takeDamage(7);
	clap.beRepaired(39);

	//test 2
	clap.attack("Sarah Connor");
	clap.takeDamage(100);
	clap.beRepaired(42);

	return (0);
}
