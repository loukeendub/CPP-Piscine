/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 10:10:19 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/28 12:23:50 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	ghoul("Michael Meyers");
	randomChump("Jason");
	Zombie	*undead = newZombie("Freddy Krueger");
	undead->announce();
	std::cout << "Zombie " << undead->getName() << " returned to Elm Street" << std::endl;
	delete undead;	
	
	return (0);
}
