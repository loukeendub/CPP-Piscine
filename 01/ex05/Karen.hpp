/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:35:41 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/03 15:43:47 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

// class
class Karen
{
private:
	void	debug();
	void	info();
	void	warning();
	void	error();
public:
	Karen(/* args */);
	~Karen();

	void complain( std::string level );
};

#endif