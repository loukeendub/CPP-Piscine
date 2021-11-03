/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loukeen <loukeen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:31:43 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/03 09:34:26 by loukeen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main()
{
	{
		Weapon        club = Weapon("crude spiked club");

		HumanA bob("Bob", club);
		bob.attack();
		club.setType("rubber chicken");
		bob.attack();
	}
	{
		Weapon        club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("Grandpa's walking stick"); jim.attack();
	}
	return (0);
}