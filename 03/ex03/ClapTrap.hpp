/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:36:02 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/16 15:03:20 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
private:
	std::string	_name;
	unsigned int			_hitPoints;
	unsigned int			_energyPoints;
	unsigned int			_attackDamage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& copy);
	~ClapTrap();

	void			attack(std::string const& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

	void			operator = (const ClapTrap &op);
	
	void			setHP(unsigned int hp);
	void			setEP(unsigned int hp);
	void			setAD(unsigned int hp);

	int				getHP() const;
	int				getEP() const;
	int				getAD() const;
	std::string		getName() const;
};

#endif
