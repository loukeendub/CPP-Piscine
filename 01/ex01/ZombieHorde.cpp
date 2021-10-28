/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:56:22 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/28 16:09:22 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*		zombieHorde( int N, std::string name )
{
	Zombie*		horde = new Zombie[N];
	std::string	nameZ[] = {"Otto", "Jürgen", "Adolf", "Uwe", "Frau Blucker", "Hans", "Klaus"};
	int			i = 0;
	horde[0].setName(name);
	while (++i < N)
		horde[i].setName(nameZ[i - 1]);
	return(horde);
}