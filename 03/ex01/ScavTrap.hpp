/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:35:20 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/16 12:32:35 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	bool    gatekeeper;

public:
	ScavTrap();
	ScavTrap(const ScavTrap& copy);
	ScavTrap(std::string name);
	~ScavTrap();

	void    guardGate();
	void	attack(std::string const& target);
	
};

#endif