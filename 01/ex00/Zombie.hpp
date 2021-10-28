/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 10:11:00 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/28 10:33:34 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

//	INCLUDES :
# include <iostream>

//	CLASSES :
class Zombie
{
private:
	std::string	_name;
public:
	Zombie(/* args */);
	~Zombie();

	void	announce() const;
	Zombie*	newZombie(std::string name);
	void	randomChump(std::string name);
};




#endif