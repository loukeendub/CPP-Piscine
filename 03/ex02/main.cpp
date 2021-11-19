/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:36:09 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/16 12:06:39 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	// T1
	// std::cout << "{ T1 - TERMINATOR }" << std::endl;
	// ClapTrap	clap("T-800");

	// std::cout << "HP : " << clap.getHP() << std::endl;
	// std::cout << "EP : " << clap.getEP() << std::endl;
	// std::cout << "AD : " << clap.getAD() << std::endl;
	// clap.attack("Kyle Reese");
	// clap.takeDamage(7);
	// clap.beRepaired(39);

	// //T2 - Judgement Day
	// std::cout << "{{ T2 - JUDGEMENT DAY }}" << std::endl;
	// ScavTrap	trap("T-1000");
	
	// trap.guardGate();
	// std::cout << "HP : " << trap.getHP() << std::endl;
	// std::cout << "EP : " << trap.getEP() << std::endl;
	// std::cout << "AD : " << trap.getAD() << std::endl;
	// trap.attack("John Connor's Foster Parents");
	// trap.takeDamage(50);
	// trap.beRepaired(31);
	// trap.beRepaired(11);

	//T3 - Rise of the Machines
	std::cout << "{{{ T3 - RISE OF THE MACHINES }}}" << std::endl;
	FragTrap	frag("T-X");

	std::cout << "HP : " << frag.getHP() << std::endl;
	std::cout << "EP : " << frag.getEP() << std::endl;
	std::cout << "AD : " << frag.getAD() << std::endl;
	frag.highFivesGuys();
	frag.attack("John Connor's Resistance Lieutenants");
	frag.takeDamage(300);
	frag.beRepaired(242);

	return (0);
}
