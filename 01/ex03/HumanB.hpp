/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:36:37 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/03 12:38:27 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

//	INCLUDES
# include <iostream>
# include "Weapon.hpp"

//	CLASS
class HumanB
{
private:
	Weapon*		_weapon;
	std::string	_name;
	bool		isArmed;
public:
	HumanB(std::string name);
	~HumanB();

	void	attack();
	void	setWeapon(Weapon& type);
};

#endif
