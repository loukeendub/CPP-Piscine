/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 10:13:32 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/28 12:18:57 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	*revenant = newZombie(name);
	revenant->announce();
	std::cout << "Zombie " << revenant->getName() << " returned to Crystal Lake" << std::endl;
	delete revenant;
	return ;
}