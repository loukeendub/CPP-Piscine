/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:19:26 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/28 16:05:06 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*horde;
	int		nbZombies = 8;
	int		i = 0;
	
	horde = zombieHorde(nbZombies, "Günther");
	while (i < nbZombies)
	{
		horde[i].announce();
		i++;
	}
	delete [] horde;
	return (0);
}