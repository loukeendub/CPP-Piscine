/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 10:11:00 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/28 15:28:53 by lmarzano         ###   ########.fr       */
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
	Zombie();
	~Zombie();

	std::string	getName()	const;
	void		setName(std::string name);

	void		announce() const;
};

Zombie*		zombieHorde( int N, std::string name );

#endif
