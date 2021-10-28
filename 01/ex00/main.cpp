/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 10:10:19 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/28 15:48:19 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	ghoul("Michael Meyers");
	ghoul.announce();

	randomChump("Jason");
	
	Zombie	*undead = newZombie("Freddy Krüeger");
	undead->announce();
	delete undead;
	
	return (0);
}
