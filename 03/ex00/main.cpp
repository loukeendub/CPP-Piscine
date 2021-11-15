/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:34:27 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/15 17:34:29 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	clap("T-800");

	//T1 - Test 1
	clap.attack("Kyle Reese");
	clap.takeDamage(7);
	clap.beRepaired(39);

	//T1 - test 2
	clap.attack("Sarah Connor");
	clap.takeDamage(100);
	clap.beRepaired(42);

	return (0);
}
