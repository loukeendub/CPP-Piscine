/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:36:09 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/15 17:36:10 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap	clap("T-800");

	//T1
	clap.attack("Kyle Reese");
	clap.takeDamage(7);
	clap.beRepaired(39);

	//T2 - Judgement Day
	ScavTrap	trap("T-1000");
	std::cout << "HP : " << trap.getHP() << std::endl;
	std::cout << "EP : " << trap.getEP() << std::endl;
	std::cout << "AD : " << trap.getAD() << std::endl;
	trap.attack("John Connor's Foster Parents");
	trap.takeDamage(100);
	trap.beRepaired(42);

	return (0);
}
