/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 10:10:19 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/28 13:15:29 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	ghoul("Michael Meyers");// using constructor/destructor
	ghoul.announce();

	randomChump("Jason");//	using randomChump()
	
	Zombie	*undead = newZombie("Freddy Krueger");//	using heap memory allocation
	undead->announce();
	delete undead;//	free heap mem allocation
	
	return (0);
}
