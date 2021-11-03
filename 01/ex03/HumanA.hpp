/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:35:15 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/03 12:32:07 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

//	INCLUDES
# include <iostream>
# include "Weapon.hpp"

//	CLASS
class HumanA
{
private:
	Weapon&	_weapon;
	std::string	_name;
public:
	HumanA(std::string name, Weapon& type);
	~HumanA();

	void	attack();//	displays "NAME attacks with his WEAPON_TYPE"
};

#endif
