/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:33:30 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/10 16:40:22 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

//	INCLUDES
# include <iostream>

//	CLASS
class Weapon
{
private:
	std::string	_type;
public:
	Weapon(std::string type);
	~Weapon();

	const std::string&	getType();
	void				setType(std::string type);	
};

#endif
