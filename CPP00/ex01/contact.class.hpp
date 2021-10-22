/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:36:38 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/22 14:43:29 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <iomanip>//	setw

class contact
{
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_no;
	std::string	_darkest_secret;
	bool		_init;

public:
	contact(/* args */);
	~contact();

	bool	checkInit() const;
	void	printSearchField(std::string data) const;
	void	fillContactInfo();
	void	displaySearchFields(int i) const;
	void	displayContactInfo() const;
};
#endif
